#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char jogador1[100], jogador2[100];
    int opicoes, confi, loop = 1, repet;

    while (loop == 1)
    {
        printf("\n\t888b     d888                   888                                   d8b               888 ");
        printf("\n\t8888b   d8888                   888                                   Y8P               888 ");
        printf("\n\t88888b.d88888                   888                                                     888 ");
        printf("\n\t888Y88888P888  8888b.  .d8888b  888888  .d88b.  888d888 88888b.d88b.  888 88888b.   .d88888 ");
        printf("\n\t888 Y888P 888      88b 88K      888    d8P  Y8b 888P    888  888  88b 888 888  88b d88  888 ");
        printf("\n\t888  Y8P  888 .d888888  Y8888b. 888    88888888 888     888  888  888 888 888  888 888  888 ");
        printf("\n\t888   v   888 888  888      X88 Y88b.  Y8b.     888     888  888  888 888 888  888 Y88b 888 ");
        printf("\n\t888       888  Y888888  88888P'   Y888   Y8888  888     888  888  888 888 888  888   Y88888 ");

        printf("\n\n\t\t\tDesenvolvedores: Ana Rode, Leomira Couto e Vinicio Couto");
        printf("\n\t\t\t\t\t\t\t\t\t\t2023\n");

        printf("\t\t+-------------------------------------------------------------------------+\n");
        printf("\t\t|-----------------------------MASTERMIND----------------------------------|\n");
        printf("\t\t|   Digite 1 para jogar com Rufus;                                        |\n");
        printf("\t\t|   Digite 2 para jogar com um amigo;                                     |\n");
        printf("\t\t|   Digite 3 para acessar as instrucoes;                                  |\n");
        printf("\t\t|   Digite 4 para acessar algumas informacoes sobre o projeto;            |\n");
        printf("\t\t|   Digite 5 para sair do jogo;                                           |\n");
        printf("\t\t+-------------------------------------------------------------------------+\n");
        printf("\t\tDigite aqui:");
        scanf("%i", &opicoes);

        switch (opicoes)
        {
        case (1):
            printf("\t\t+-------------------------------------------------------------------------+\n");
            printf("\t\t|----------------------------------MODO-----------------------------------|\n");
            printf("\t\t|   1. Para jogar no modo (Facil)                                         |\n");
            printf("\t\t|   2. Para jogar no modo (Medio)                                         |\n");
            printf("\t\t|   3. Para jogar no modo (Dificil)                                       |\n");
            printf("\t\t+-------------------------------------------------------------------------+\n");
            printf("\t\tDigite aqui:");
            scanf("%i", &confi);
            system("cls");
            break;

        case (2):
            printf("\t\t+-------------------------------------------------------------------------+\n");
            printf("\t\t|----------------------------------MODO-----------------------------------|\n");
            printf("\t\t|   4. Para jogar no modo (Facil)                                         |\n");
            printf("\t\t|   5. Para jogar no modo (Medio)                                         |\n");
            printf("\t\t|   6. Para jogar no modo (Dificil)                                       |\n");
            printf("\t\t+-------------------------------------------------------------------------+\n");
            printf("\t\tDigite aqui:");
            scanf("%i", &confi);
            system("cls");
            break;

        case (3):
            system("cls");
            printf("\t\t+-------------------------------------------------------------------------+\n");
            printf("\t\t|-----------------------------INSTRUCOES----------------------------------|\n");
            printf("\t\t|   O jogo consiste em descobrir a senha gerada pelo sistema              |\n");
            printf("\t\t|   A palavra 'preto' indica posicao e numero correto                     |\n");
            printf("\t\t|   Ex: preto(2) indica que ha dois valores e posicoes corretas           |\n");
            printf("\t\t|   A palavra 'branco' indica somente valor correto                       |\n");
            printf("\t\t|   Ex: branco(2) indica que ha dois valores corretos mas as posicoes     |\n");
            printf("\t\t|   estao erradas.                                                        |\n");
            printf("\t\t|   Obs: O jogo nunca avisa quais valores ou posicoes estao corretas!     |\n");
            printf("\t\t+-------------------------------------------------------------------------+\n\n");

            printf("\t\t+-------------------------------------------------------------------------+\n");
            printf("\t\t|-----------------------------INSTRUCOES----------------------------------|\n");
            printf("\t\t|   Jogando com o Rufus:                                                  |\n");
            printf("\t\t|   Rufus e um homem ranzinza e muito metido por conta a sua fama de ser  |\n");
            printf("\t\t|   o 'melhor' jogador de Mastermind (de acordo com ele propio).          |\n");
            printf("\t\t|                                                                         |\n");
            printf("\t\t|   A partida com Rufus sera diferente de acordo com sua escolha de difi- |\n");
            printf("\t\t|   cudade, se voce escolheu o modo (Facil), para vence-lo deve conseguir |\n");
            printf("\t\t|   descobrir a senha ate a nona tentativa, para o modo (Medio) e ate a   |\n");
            printf("\t\t|   setima tentativa, e no modo (Dificil) na quinta tentativa.            |\n");
            printf("\t\t+-------------------------------------------------------------------------+\n\n");

            printf("\t\t+-------------------------------------------------------------------------+\n");
            printf("\t\t|-----------------------------INSTRUCOES----------------------------------|\n");
            printf("\t\t|   Jogando com um amigo:                                                 |\n");
            printf("\t\t|   No modo 'Jogando com um amigo', quem irar escolher a senha para seu   |\n");
            printf("\t\t|   adversario sera voce mesmo... mudando apenas a quantidade de          |\n");
            printf("\t\t|   tentativas de acordo com a dificuldade:                               |\n");
            printf("\t\t|   Facil= 10                                                             |\n");
            printf("\t\t|   Medio= 8                                                              |\n");
            printf("\t\t|   Dificil= 6                                                            |\n");
            printf("\t\t|   Para ganhar voce deve descobrir a senha do seu amigo mais rapido      |\n");
            printf("\t\t|   (Usando menos tentativas) que ele.                                    |\n");
            printf("\t\t+-------------------------------------------------------------------------+\n");

            confi = 8;
            break;

        case (4):
            system("cls");
            printf("\t\t+---------------------------------------------------------------------------+\n");
            printf("\t\t|---------------------------------PROJETO-----------------------------------|\n");
            printf("\t\t|   Desenvolvido por Ana Rode, Leomira Couto e Vinicio Couto discentes no   |\n");
            printf("\t\t|   curso de Analise e Desenvolvimento de Sistemas do IF-Baiano de Guanambi,|\n");
            printf("\t\t|   no ano de 2023 no semestre 2022.1 para a obtencao de nota na materia de |\n");
            printf("\t\t|   Algoritmo ministrada pelo professor Romulo de Oliveira Nunes.           |\n");
            printf("\t\t+---------------------------------------------------------------------------+\n");
            confi = 8;
            break;

        case (5):
            confi = 7;
            break;
        }

        switch (confi)
        {
        case (1):

            printf("\n\t\t\t888888b.                                         d8b               888          ");
            printf("\n\t\t\t888   88b                                        Y8P               888          ");
            printf("\n\t\t\t888  .88P                                                          888          ");
            printf("\n\t\t\t8888888K.   .d88b.  88888b.d88b.        888  888 888 88888b.   .d88888  .d88b.  ");
            printf("\n\t\t\t888   Y88b d8P  Y8b 888  888  88b       888  888 888 888  88b d88  888 d88  88b ");
            printf("\n\t\t\t888    888 88888888 888  888  888       Y88  88P 888 888  888 888  888 888  888 ");
            printf("\n\t\t\t888   d88P Y8b.     888  888  888        Y8bd8P  888 888  888 Y88b 888 Y88..88P ");
            printf("\n\t\t\t8888888P     Y8888  888  888  888         Y88P   888 888  888   Y88888   Y88P   ");

            printf("\n\n\n\t\t[???]Ola! Meu nome e Rufus, voce deve me conhecer, sou o melhor jogador de Mastermind.\n\n\t\t[Rufus]Mastermind e um jogo que consiste basicamente em descobrir a senha gerada por alguem.\n\n\t\t[Rufus]E porque voce esta aqui? Ficou curioso? Vou logo avisando, esse jogo e para poucos, nao\n\t\t sei se voce teria essa capacidade...");

            printf("\n\n\t\tDigite seu nome: ");
            scanf("%s", &jogador1);

            printf("\n\n\t\t[Rufus] %s? EEE... Pelo menos sua mae tem bom gosto\n\n", jogador1);

            printf("\n\n\t\t[Rufus] Entao vamos la, %s, Eu poderia colocar qualquer  combinacao que eu quisesse na senha,\n\t\t mas vou de dar uma vantagem: \n\n", jogador1);

            printf("\n\n\t\t Digete 1 para Rufus nao usar numeros repetidos (1,2,3,4...)\n\t\t Digete 2 para deixar Rufus usar numeros repetidos (1,2,3,2...):\n\n\t\t(obs:Tem uma probabilidade do numero vir repitido)\n");

            printf("\n\n\t\tDigite Aqui:");
            scanf("%i", &repet);

            if (repet == 1)
            {
                char numerogerado[4];
                int numeros[4];
                int i, k;

                srand((unsigned)time(NULL));

                for (i = 0; i < 4; i++)
                { 

                    numeros[i] = 1 + (rand() % 6);
                    for (k = 0; k <= i - 1; k++)
                    {
                        if (numeros[i] == numeros[k])
                        {
                            i -= 1;
                        }
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros[i] == 1)
                    {
                        numerogerado[i] = '1';
                    }
                    else if (numeros[i] == 2)
                    {
                        numerogerado[i] = '2';
                    }
                    if (numeros[i] == 3)
                    {
                        numerogerado[i] = '3';
                    }
                    if (numeros[i] == 4)
                    {
                        numerogerado[i] = '4';
                    }
                    if (numeros[i] == 5)
                    {
                        numerogerado[i] = '5';
                    }
                    if (numeros[i] == 6)
                    {
                        numerogerado[i] = '6';
                    }
                }

                printf("\n\n\t\t[Rufus] Nao poderei usar numeros repetidos, Ok. Entao oque acha de comecarmos?\n\t\t Vamos ver se voce consegue bater meu recorde...\n\n");

                printf("\n\n\t\t Para voce ganhar desse otario voce deve conseguir descobrir a sequencia numerica\n\t\t com o menor numero de tentativas possivel.\n\t\t (O recorde de Rufus e de 9 tentativas, consiga antes disso e ganhe).\n");

                system("pause");
                system("cls");

                char tentativas[9 * 4];
                char verificacoes[9 * 4];
                for (int i = 1; i < 9 * 4; i++)
                {
                    tentativas[i] = ' ';
                    verificacoes[i] = ' ';
                }
                int win = 2;
                int maior = 1;
                int quantidadeTentativas = 0;
                int acertou = 0;
                while (win != 1 && quantidadeTentativas < 10)
                {
                    system("cls");
                    int coluna = 35;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                        win = 1;
                    }
                    else if (quantidadeTentativas == 9)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                    }
                    for (int i = 9; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas[coluna - 3], tentativas[coluna - 2], tentativas[coluna - 1], tentativas[coluna], verificacoes[coluna - 3], verificacoes[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes[coluna - 1], verificacoes[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || Numeros:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou == 1)
                    {
                        printf("\n\n[Rufus]Mas a senha que eu escolhi era perfeita... Como?\n[Rufus]Eu sou do tipo de pessoa que so acredita vendo... Mas eu estou vendo e nao estou acreditando!\n[Rufus] Obvio que isso foi sorte de principiante %s, e ainda mais, no modo facil fica 'facil'\n[Rufus] Quero ver se vc consegue ter essa mesma sorte da proxima vez\n\n", jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s = 1 Lugar                           ||\n", jogador1);
                        printf("\t\t\t  ||     Rufus = 2 Lugar                        ||\n");
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                        if (quantidadeTentativas == 9)
                        {
                            printf("\n\n[Rufus] Eu te avisei que Martermind nao e para qualquer pessoa...\n[Rufus] Veja pelo lado positivo, agora voce vai poder falar para seu amigos que deve o privilegio de me\n conhecer, jogar comigo, e melhor ainda melhor...\n[Rufus] Contar que perdeu miseravelmente KKKKKK");

                            system("pause");
                            system("cls");

                            printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                            printf("\t\t\t  || Ranking:                                   ||\n");
                            printf("\t\t\t  ||     Rufus= 1  Lugar                        ||\n");
                            printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                            printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                        }
                    }

                    if (acertou != 1 && quantidadeTentativas < 9)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice = 0;
                        int verificaPosicao = 0;
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            scanf(" %c", &tentativas[i]);
                        }
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas[i] == numerogerado[x] && indice != x)
                                {
                                    verificacoes[i] = 'B';
                                    break;
                                }
                                else if (tentativas[i] == numerogerado[x] && indice == x)
                                {
                                    verificacoes[i] = 'P';
                                    verificaPosicao++;
                                    break;
                                }
                                else
                                {
                                    verificacoes[i] = 'X';
                                }
                            }
                            indice++;
                            if (verificaPosicao == 4)
                            {
                                acertou = 1;
                            }
                        }
                    }
                    maior = maior + 1;
                    quantidadeTentativas++;
                }
            }
            else
            {
                char numerogerado[4];
                int numeros[4];
                int i, k;

                srand(time(NULL));

                for (i = 0; i < 4; i++)
                { // Carregando o vetor

                    numeros[i] = 1 + (rand() % 6);
                    for (k = 0; k <= i - 1; k++)
                    {
                        if (numeros[i] == numeros[k])
                        {
                            i -= 1;
                        }
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros[i] == 1)
                    {
                        numerogerado[i] = '1';
                    }
                    else if (numeros[i] == 2)
                    {
                        numerogerado[i] = '2';
                    }
                    if (numeros[i] == 3)
                    {
                        numerogerado[i] = '3';
                    }
                    if (numeros[i] == 4)
                    {
                        numerogerado[i] = '4';
                    }
                    if (numeros[i] == 5)
                    {
                        numerogerado[i] = '5';
                    }
                    if (numeros[i] == 6)
                    {
                        numerogerado[i] = '6';
                    }
                }

                printf("\n\n\t\t[Rufus] Nao poderei usar numeros repetidos, Ok. Entao oque acha de comecarmos?\n\t\t Vamos ver se voce consegue bater meu recorde...\n\n");

                printf("\n\n\t\t Para voce ganhar desse otario voce deve conseguir descobrir a sequencia numerica\n\t\t com o menor numero de tentativas possivel.\n\t\t (O recorde de Rufus e de 9 tentativas, consiga antes disso e ganhe).\n");

                system("pause");
                system("cls");

                char tentativas[9 * 4];
                char verificacoes[9 * 4];
                for (int i = 1; i < 9 * 4; i++)
                {
                    tentativas[i] = ' ';
                    verificacoes[i] = ' ';
                }
                int win = 2;
                int maior = 1;
                int quantidadeTentativas = 0;
                int acertou = 0;
                while (win != 1 && quantidadeTentativas < 10)
                {
                    system("cls");
                    int coluna = 35;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                        win = 1;
                    }
                    else if (quantidadeTentativas == 9)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                    }
                    for (int i = 9; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas[coluna - 3], tentativas[coluna - 2], tentativas[coluna - 1], tentativas[coluna], verificacoes[coluna - 3], verificacoes[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes[coluna - 1], verificacoes[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || Numeros:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou == 1)
                    {
                        printf("\n\n[Rufus]Mas a senha que eu escolhi era perfeita... Como?\n[Rufus]Eu sou do tipo de pessoa que so acredita vendo... Mas eu estou vendo e nao estou acreditando!\n[Rufus] Obvio que isso foi sorte de principiante %s, e ainda mais, no modo facil fica 'facil'\n[Rufus] Quero ver se vc consegue ter essa mesma sorte da proxima vez\n\n", jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s = 1 Lugar                           ||\n", jogador1);
                        printf("\t\t\t  ||     Rufus = 2 Lugar                        ||\n");
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                        if (quantidadeTentativas == 9)
                        {
                            printf("\n\n[Rufus] Eu te avisei que Martermind nao e para qualquer pessoa...\n[Rufus] Veja pelo lado positivo, agora voce vai poder falar para seu amigos que deve o privilegio de me\n conhecer, jogar comigo, e melhor ainda melhor...\n[Rufus] Contar que perdeu miseravelmente KKKKKK");

                            system("pause");
                            system("cls");

                            printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                            printf("\t\t\t  || Ranking:                                   ||\n");
                            printf("\t\t\t  ||     Rufus= 1  Lugar                        ||\n");
                            printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                            printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                        }
                    }

                    if (acertou != 1 && quantidadeTentativas < 9)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice = 0;
                        int verificaPosicao = 0;
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            scanf(" %c", &tentativas[i]);
                        }
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas[i] == numerogerado[x] && indice != x)
                                {
                                    verificacoes[i] = 'B';
                                    break;
                                }
                                else if (tentativas[i] == numerogerado[x] && indice == x)
                                {
                                    verificacoes[i] = 'P';
                                    verificaPosicao++;
                                    break;
                                }
                                else
                                {
                                    verificacoes[i] = 'X';
                                }
                            }
                            indice++;
                            if (verificaPosicao == 4)
                            {
                                acertou = 1;
                            }
                        }
                    }
                    maior = maior + 1;
                    quantidadeTentativas++;
                }
            }

            break;

        case (2):
            printf("\n\t\t\t888888b.                                         d8b               888          ");
            printf("\n\t\t\t888   88b                                        Y8P               888          ");
            printf("\n\t\t\t888  .88P                                                          888          ");
            printf("\n\t\t\t8888888K.   .d88b.  88888b.d88b.        888  888 888 88888b.   .d88888  .d88b.  ");
            printf("\n\t\t\t888   Y88b d8P  Y8b 888  888  88b       888  888 888 888  88b d88  888 d88  88b ");
            printf("\n\t\t\t888    888 88888888 888  888  888       Y88  88P 888 888  888 888  888 888  888 ");
            printf("\n\t\t\t888   d88P Y8b.     888  888  888        Y8bd8P  888 888  888 Y88b 888 Y88..88P ");
            printf("\n\t\t\t8888888P     Y8888  888  888  888         Y88P   888 888  888   Y88888   Y88P   ");

            printf("\n\n\n\t\t[???]Ola! Meu nome e Rufus, voce deve me conhecer, sou o melhor jogador de Mastermind.\n\n\t\t[Rufus]Mastermind e um jogo que consiste basicamente em descobrir a senha gerada por alguem.\n\n\t\t[Rufus]E porque voce esta aqui? Ficou curioso? Vou logo avisando, esse jogo e para poucos, nao\n\t\t sei se voce teria essa capacidade...");

            printf("\n\n\t\tDigite seu nome: ");
            scanf("%s", &jogador1);

            printf("\n\n\t\t[Rufus] %s? EEE... Pelo menos sua mae tem bom gosto\n\n", jogador1);

            printf("\n\n\t\t[Rufus] Entao vamos la, %s, Eu poderia colocar qualquer  combinacao que eu quisesse na senha,\n\t\t mas vou de dar uma vantagem: \n\n", jogador1);

            printf("\n\n\t\t Digete 1 para Rufus nao usar numeros repetidos (1,2,3,4...)\n\t\t Digete 2 para deixar Rufus usar numeros repetidos (1,2,3,2...):\n\n\t\t(obs:Tem uma probabilidade do numero vir repitido)\n");

            printf("\n\n\t\tDigite Aqui:");
            scanf("%i", &repet);

            if (repet == 1)
            {
                char numerogerado[4];
                int numeros[4];
                int i, k;

                srand((unsigned)time(NULL));

                for (i = 0; i < 4; i++)
                { // Carregando o vetor

                    numeros[i] = 1 + (rand() % 6);
                    for (k = 0; k <= i - 1; k++)
                    {
                        if (numeros[i] == numeros[k])
                        {
                            i -= 1;
                        }
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros[i] == 1)
                    {
                        numerogerado[i] = '1';
                    }
                    else if (numeros[i] == 2)
                    {
                        numerogerado[i] = '2';
                    }
                    if (numeros[i] == 3)
                    {
                        numerogerado[i] = '3';
                    }
                    if (numeros[i] == 4)
                    {
                        numerogerado[i] = '4';
                    }
                    if (numeros[i] == 5)
                    {
                        numerogerado[i] = '5';
                    }
                    if (numeros[i] == 6)
                    {
                        numerogerado[i] = '6';
                    }
                }

                printf("\n\n\t\t[Rufus] Nao poderei usar numeros repetidos, Ok. Entao oque acha de comecarmos?\n\t\t Vamos ver se voce consegue bater meu recorde...\n\n");

                printf("\n\n\t\t Para voce ganhar desse otario voce deve conseguir descobrir a sequencia numerica\n\t\t com o menor numero de tentativas possivel.\n\t\t (O recorde de Rufus e de 7 tentativas, consiga antes disso e ganhe).\n");

                system("pause");
                system("cls");

                char tentativas[9 * 4];
                char verificacoes[9 * 4];
                for (int i = 1; i < 9 * 4; i++)
                {
                    tentativas[i] = ' ';
                    verificacoes[i] = ' ';
                }
                int win = 2;
                int maior = 1;
                int quantidadeTentativas = 0;
                int acertou = 0;
                while (win != 1 && quantidadeTentativas < 8)
                {
                    system("cls");
                    int coluna = 35;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                        win = 1;
                    }
                    else if (quantidadeTentativas == 7)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                    }
                    for (int i = 9; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas[coluna - 3], tentativas[coluna - 2], tentativas[coluna - 1], tentativas[coluna], verificacoes[coluna - 3], verificacoes[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes[coluna - 1], verificacoes[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || Numeros:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou == 1)
                    {
                        printf("\n\n[Rufus]Mas a senha que eu escolhi era perfeita... Como?\n[Rufus]Eu sou do tipo de pessoa que so acredita vendo... Mas eu estou vendo e nao estou acreditando!\n[Rufus] Obvio que isso foi sorte de principiante %s\n[Rufus] Quero ver se vc consegue ter essa mesma sorte da proxima vez\n\n", jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s = 1 Lugar                           ||\n", jogador1);
                        printf("\t\t\t  ||     Rufus = 2 Lugar                        ||\n");
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }

                    if (quantidadeTentativas == 7)
                    {
                        printf("\n\n[Rufus] Eu te avisei que Martermind nao e para qualquer pessoa...\n[Rufus] Veja pelo lado positivo, agora voce vai poder falar para seu amigos que deve o privilegio de me\n conhecer, jogar comigo, e melhor ainda melhor...\n[Rufus] Contar que perdeu miseravelmente KKKKKK");

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     Rufus= 1  Lugar                        ||\n");
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }

                    if (acertou != 1 && quantidadeTentativas < 7)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice = 0;
                        int verificaPosicao = 0;
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            scanf(" %c", &tentativas[i]);
                        }
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas[i] == numerogerado[x] && indice != x)
                                {
                                    verificacoes[i] = 'B';
                                    break;
                                }
                                else if (tentativas[i] == numerogerado[x] && indice == x)
                                {
                                    verificacoes[i] = 'P';
                                    verificaPosicao++;
                                    break;
                                }
                                else
                                {
                                    verificacoes[i] = 'X';
                                }
                            }
                            indice++;
                            if (verificaPosicao == 4)
                            {
                                acertou = 1;
                            }
                        }
                    }
                    maior = maior + 1;
                    quantidadeTentativas++;
                }
            }
            else
            {
                char numerogerado[4];
                int numeros[4];
                int i, k;

                srand(time(NULL));

                for (i = 0; i < 4; i++)
                { // Carregando o vetor

                    numeros[i] = 1 + (rand() % 6);
                    for (k = 0; k <= i - 1; k++)
                    {
                        if (numeros[i] == numeros[k])
                        {
                            i -= 1;
                        }
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros[i] == 1)
                    {
                        numerogerado[i] = '1';
                    }
                    else if (numeros[i] == 2)
                    {
                        numerogerado[i] = '2';
                    }
                    if (numeros[i] == 3)
                    {
                        numerogerado[i] = '3';
                    }
                    if (numeros[i] == 4)
                    {
                        numerogerado[i] = '4';
                    }
                    if (numeros[i] == 5)
                    {
                        numerogerado[i] = '5';
                    }
                    if (numeros[i] == 6)
                    {
                        numerogerado[i] = '6';
                    }
                }

                printf("\n\n\t\t[Rufus] Nao poderei usar numeros repetidos, Ok. Entao oque acha de comecarmos?\n\t\t Vamos ver se voce consegue bater meu recorde...\n\n");

                printf("\n\n\t\t Para voce ganhar desse otario voce deve conseguir descobrir a sequencia numerica\n\t\t com o menor numero de tentativas possivel.\n\t\t (O recorde de Rufus e de 7 tentativas, consiga antes disso e ganhe).\n");

                system("pause");
                system("cls");

                char tentativas[9 * 4];
                char verificacoes[9 * 4];
                for (int i = 1; i < 9 * 4; i++)
                {
                    tentativas[i] = ' ';
                    verificacoes[i] = ' ';
                }
                int win = 2;
                int maior = 1;
                int quantidadeTentativas = 0;
                int acertou = 0;
                while (win != 1 && quantidadeTentativas < 8)
                {
                    system("cls");
                    int coluna = 35;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                        win = 1;
                    }
                    else if (quantidadeTentativas == 7)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                    }
                    for (int i = 9; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas[coluna - 3], tentativas[coluna - 2], tentativas[coluna - 1], tentativas[coluna], verificacoes[coluna - 3], verificacoes[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes[coluna - 1], verificacoes[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || Numeros:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou == 1)
                    {
                        printf("\n\n[Rufus]Mas a senha que eu escolhi era perfeita... Como?\n[Rufus]Eu sou do tipo de pessoa que so acredita vendo... Mas eu estou vendo e nao estou acreditando!\n[Rufus] Obvio que isso foi sorte de principiante %s\n[Rufus] Quero ver se vc consegue ter essa mesma sorte da proxima vez\n\n", jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s = 1 Lugar                           ||\n", jogador1);
                        printf("\t\t\t  ||     Rufus = 2 Lugar                        ||\n");
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }

                    if (quantidadeTentativas == 7)
                    {
                        printf("\n\n[Rufus] Eu te avisei que Martermind nao e para qualquer pessoa...\n[Rufus] Veja pelo lado positivo, agora voce vai poder falar para seu amigos que deve o privilegio de me\n conhecer, jogar comigo, e melhor ainda melhor...\n[Rufus] Contar que perdeu miseravelmente KKKKKK");

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     Rufus= 1  Lugar                        ||\n");
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }

                    if (acertou != 1 && quantidadeTentativas < 7)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice = 0;
                        int verificaPosicao = 0;
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            scanf(" %c", &tentativas[i]);
                        }
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas[i] == numerogerado[x] && indice != x)
                                {
                                    verificacoes[i] = 'B';
                                    break;
                                }
                                else if (tentativas[i] == numerogerado[x] && indice == x)
                                {
                                    verificacoes[i] = 'P';
                                    verificaPosicao++;
                                    break;
                                }
                                else
                                {
                                    verificacoes[i] = 'X';
                                }
                            }
                            indice++;
                            if (verificaPosicao == 4)
                            {
                                acertou = 1;
                            }
                        }
                    }
                    maior = maior + 1;
                    quantidadeTentativas++;
                }
            }

            break;

        case (3):
            printf("\n\t\t\t888888b.                                         d8b               888          ");
            printf("\n\t\t\t888   88b                                        Y8P               888          ");
            printf("\n\t\t\t888  .88P                                                          888          ");
            printf("\n\t\t\t8888888K.   .d88b.  88888b.d88b.        888  888 888 88888b.   .d88888  .d88b.  ");
            printf("\n\t\t\t888   Y88b d8P  Y8b 888  888  88b       888  888 888 888  88b d88  888 d88  88b ");
            printf("\n\t\t\t888    888 88888888 888  888  888       Y88  88P 888 888  888 888  888 888  888 ");
            printf("\n\t\t\t888   d88P Y8b.     888  888  888        Y8bd8P  888 888  888 Y88b 888 Y88..88P ");
            printf("\n\t\t\t8888888P     Y8888  888  888  888         Y88P   888 888  888   Y88888   Y88P   ");

            printf("\n\n\n\t\t[???]Ola! Meu nome e Rufus, voce deve me conhecer, sou o melhor jogador de Mastermind.\n\n\t\t[Rufus]Mastermind e um jogo que consiste basicamente em descobrir a senha gerada por alguem.\n\n\t\t[Rufus]E porque voce esta aqui? Ficou curioso? Vou logo avisando, esse jogo e para poucos, nao\n\t\t sei se voce teria essa capacidade...");

            printf("\n\n\t\tDigite seu nome: ");
            scanf("%s", &jogador1);

            printf("\n\n\t\t[Rufus] %s? EEE... Pelo menos sua mae tem bom gosto\n\n", jogador1);

            printf("\n\n\t\t[Rufus] Entao vamos la, %s, Eu poderia colocar qualquer  combinacao que eu quisesse na senha,\n\t\t mas vou de dar uma vantagem: \n\n", jogador1);

            printf("\n\n\t\t Digete 1 para Rufus nao usar numeros repetidos (1,2,3,4...)\n\t\t Digete 2 para deixar Rufus usar numeros repetidos (1,2,3,2...):\n\n\t\t(obs:Tem uma probabilidade do numero vir repitido)\n");

            printf("\n\n\t\tDigite Aqui:");
            scanf("%i", &repet);

            if (repet == 1)
            {
                char numerogerado[4];
                int numeros[4];
                int i, k;

                srand((unsigned)time(NULL));

                for (i = 0; i < 4; i++)
                { // Carregando o vetor

                    numeros[i] = 1 + (rand() % 6);
                    for (k = 0; k <= i - 1; k++)
                    {
                        if (numeros[i] == numeros[k])
                        {
                            i -= 1;
                        }
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros[i] == 1)
                    {
                        numerogerado[i] = '1';
                    }
                    else if (numeros[i] == 2)
                    {
                        numerogerado[i] = '2';
                    }
                    if (numeros[i] == 3)
                    {
                        numerogerado[i] = '3';
                    }
                    if (numeros[i] == 4)
                    {
                        numerogerado[i] = '4';
                    }
                    if (numeros[i] == 5)
                    {
                        numerogerado[i] = '5';
                    }
                    if (numeros[i] == 6)
                    {
                        numerogerado[i] = '6';
                    }
                }

                printf("\n\n\t\t[Rufus] Nao poderei usar numeros repetidos, Ok. Entao oque acha de comecarmos?\n\t\t Vamos ver se voce consegue bater meu recorde...\n\n");

                printf("\n\n\t\t Para voce ganhar desse otario voce deve conseguir descobrir a sequencia numerica\n\t\t com o menor numero de tentativas possivel.\n\t\t (O recorde de Rufus e de 5 tentativas, consiga antes disso e ganhe).\n");

                system("pause");
                system("cls");

                char tentativas[9 * 4];
                char verificacoes[9 * 4];
                for (int i = 1; i < 9 * 4; i++)
                {
                    tentativas[i] = ' ';
                    verificacoes[i] = ' ';
                }
                int win = 2;
                int maior = 1;
                int quantidadeTentativas = 0;
                int acertou = 0;
                while (win != 1 && quantidadeTentativas < 8)
                {
                    system("cls");
                    int coluna = 35;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                        win = 1;
                    }
                    else if (quantidadeTentativas == 5)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                    }
                    for (int i = 9; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas[coluna - 3], tentativas[coluna - 2], tentativas[coluna - 1], tentativas[coluna], verificacoes[coluna - 3], verificacoes[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes[coluna - 1], verificacoes[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || Numeros:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou == 1)
                    {
                        printf("\n\n[Rufus]Mas a senha que eu escolhi era perfeita... Como?\n[Rufus]Eu sou do tipo de pessoa que so acredita vendo... Mas eu estou vendo e nao estou acreditando!\n[Rufus] Obvio que isso foi sorte de principiante %s\n[Rufus] Quero ver se vc consegue ter essa mesma sorte da proxima vez\n\n", jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s = 1 Lugar                           ||\n", jogador1);
                        printf("\t\t\t  ||     Rufus = 2 Lugar                        ||\n");
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }

                    if (quantidadeTentativas == 5)
                    {
                        printf("\n\n[Rufus] Eu te avisei que Martermind nao e para qualquer pessoa...\n[Rufus] Veja pelo lado positivo, agora voce vai poder falar para seu amigos que deve o privilegio de me\n conhecer, jogar comigo, e melhor ainda melhor...\n[Rufus] Contar que perdeu miseravelmente KKKKKK");

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     Rufus= 1  Lugar                        ||\n");
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }

                    if (acertou != 1 && quantidadeTentativas < 5)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice = 0;
                        int verificaPosicao = 0;
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            scanf(" %c", &tentativas[i]);
                        }
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas[i] == numerogerado[x] && indice != x)
                                {
                                    verificacoes[i] = 'B';
                                    break;
                                }
                                else if (tentativas[i] == numerogerado[x] && indice == x)
                                {
                                    verificacoes[i] = 'P';
                                    verificaPosicao++;
                                    break;
                                }
                                else
                                {
                                    verificacoes[i] = 'X';
                                }
                            }
                            indice++;
                            if (verificaPosicao == 4)
                            {
                                acertou = 1;
                            }
                        }
                    }
                    maior = maior + 1;
                    quantidadeTentativas++;
                }
            }
            else
            {
                char numerogerado[4];
                int numeros[4];
                int i, k;

                srand(time(NULL));

                for (i = 0; i < 4; i++)
                { // Carregando o vetor

                    numeros[i] = 1 + (rand() % 6);
                    for (k = 0; k <= i - 1; k++)
                    {
                        if (numeros[i] == numeros[k])
                        {
                            i -= 1;
                        }
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros[i] == 1)
                    {
                        numerogerado[i] = '1';
                    }
                    else if (numeros[i] == 2)
                    {
                        numerogerado[i] = '2';
                    }
                    if (numeros[i] == 3)
                    {
                        numerogerado[i] = '3';
                    }
                    if (numeros[i] == 4)
                    {
                        numerogerado[i] = '4';
                    }
                    if (numeros[i] == 5)
                    {
                        numerogerado[i] = '5';
                    }
                    if (numeros[i] == 6)
                    {
                        numerogerado[i] = '6';
                    }
                }

                printf("\n\n\t\t[Rufus] Nao poderei usar numeros repetidos, Ok. Entao oque acha de comecarmos?\n\t\t Vamos ver se voce consegue bater meu recorde...\n\n");

                printf("\n\n\t\t Para voce ganhar desse otario voce deve conseguir descobrir a sequencia numerica\n\t\t com o menor numero de tentativas possivel.\n\t\t (O recorde de Rufus e de 5 tentativas, consiga antes disso e ganhe).\n");

                system("pause");
                system("cls");

                char tentativas[9 * 4];
                char verificacoes[9 * 4];
                for (int i = 1; i < 9 * 4; i++)
                {
                    tentativas[i] = ' ';
                    verificacoes[i] = ' ';
                }
                int win = 2;
                int maior = 1;
                int quantidadeTentativas = 0;
                int acertou = 0;
                while (win != 1 && quantidadeTentativas < 8)
                {
                    system("cls");
                    int coluna = 35;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                        win = 1;
                    }
                    else if (quantidadeTentativas == 5)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                    }
                    for (int i = 9; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas[coluna - 3], tentativas[coluna - 2], tentativas[coluna - 1], tentativas[coluna], verificacoes[coluna - 3], verificacoes[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes[coluna - 1], verificacoes[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || Numeros:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou == 1)
                    {
                        printf("\n\n[Rufus]Mas a senha que eu escolhi era perfeita... Como?\n[Rufus]Eu sou do tipo de pessoa que so acredita vendo... Mas eu estou vendo e nao estou acreditando!\n[Rufus] Obvio que isso foi sorte de principiante %s\n[Rufus] Quero ver se vc consegue ter essa mesma sorte da proxima vez\n\n", jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s = 1 Lugar                           ||\n", jogador1);
                        printf("\t\t\t  ||     Rufus = 2 Lugar                        ||\n");
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }

                    if (quantidadeTentativas == 5)
                    {
                        printf("\n\n[Rufus] Eu te avisei que Martermind nao e para qualquer pessoa...\n[Rufus] Veja pelo lado positivo, agora voce vai poder falar para seu amigos que deve o privilegio de me\n conhecer, jogar comigo, e melhor ainda melhor...\n[Rufus] Contar que perdeu miseravelmente KKKKKK");

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     Rufus= 1  Lugar                        ||\n");
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }

                    if (acertou != 1 && quantidadeTentativas < 5)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice = 0;
                        int verificaPosicao = 0;
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            scanf(" %c", &tentativas[i]);
                        }
                        for (i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas[i] == numerogerado[x] && indice != x)
                                {
                                    verificacoes[i] = 'B';
                                    break;
                                }
                                else if (tentativas[i] == numerogerado[x] && indice == x)
                                {
                                    verificacoes[i] = 'P';
                                    verificaPosicao++;
                                    break;
                                }
                                else
                                {
                                    verificacoes[i] = 'X';
                                }
                            }
                            indice++;
                            if (verificaPosicao == 4)
                            {
                                acertou = 1;
                            }
                        }
                    }
                    maior = maior + 1;
                    quantidadeTentativas++;
                }
            }

            break;

        case (4):
            printf("\n\t\t\t888888b.                                         d8b               888          ");
            printf("\n\t\t\t888   88b                                        Y8P               888          ");
            printf("\n\t\t\t888  .88P                                                          888          ");
            printf("\n\t\t\t8888888K.   .d88b.  88888b.d88b.        888  888 888 88888b.   .d88888  .d88b.  ");
            printf("\n\t\t\t888   Y88b d8P  Y8b 888  888  88b       888  888 888 888  88b d88  888 d88  88b ");
            printf("\n\t\t\t888    888 88888888 888  888  888       Y88  88P 888 888  888 888  888 888  888 ");
            printf("\n\t\t\t888   d88P Y8b.     888  888  888        Y8bd8P  888 888  888 Y88b 888 Y88..88P ");
            printf("\n\t\t\t8888888P     Y8888  888  888  888         Y88P   888 888  888   Y88888   Y88P   ");

            printf("\n\n\t\tDigite o nome do jogador 1:");
            scanf("%s", &jogador1);
            printf("\n\n\t\tDigite o nome do jogador 2:");
            scanf("%s", &jogador2);

            char numerogerado[4];
            int numeros[4];
            int quant = 0;
            int jogador1v = 0, jogador2v = 0;

            while (quant != 2)
            {
                if (quant == 0)
                {
                    printf("\n| %s Informe uma senha pro seu adiversario (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter)\nDigite aqui: ", jogador1);
                    for (int i = 0; i < 4; i++)
                    {
                        scanf("%i", &numeros[i]);
                    }
                }
                else
                {
                    printf("\n| %s Informe uma senha pro seu adiversario (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter)\nDigite aqui: ", jogador2);
                    for (int i = 0; i < 4; i++)
                    {
                        scanf("%i", &numeros[i]);
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros[i] == 1)
                    {
                        numerogerado[i] = '1';
                    }
                    else if (numeros[i] == 2)
                    {
                        numerogerado[i] = '2';
                    }
                    if (numeros[i] == 3)
                    {
                        numerogerado[i] = '3';
                    }
                    if (numeros[i] == 4)
                    {
                        numerogerado[i] = '4';
                    }
                    if (numeros[i] == 5)
                    {
                        numerogerado[i] = '5';
                    }
                    if (numeros[i] == 6)
                    {
                        numerogerado[i] = '6';
                    }
                }

                system("pause");
                system("cls");

                char tentativas[10 * 4];
                char verificacoes[10 * 4];
                for (int i = 1; i < 10 * 4; i++)
                {
                    tentativas[i] = ' ';
                    verificacoes[i] = ' ';
                }
                int win = 2;
                int maior = 1;
                int quantidadeTentativas = 0;
                int acertou = 0;
                while (win != 1 && quantidadeTentativas < 10)
                {
                    system("cls");
                    int coluna = 39;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                        win = 1;
                    }
                    else if (quantidadeTentativas == 10)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado[0], numerogerado[1], numerogerado[2], numerogerado[3]);
                    }
                    for (int i = 10; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas[coluna - 3], tentativas[coluna - 2], tentativas[coluna - 1], tentativas[coluna], verificacoes[coluna - 3], verificacoes[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes[coluna - 1], verificacoes[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || Numeros:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou != 1 && quantidadeTentativas < 10 && quant != 2)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice = 0;
                        int verificaPosicao = 0;
                        for (int i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            scanf(" %c", &tentativas[i]);
                        }
                        for (int i = ((maior * 4) - 4); i < maior * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas[i] == numerogerado[x] && indice != x)
                                {
                                    verificacoes[i] = 'B';
                                    break;
                                }
                                else if (tentativas[i] == numerogerado[x] && indice == x)
                                {
                                    verificacoes[i] = 'P';
                                    verificaPosicao++;
                                    break;
                                }
                                else
                                {
                                    verificacoes[i] = 'X';
                                }
                            }
                            indice++;
                            if (verificaPosicao == 4)
                            {
                                acertou = 1;
                            }
                        }
                    }
                    maior = maior + 1;
                    quantidadeTentativas++;
                }
                system("pause");
                system("cls");
                if (quant == 1)
                {
                    jogador1v = jogador1v + quantidadeTentativas;
                }
                else
                {
                    jogador2v = jogador2v + quantidadeTentativas;
                }

                if (quant == 1)
                {
                    if (jogador1v == jogador2v)
                    {
                        printf("\n\nEMPATE\nPelo jeito voces tem muito em comum nao e mesmo?\nJa que tiveram o mesmo numero de pontuacao devo da os parabens para os dois...\nmas joguem novamente porque ninguem lembra\nde empates, nessa sociedade que vivemos sempre tem que haver um vencedor e um perdedor.\n\n");

                        system("pause");
                        system("cls");
                    }

                    else if (jogador1v < jogador2v)
                    {

                        printf("\n\nPARABES %s\nPelo jeito voce utilizou o menor numero de\ntentativas para descobrir a senha feita por %s, entao... Parabens\n E %s nao aceite a derrota treine mais e peca uma revanche.\n\n", jogador1, jogador2, jogador2);

                        system("pause");
                        system("cls");

                        printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("  || Ranking:                                   ||\n");
                        printf("  ||     %s= 1  Lugar                           ||\n", jogador1);
                        printf("  ||     %s = 2  Lugar                          ||\n", jogador2);
                        printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }
                    else
                    {
                        printf("\n\nPARABENS %s\nPelo jeito voce utilizou o menor numero de\ntentativas para descobrir a senha feita por %s, entao... Parabens\nE %s nao aceite a derrota treine mais e peca uma revanche.\n\n", jogador2, jogador1, jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s= 1  Lugar                           ||\n", jogador2);
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }
                }

                quant++;
            }
            break;

        case (5):
            printf("\n\t\t\t888888b.                                         d8b               888          ");
            printf("\n\t\t\t888   88b                                        Y8P               888          ");
            printf("\n\t\t\t888  .88P                                                          888          ");
            printf("\n\t\t\t8888888K.   .d88b.  88888b.d88b.        888  888 888 88888b.   .d88888  .d88b.  ");
            printf("\n\t\t\t888   Y88b d8P  Y8b 888  888  88b       888  888 888 888  88b d88  888 d88  88b ");
            printf("\n\t\t\t888    888 88888888 888  888  888       Y88  88P 888 888  888 888  888 888  888 ");
            printf("\n\t\t\t888   d88P Y8b.     888  888  888        Y8bd8P  888 888  888 Y88b 888 Y88..88P ");
            printf("\n\t\t\t8888888P     Y8888  888  888  888         Y88P   888 888  888   Y88888   Y88P   ");

            printf("\n\n\t\tDigite o nome do jogador 1:");
            scanf("%s", &jogador1);
            printf("\n\n\t\tDigite o nome do jogador 2:");
            scanf("%s", &jogador2);

            char numerogerado1[4];
            int numeros1[4];
            int quant1 = 0;
            int jogador1v1 = 0, jogador2v2 = 0;

            while (quant1 != 2)
            {
                if (quant1 == 0)
                {
                    printf("\n| %s Informe uma senha pro seu adiversario (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter)\nDigite aqui: ", jogador1);
                    for (int i = 0; i < 4; i++)
                    {
                        scanf("%i", &numeros1[i]);
                    }
                }
                else
                {
                    printf("\n| %s Informe uma senha pro seu adiversario (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter)\nDigite aqui: ", jogador2);
                    for (int i = 0; i < 4; i++)
                    {
                        scanf("%i", &numeros1[i]);
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros1[i] == 1)
                    {
                        numerogerado1[i] = '1';
                    }
                    else if (numeros1[i] == 2)
                    {
                        numerogerado1[i] = '2';
                    }
                    if (numeros1[i] == 3)
                    {
                        numerogerado1[i] = '3';
                    }
                    if (numeros1[i] == 4)
                    {
                        numerogerado1[i] = '4';
                    }
                    if (numeros1[i] == 5)
                    {
                        numerogerado1[i] = '5';
                    }
                    if (numeros1[i] == 6)
                    {
                        numerogerado1[i] = '6';
                    }
                }

                system("pause");
                system("cls");

                char tentativas1[10 * 4];
                char verificacoes1[10 * 4];
                for (int i = 1; i < 10 * 4; i++)
                {
                    tentativas1[i] = ' ';
                    verificacoes1[i] = ' ';
                }
                int win1 = 2;
                int maior1 = 1;
                int quantidadetentativas1 = 0;
                int acertou1 = 0;
                while (win1 != 1 && quantidadetentativas1 < 8)
                {
                    system("cls");
                    int coluna = 39;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou1 == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado1[0], numerogerado1[1], numerogerado1[2], numerogerado1[3]);
                        win1 = 1;
                    }
                    else if (quantidadetentativas1 == 8)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado1[0], numerogerado1[1], numerogerado1[2], numerogerado1[3]);
                    }
                    for (int i = 10; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas1[coluna - 3], tentativas1[coluna - 2], tentativas1[coluna - 1], tentativas1[coluna], verificacoes1[coluna - 3], verificacoes1[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes1[coluna - 1], verificacoes1[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || numeros1:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou1 != 1 && quantidadetentativas1 < 8 && quant1 != 2)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice1 = 0;
                        int verificaPosicao1 = 0;
                        for (int i = ((maior1 * 4) - 4); i < maior1 * 4; i++)
                        {
                            scanf(" %c", &tentativas1[i]);
                        }
                        for (int i = ((maior1 * 4) - 4); i < maior1 * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas1[i] == numerogerado1[x] && indice1 != x)
                                {
                                    verificacoes1[i] = 'B';
                                    break;
                                }
                                else if (tentativas1[i] == numerogerado1[x] && indice1 == x)
                                {
                                    verificacoes1[i] = 'P';
                                    verificaPosicao1++;
                                    break;
                                }
                                else
                                {
                                    verificacoes1[i] = 'X';
                                }
                            }
                            indice1++;
                            if (verificaPosicao1 == 4)
                            {
                                acertou1 = 1;
                            }
                        }
                    }
                    maior1 = maior1 + 1;
                    quantidadetentativas1++;
                }
                system("pause");
                system("cls");
                if (quant1 == 1)
                {
                    jogador1v1 = jogador1v1 + quantidadetentativas1;
                }
                else
                {
                    jogador2v2 = jogador2v2 + quantidadetentativas1;
                }

                if (quant1 == 1)
                {
                    if (jogador1v1 == jogador2v2)
                    {
                        printf("\n\nEMPATE\nPelo jeito voces tem muito em comum nao e mesmo?\nJa que tiveram o mesmo numero de pontuacao devo da os parabens para os dois...\nmas joguem novamente porque ninguem lembra\nde empates, nessa sociedade que vivemos sempre tem que haver um vencedor e um perdedor.\n\n");

                        system("pause");
                        system("cls");
                    }

                    else if (jogador1v1 < jogador2v2)
                    {

                        printf("\n\nPARABES %s\nPelo jeito voce utilizou o menor numero de\ntentativas para descobrir a senha feita por %s, entao... Parabens\n E %s nao aceite a derrota treine mais e peca uma revanche.\n\n", jogador1, jogador2, jogador2);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s= 1  Lugar                           ||\n", jogador1);
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador2);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }
                    else
                    {
                        printf("\n\nPARABENS %s\nPelo jeito voce utilizou o menor numero de\ntentativas para descobrir a senha feita por %s, entao... Parabens\nE %s nao aceite a derrota treine mais e peca uma revanche.\n\n", jogador2, jogador1, jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s= 1  Lugar                           ||\n", jogador2);
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }
                }

                quant1++;
            }

            break;

        case (6):
            printf("\n\t\t\t888888b.                                         d8b               888          ");
            printf("\n\t\t\t888   88b                                        Y8P               888          ");
            printf("\n\t\t\t888  .88P                                                          888          ");
            printf("\n\t\t\t8888888K.   .d88b.  88888b.d88b.        888  888 888 88888b.   .d88888  .d88b.  ");
            printf("\n\t\t\t888   Y88b d8P  Y8b 888  888  88b       888  888 888 888  88b d88  888 d88  88b ");
            printf("\n\t\t\t888    888 88888888 888  888  888       Y88  88P 888 888  888 888  888 888  888 ");
            printf("\n\t\t\t888   d88P Y8b.     888  888  888        Y8bd8P  888 888  888 Y88b 888 Y88..88P ");
            printf("\n\t\t\t8888888P     Y8888  888  888  888         Y88P   888 888  888   Y88888   Y88P   ");

            printf("\n\n\t\tDigite o nome do jogador 1:");
            scanf("%s", &jogador1);
            printf("\n\n\t\tDigite o nome do jogador 2:");
            scanf("%s", &jogador2);

            char numerogerado2[4];
            int numeros2[4];
            int quant2 = 0;
            int jogador1v2 = 0, jogador2v3 = 0;

            while (quant2 != 2)
            {
                if (quant2 == 0)
                {
                    printf("\n| %s Informe uma senha pro seu adiversario (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter)\nDigite aqui: ", jogador1);
                    for (int i = 0; i < 4; i++)
                    {
                        scanf("%i", &numeros2[i]);
                    }
                }
                else
                {
                    printf("\n| %s Informe uma senha pro seu adiversario (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter)\nDigite aqui: ", jogador2);
                    for (int i = 0; i < 4; i++)
                    {
                        scanf("%i", &numeros2[i]);
                    }
                }

                for (int i = 0; i < 4; i++)
                {
                    if (numeros2[i] == 1)
                    {
                        numerogerado2[i] = '1';
                    }
                    else if (numeros2[i] == 2)
                    {
                        numerogerado2[i] = '2';
                    }
                    if (numeros2[i] == 3)
                    {
                        numerogerado2[i] = '3';
                    }
                    if (numeros2[i] == 4)
                    {
                        numerogerado2[i] = '4';
                    }
                    if (numeros2[i] == 5)
                    {
                        numerogerado2[i] = '5';
                    }
                    if (numeros2[i] == 6)
                    {
                        numerogerado2[i] = '6';
                    }
                }

                system("pause");
                system("cls");

                char tentativas2[10 * 4];
                char verificacoes2[10 * 4];
                for (int i = 1; i < 10 * 4; i++)
                {
                    tentativas2[i] = ' ';
                    verificacoes2[i] = ' ';
                }
                int win2 = 2;
                int maior2 = 1;
                int quantidadetentativas3 = 0;
                int acertou2 = 0;
                while (win2 != 1 && quantidadetentativas3 < 6)
                {
                    system("cls");
                    int coluna = 39;
                    printf("\n<<== = = = = = = = = == = = = = = = = = = = ==>>\n");
                    if (acertou2 == 1)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado2[0], numerogerado2[1], numerogerado2[2], numerogerado2[3]);
                        win2 = 1;
                    }
                    else if (quantidadetentativas3 == 10)
                    {
                        printf("  ||      (%c)       (%c)      (%c)      (%c)       ||\n", numerogerado2[0], numerogerado2[1], numerogerado2[2], numerogerado2[3]);
                    }
                    for (int i = 10; i > 0; i--)
                    {
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||  (%c)    (%c)     (%c)     (%c)        |  %c  %c ||\n", tentativas2[coluna - 3], tentativas2[coluna - 2], tentativas2[coluna - 1], tentativas2[coluna], verificacoes2[coluna - 3], verificacoes2[coluna - 2]);
                        printf("  ||                                    |  %c  %c ||\n", verificacoes2[coluna - 1], verificacoes2[coluna]);
                        printf("  ||--------------------------------------------||\n");
                        printf("  ||--------------------------------------------||\n");
                        coluna = coluna - 4;
                    }
                    printf("<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                    printf("  || numeros2:                                   ||\n");
                    printf("  ||     1   2   3   4   5   6                  ||\n");
                    printf("  ||     P = Preto   B = Branco                 ||\n");
                    printf("<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");

                    if (acertou2 != 1 && quantidadetentativas3 < 6 && quant2 != 2)
                    {
                        printf("\n| Informe uma senha (Ex:'1 2 3 4' com um espaco entre os digitos e depois tecle enter): ");
                        int indice2 = 0;
                        int verificaPosicao2 = 0;
                        for (int i = ((maior2 * 4) - 4); i < maior2 * 4; i++)
                        {
                            scanf(" %c", &tentativas2[i]);
                        }
                        for (int i = ((maior2 * 4) - 4); i < maior2 * 4; i++)
                        {
                            for (int x = 0; x < 4; x++)
                            {
                                if (tentativas2[i] == numerogerado2[x] && indice2 != x)
                                {
                                    verificacoes2[i] = 'B';
                                    break;
                                }
                                else if (tentativas2[i] == numerogerado2[x] && indice2 == x)
                                {
                                    verificacoes2[i] = 'P';
                                    verificaPosicao2++;
                                    break;
                                }
                                else
                                {
                                    verificacoes2[i] = 'X';
                                }
                            }
                            indice2++;
                            if (verificaPosicao2 == 4)
                            {
                                acertou2 = 1;
                            }
                        }
                    }
                    maior2 = maior2 + 1;
                    quantidadetentativas3++;
                }
                system("pause");
                system("cls");
                if (quant2 == 1)
                {
                    jogador1v2 = jogador1v2 + quantidadetentativas3;
                }
                else
                {
                    jogador2v3 = jogador2v3 + quantidadetentativas3;
                }

                if (quant2 == 1)
                {
                    if (jogador1v2 == jogador2v3)
                    {
                        printf("\n\nEMPATE\nPelo jeito voces tem muito em comum nao e mesmo?\nJa que tiveram o mesmo numero de pontuacao devo da os parabens para os dois...\nmas joguem novamente porque ninguem lembra\nde empates, nessa sociedade que vivemos sempre tem que haver um vencedor e um perdedor.\n\n");

                        system("pause");
                        system("cls");
                    }

                    else if (jogador1v2 < jogador2v3)
                    {

                        printf("\n\nPARABES %s\nPelo jeito voce utilizou o menor numero de\ntentativas para descobrir a senha feita por %s, entao... Parabens\n E %s nao aceite a derrota treine mais e peca uma revanche.\n\n", jogador1, jogador2, jogador2);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s= 1  Lugar                           ||\n", jogador1);
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador2);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }
                    else
                    {
                        printf("\n\nPARABENS %s\nPelo jeito voce utilizou o menor numero de\ntentativas para descobrir a senha feita por %s, entao... Parabens\nE %s nao aceite a derrota treine mais e peca uma revanche.\n\n", jogador2, jogador1, jogador1);

                        system("pause");
                        system("cls");

                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = =  =  ==>>\n");
                        printf("\t\t\t  || Ranking:                                   ||\n");
                        printf("\t\t\t  ||     %s= 1  Lugar                           ||\n", jogador2);
                        printf("\t\t\t  ||     %s = 2  Lugar                          ||\n", jogador1);
                        printf("\t\t\t<<== = = = = = = = = == = = = = = = = = = = = = ==>>\n");
                    }
                }

                quant2++;

                break;

            case (7):
                loop = 0;
                break;

            case (8):
                loop = 1;
                break;
            }

            printf("Presione ENTER para continuar:\n");
            system("pause");
            system("cls");
            getchar();
        }
    }
}
