#include <stdio.h>
#include <stdlib.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
    int opcao;
    printf("Sistema de tratamento de imagens\n");
    printf("1. Converter uma imagem colorida para escala de cinza.\n");
    printf("2. Espelhar uma imagem horizontalmente.\n");
    printf("3. Espelhar uma imagem verticalmente.\n");
    printf("4. Dividir uma imagem em dois arquivos (um arquivo com a metade esquerda, e outro arquivo com a metade direita).\n");
    printf("5. Dividir uma imagem em dois arquivos (um arquivo com a metade superior, e outro arquivo com a metade inferior).\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
            // Carrega a imagem colorida
            Mat imagemColorida = imread("imagem.jpg", IMREAD_COLOR);

            // Verifica se a imagem foi carregada corretamente
            if (imagemColorida.empty())
            {
                printf("Erro ao carregar a imagem!\n");
                return -1;
            }

            // Cria uma matriz para armazenar a imagem em escala de cinza
            Mat imagemCinza;

            // Converte a imagem colorida para escala de cinza
            cvtColor(imagemColorida, imagemCinza, COLOR_BGR2GRAY);

            // Salva a imagem em escala de cinza
            imwrite("imagem_cinza.jpg", imagemCinza);
        break;
    case 2:
            // Carrega a imagem
            Mat imagem = imread("imagem.jpg", IMREAD_COLOR);

            // Verifica se a imagem foi carregada corretamente
            if (imagem.empty())
            {
                printf("Erro ao carregar a imagem!\n");
                return -1;
            }

            // Cria uma matriz para armazenar a imagem espelhada
            Mat imagemEspelhada;

            // Espelha a imagem horizontalmente
            flip(imagem, imagemEspelhada, 1);

            // Salva a imagem espelhada
            imwrite("imagem_espelhada.jpg", imagemEspelhada);
        break;
    case 3:
            // Carrega a imagem
            Mat imagem = imread("imagem.jpg", IMREAD_COLOR);

            // Verifica se a imagem foi carregada corretamente
            if (imagem.empty())
            {
                printf("Erro ao carregar a imagem!\n");
                return -1;
            }

            // Cria uma matriz para armazenar a imagem espelhada
            Mat imagemEspelhada;

            // Espelha a imagem verticalmente
            flip(imagem, imagemEspelhada, 0);

            // Salva a imagem espelhada
            imwrite("imagem_espelhada.jpg", imagemEspelhada);
        break;
    case 4:
            // Carrega a imagem
            Mat imagem = imread("imagem.jpg", IMREAD_COLOR);

            // Verifica se a imagem foi carregada corretamente
            if (imagem.empty())
            {
                printf("Erro ao carregar a imagem!\n");
                return -1;
            }

            // Calcula o ponto médio da imagem
            int pontoMedio = imagem.cols / 2;

            // Cria duas matrizes para armazenar as metades da imagem
            Mat metadeEsquerda = imagem(Rect(0, 0, pontoMedio, imagem.rows));
            Mat metadeDireita = imagem(Rect(pontoMedio, 0, imagem.cols - pontoMedio, imagem.rows));

            // Salva as metades da imagem
            imwrite("metade_esquerda.jpg", metadeEsquerda);
            imwrite("metade_direita.jpg", metadeDireita);
        break;
    case 5:
            // Carrega a imagem
            Mat imagem = imread("imagem.jpg", IMREAD_COLOR);

            // Verifica se a imagem foi carregada corretamente
            if (imagem.empty())
            {
                printf("Erro ao carregar a imagem!\n");
                return -1;
            }

            // Calcula o ponto médio da imagem
            int pontoMedio = imagem.rows / 2;

            // Cria duas matrizes para armazenar as metades da imagem
            Mat metadeSuperior = imagem(Rect(0, 0, imagem.cols, pontoMedio));
            Mat metadeInferior = imagem(Rect(0, pontoMedio, imagem.cols, imagem.rows - pontoMedio));

            // Salva as metades da imagem
            imwrite("metade_superior.jpg", metadeSuperior);
            imwrite("metade_inferior.jpg", metadeInferior);
        break;
    default:
        printf("Opção inválida!\n");
    }

    return 0;
}
