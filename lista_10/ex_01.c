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

void convertToGrayScale(char* input_filename, char* output_filename) {
    FILE* input_file = fopen(input_filename, "rb");
    if (input_file == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return;
    }

    BMPHeader header;
    fread(&header, sizeof(BMPHeader), 1, input_file);

    if (header.bpp != 24) {
        printf("Apenas imagens de 24 bits por pixel são suportadas.\n");
        fclose(input_file);
        return;
    }

    FILE* output_file = fopen(output_filename, "wb");
    if (output_file == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(input_file);
        return;
    }

    fwrite(&header, sizeof(BMPHeader), 1, output_file);

    int padding = (4 - (header.width * 3) % 4) % 4;

    for (int y = 0; y < header.height; y++) {
        for (int x = 0; x < header.width; x++) {
            uint8_t pixel[3];
            fread(pixel, sizeof(uint8_t), 3, input_file);

            uint8_t gray = (pixel[0] + pixel[1] + pixel[2]) / 3;
            uint8_t new_pixel[3] = {gray, gray, gray};
            fwrite(new_pixel, sizeof(uint8_t), 3, output_file);
        }

        // Pular bytes de preenchimento
        fseek(input_file, padding, SEEK_CUR);

        // Preencher bytes de preenchimento no arquivo de saída
        uint8_t padding_byte = 0;
        fwrite(&padding_byte, sizeof(uint8_t), padding, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    printf("Conversão concluída. Imagem em escala de cinza salva em %s.\n", output_filename);
}

int main() {
    char input_filename[100];
    char output_filename[100];

    printf("Digite o nome do arquivo de entrada (BMP): ");
    scanf("%s", input_filename);

    printf("Digite o nome do arquivo de saída (BMP): ");
    scanf("%s", output_filename);

    convertToGrayScale(input_filename, output_filename);

    return 0;
}
