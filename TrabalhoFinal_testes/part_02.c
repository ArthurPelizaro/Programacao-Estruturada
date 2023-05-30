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
    printf("6. Colorir uma imagem artificialmente.\n");
    printf("7. Rotacionar uma imagem 90 graus para a direita.\n");
    printf("8. Rotacionar uma imagem 90 graus para a esquerda.\n");
    printf("9. Gerar uma imagem cópia da original, porém com uma parte da imagem em escala de cinza.\n");
    printf("10. Gerar três arquivos de saída. Um para cada camada (R, G e B).\n");
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
    case 6:
        // Carrega a imagem colorida
        Mat imagemColorida = imread("imagem.jpg", IMREAD_COLOR);

        // Verifica se a imagem foi carregada corretamente
        if (imagemColorida.empty())
        {
            printf("Erro ao carregar a imagem!\n");
            return -1;
        }

        // Converte a imagem colorida para escala de cinza
        Mat imagemCinza;
        cvtColor(imagemColorida, imagemCinza, COLOR_BGR2GRAY);

        // Cria uma matriz para armazenar a imagem colorida artificialmente
        Mat imagemColoridaArtificialmente;
        cvtColor(imagemCinza, imagemColoridaArtificialmente, COLOR_GRAY2BGR);

        // Define seis cores aleatórias
        Vec3b cores[6] = {Vec3b(255, 0, 0), Vec3b(0, 255, 0), Vec3b(0, 0, 255), Vec3b(255, 255, 0), Vec3b(255, 0, 255), Vec3b(0, 255, 255)};

        // Percorre a imagem e colore cada pixel com uma das seis cores aleatórias
        for (int i = 0; i < imagemColoridaArtificialmente.rows; i++)
        {
            for (int j = 0; j < imagemColoridaArtificialmente.cols; j++)
            {
                int indiceCor = rand() % 6;
                imagemColoridaArtificialmente.at<Vec3b>(i, j) = cores[indiceCor];
            }
        }

        // Salva a imagem colorida artificialmente
        imwrite("imagem_colorida_artificialmente.jpg", imagemColoridaArtificialmente);
        break;
    case 7:
        // Carrega a imagem
        Mat imagem = imread("imagem.jpg", IMREAD_COLOR);

        // Verifica se a imagem foi carregada corretamente
        if (imagem.empty())
        {
            printf("Erro ao carregar a imagem!\n");
            return -1;
        }

        // Cria uma matriz para armazenar a imagem rotacionada
        Mat imagemRotacionada;

        // Rotaciona a imagem 90 graus para a direita
        rotate(imagem, imagemRotacionada, ROTATE_90_CLOCKWISE);

        // Salva a imagem rotacionada
        imwrite("imagem_rotacionada.jpg", imagemRotacionada);
        break;
    case 8:
        // Carrega a imagem
        Mat imagem = imread("imagem.jpg", IMREAD_COLOR);

        // Verifica se a imagem foi carregada corretamente
        if (imagem.empty())
        {
            printf("Erro ao carregar a imagem!\n");
            return -1;
        }

        // Cria uma matriz para armazenar a imagem rotacionada
        Mat imagemRotacionada;

        // Rotaciona a imagem 90 graus para a esquerda
        rotate(imagem, imagemRotacionada, ROTATE_90_COUNTERCLOCKWISE);

        // Salva a imagem rotacionada
        imwrite("imagem_rotacionada.jpg", imagemRotacionada);
        break;
    case 9:
        // Carrega a imagem colorida
        Mat imagemColorida = imread("imagem.jpg", IMREAD_COLOR);

        // Verifica se a imagem foi carregada corretamente
        if (imagemColorida.empty())
        {
            printf("Erro ao carregar a imagem!\n");
            return -1;
        }

        // Converte a imagem colorida para escala de cinza
        Mat imagemCinza;
        cvtColor(imagemColorida, imagemCinza, COLOR_BGR2GRAY);

        // Cria uma cópia da imagem colorida
        Mat imagemCopia = imagemColorida.clone();

        // Define a região da imagem que será convertida para escala de cinza
        Rect regiao(0, 0, imagemCopia.cols / 2, imagemCopia.rows);

        // Substitui a região definida pela versão em escala de cinza
        Mat roi = imagemCopia(regiao);
        Mat roiCinza = imagemCinza(regiao);
        cvtColor(roiCinza, roiCinza, COLOR_GRAY2BGR);
        roiCinza.copyTo(roi);

        // Salva a imagem resultante
        imwrite("imagem_copia.jpg", imagemCopia);
        break;
    case 10:
        // Carrega a imagem colorida
        Mat imagemColorida = imread("imagem.jpg", IMREAD_COLOR);

        // Verifica se a imagem foi carregada corretamente
        if (imagemColorida.empty())
        {
            printf("Erro ao carregar a imagem!\n");
            return -1;
        }

        // Cria três matrizes para armazenar as camadas R, G e B
        Mat camadaR(imagemColorida.size(), CV_8UC1);
        Mat camadaG(imagemColorida.size(), CV_8UC1);
        Mat camadaB(imagemColorida.size(), CV_8UC1);

        // Separa as camadas R, G e B da imagem colorida
        Mat camadas[] = {camadaB, camadaG, camadaR};
        split(imagemColorida, camadas);

        // Salva as camadas R, G e B em arquivos separados
        imwrite("camada_r.jpg", camadaR);
        imwrite("camada_g.jpg", camadaG);
        imwrite("camada_b.jpg", camadaB);
        break;
    default:
        printf("Opção inválida!\n");
    }

    return 0;
}
