#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#pragma pack(1)
typedef struct {
    char signature[2];
    uint32_t width;
    uint32_t height;
    uint16_t bpp;
    uint32_t compression;
    uint32_t image_size;
    uint32_t x_ppm;
    uint32_t y_ppm;
    uint32_t colors_used;
    uint32_t important_colors;
} BMPHeader;

void verticalFlip(char* input_filename, char* output_filename) {
    FILE* input_file = fopen(input_filename, "rb");
    if (input_file == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    BMPHeader header;
    fread(&header, sizeof(BMPHeader), 1, input_file);

    FILE* output_file = fopen(output_filename, "wb");
    if (output_file == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(input_file);
        return;
    }

    fwrite(&header, sizeof(BMPHeader), 1, output_file);

    int padding = (4 - (header.width * (header.bpp / 8)) % 4) % 4;

    uint8_t* row_buffer = (uint8_t*)malloc(header.width * (header.bpp / 8));

    for (int y = header.height - 1; y >= 0; y--) {
        fseek(input_file, sizeof(BMPHeader) + (header.width * (header.bpp / 8) + padding) * y, SEEK_SET);
        fread(row_buffer, sizeof(uint8_t), header.width * (header.bpp / 8), input_file);

        fwrite(row_buffer, sizeof(uint8_t), header.width * (header.bpp / 8), output_file);

        // Preencher bytes de preenchimento no arquivo de saída
        uint8_t padding_byte = 0;
        fwrite(&padding_byte, sizeof(uint8_t), padding, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    free(row_buffer);

    printf("Espelhamento vertical concluído. Imagem salva em %s.\n", output_filename);
}

int main() {
    char input_filename[100];
    char output_filename[100];

    printf("Digite o nome do arquivo de entrada (BMP): ");
    scanf("%s", input_filename);

    printf("Digite o nome do arquivo de saída (BMP): ");
    scanf("%s", output_filename);

    verticalFlip(input_filename, output_filename);

    return 0;
}
