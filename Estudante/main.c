#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* 
    * progresso do projeto

    //fazer: criar o menu principal
        //fazer: fazer as 4 opções
        //fazer: testar se as 4 opções estão funcionando
        //fazer: tratamento do dado inserido pelo usuário
        
    fazer: criar a lógica do perguntas e respostas
        fazer: criar as perguntas
        //fazer: lógica de selecionar a alternativa correta
        //fazer: lógica de selecionar a alternativa errada
        //fazer: lógica de controle de alternativa válida
        //fazer: lógica de reniciar o jogo       

    //fazer: criar a lógica do cobra na caixa
        //fazer: receber dados do jogador
        //fazer: lógica para escolher o jogador
        //fazer: lógica para inserir os dados em cada caixa
        //fazer: lógica do turmo no jogador
        //fazer: lógica da validação da opção escolhida pelo jogador
        //fazer: lógica de vitoria ou derrota do jogador
        //fazer: lógica de reniciar o jogo

    fazer: criar a lógica do gousmas wars
        ! parou aqui o desenvolvimento
        * ainda não desenvolvido
*/

int main()
{
    // * variáveis gerais
    char escolhaMenuPrincipal;
    char estarJogando;
    char alternativaInvalida;
    char lixo; // * propósito de travar a tela

    // * variáveis para o primeiro jogo
    char alternativaEscolhida;

    // * variáveis para o segundo jogo
    char nomePrimeiroJogador[50];
    char nomeSegundoJogador[50];
    char temp[50];
    char escolhaPrimeiroJogador;
    char escolhaSegundoJogador;
    char spritePrimeiraCaixa;
    char spriteSegundaCaixa;
    char spriteTerceiraCaixa;
    char spriteQuartaCaixa;
    char spriteQuintaCaixa;
    char caixaBotao;
    char caixaCobra;

    // * variáveis para o terceiro jogo

    // * configurações
    srand(time(NULL));

    // * loop principal do projeto
    do
    {
        system("clear || cls");
        printf("----- GIRAS'S ARCADE ----- \n");
        printf("\t Lista de Jogos\n");
        printf("\t\t 1. Perguntas e Respostas\n");
        printf("\t\t 2. Cobra na Caixa\n");
        printf("\t\t 3. Gousmas Wars\n");
        printf("\t\t 4. Sair\n");
        printf("\t Escolha: ");
        scanf(" %c", &escolhaMenuPrincipal);
        
        switch(escolhaMenuPrincipal)
        {
            // * primeiro jogo selecionado
            case '1':
                estarJogando = '1';
                // * loop principal do primeiro jogo   
                while(estarJogando == '1')
                {
                    system("cls || clear");
                    printf("----- PERGUNTAS E RESPOSTAS ----- \n");
                    printf("\t Para cada pergunta apresentada escolha a alternativa correta.\n");
                    printf("\t Cada pergunta terá quatro alternativas onde somente uma é a correta.\n");
                    printf("\t\t Começar jogo?\n");
                    printf("\t\t 1. Sim\t 0. Não\n");
                    printf("\t Escolha: ");
                    scanf(" %c", &estarJogando);

                    // * finalizar jogo e voltar para o menu principal
                    if(estarJogando == '0')
                    {
                        continue;
                    }
                    // * comando invalido, fazer a pergunta novamente
                    else if(estarJogando != '1')
                    {
                        estarJogando = '1';
                        printf("\t !!!!! Comando inválido !!!!! \n");
                        scanf("%c", &lixo);
                        continue;
                    }

                    // * usuário escolheu jogar
                    // * primeira pergunta
                    do
                    {
                        system("clear || cls");
                        printf("----- PERGUNTAS E RESPOSTAS ----- \n");
                        printf("\t 1. O texto da pergunta vem aqui!\n");
                        printf("\t\t a. Alternativa errada\n");
                        printf("\t\t b. Alternativa correta\n");
                        printf("\t\t c. Alternativa errada\n");
                        printf("\t\t d. Alternativa errada\n");
                        printf("\t Escolha: ");
                        scanf(" %c", &alternativaEscolhida);

                        // * alternativa correta
                        if(alternativaEscolhida == 'b')
                        {
                            alternativaInvalida = '0';
                            printf("\t Resposta Correta! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa incorreta
                        else if(alternativaEscolhida == 'a' || alternativaEscolhida == 'c' || alternativaEscolhida == 'd')
                        {
                            alternativaInvalida = '0';
                            printf("\t Responsta errada!\n");
                            printf("\t A resposta correta é 'b'! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa invalida
                        else
                        {
                            alternativaInvalida = '1';
                            printf("\t !!!!! Comando inválido !!!!!\n");
                            scanf("%c", &lixo);
                        }
                    } while(alternativaInvalida == '1');
                    
                    // * segunda pergunta
                    do
                    {
                        system("clear || cls");
                        printf("----- PERGUNTAS E RESPOSTAS ----- \n");
                        printf("\t 2. O texto da pergunta vem aqui!\n");
                        printf("\t\t a. Alternativa errada\n");
                        printf("\t\t b. Alternativa correta\n");
                        printf("\t\t c. Alternativa errada\n");
                        printf("\t\t d. Alternativa errada\n");
                        printf("\t Escolha: ");
                        scanf(" %c", &alternativaEscolhida);

                        // * alternativa correta
                        if(alternativaEscolhida == 'b')
                        {
                            alternativaInvalida = '0';
                            printf("\t Resposta Correta! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa incorreta
                        else if(alternativaEscolhida == 'a' || alternativaEscolhida == 'c' || alternativaEscolhida == 'd')
                        {
                            alternativaInvalida = '0';
                            printf("\t Responsta errada!\n");
                            printf("\t A resposta correta é 'b'! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa invalida
                        else
                        {
                            alternativaInvalida = '1';
                            printf("\t !!!!! Comando inválido !!!!!\n");
                            scanf("%c", &lixo);
                        }
                    } while(alternativaInvalida == '1');

                    // * terceira pergunta
                    do
                    {
                        system("clear || cls");
                        printf("----- PERGUNTAS E RESPOSTAS ----- \n");
                        printf("\t 3. O texto da pergunta vem aqui!\n");
                        printf("\t\t a. Alternativa errada\n");
                        printf("\t\t b. Alternativa correta\n");
                        printf("\t\t c. Alternativa errada\n");
                        printf("\t\t d. Alternativa errada\n");
                        printf("\t Escolha: ");
                        scanf(" %c", &alternativaEscolhida);

                        // * alternativa correta
                        if(alternativaEscolhida == 'b')
                        {
                            alternativaInvalida = '0';
                            printf("\t Resposta Correta! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa incorreta
                        else if(alternativaEscolhida == 'a' || alternativaEscolhida == 'c' || alternativaEscolhida == 'd')
                        {
                            alternativaInvalida = '0';
                            printf("\t Responsta errada!\n");
                            printf("\t A resposta correta é 'b'! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa invalida
                        else
                        {
                            alternativaInvalida = '1';
                            printf("\t !!!!! Comando inválido !!!!!\n");
                            scanf("%c", &lixo);
                        }
                    } while(alternativaInvalida == '1');

                    // * quarta pergunta
                    do
                    {
                        system("clear || cls");
                        printf("----- PERGUNTAS E RESPOSTAS ----- \n");
                        printf("\t 4. O texto da pergunta vem aqui!\n");
                        printf("\t\t a. Alternativa errada\n");
                        printf("\t\t b. Alternativa correta\n");
                        printf("\t\t c. Alternativa errada\n");
                        printf("\t\t d. Alternativa errada\n");
                        printf("\t Escolha: ");
                        scanf(" %c", &alternativaEscolhida);

                        // * alternativa correta
                        if(alternativaEscolhida == 'b')
                        {
                            alternativaInvalida = '0';
                            printf("\t Resposta Correta! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa incorreta
                        else if(alternativaEscolhida == 'a' || alternativaEscolhida == 'c' || alternativaEscolhida == 'd')
                        {
                            alternativaInvalida = '0';
                            printf("\t Responsta errada!\n");
                            printf("\t A resposta correta é 'b'! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa invalida
                        else
                        {
                            alternativaInvalida = '1';
                            printf("\t !!!!! Comando inválido !!!!!\n");
                            scanf("%c", &lixo);
                        }
                    } while(alternativaInvalida == '1');

                    // * quinta pergunta
                    do
                    {
                        system("clear || cls");
                        printf("----- PERGUNTAS E RESPOSTAS ----- \n");
                        printf("\t 5. O texto da pergunta vem aqui!\n");
                        printf("\t\t a. Alternativa errada\n");
                        printf("\t\t b. Alternativa correta\n");
                        printf("\t\t c. Alternativa errada\n");
                        printf("\t\t d. Alternativa errada\n");
                        printf("\t Escolha: ");
                        scanf(" %c", &alternativaEscolhida);

                        // * alternativa correta
                        if(alternativaEscolhida == 'b')
                        {
                            alternativaInvalida = '0';
                            printf("\t Resposta Correta! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa incorreta
                        else if(alternativaEscolhida == 'a' || alternativaEscolhida == 'c' || alternativaEscolhida == 'd')
                        {
                            alternativaInvalida = '0';
                            printf("\t Responsta errada!\n");
                            printf("\t A resposta correta é 'b'! \n");
                            scanf("%c", &lixo);
                        }
                        // * alternativa invalida
                        else
                        {
                            alternativaInvalida = '1';
                            printf("\t !!!!! Comando inválido !!!!!\n");
                            scanf("%c", &lixo);
                        }
                    } while(alternativaInvalida == '1');

                    // * acabou o jogo, perguntar se quer jogar novamente
                    system("cls || clear");
                    printf("----- FIM DO JOGO -----\n");
                    printf("\t Deseja jogar novamente?\n");
                    printf("\t\t 1. Sim\t 0. Não\n");
                    printf("\t Escolha: ");
                    scanf(" %c", &estarJogando);

                    // * comando invalido, reniciar o primeiro jogo
                    if(estarJogando != '0' && estarJogando != '1')
                    {
                        estarJogando = '1';
                    }
                }
                
                estarJogando = '0';
                break;


            // * segundo jogo selecionado
            case '2':
                estarJogando = '1';
                // * loop principal do segundo jogo
                while(estarJogando == '1')
                {
                    system("cls || clear");
                    printf("----- COBRA NA CAIXA ----- \n");
                    printf("\t Há cinco caixas na sua frete, uma dela contem o botão e outra contem uma cobra!\n");
                    printf("\t Descubra a caixa que tem o botão para poder fugir!\n");
                    printf("\t\t Começar jogo?\n");
                    printf("\t\t 1. Sim\t 0. Não\n");
                    printf("\t Escolha: ");
                    scanf(" %c", &estarJogando);

                    // * finalizar jogo e voltar para o menu principal
                    if(estarJogando == '0')
                    {
                        continue;
                    }
                    // * comando invalido, fazer a pergunta novamente
                    else if(estarJogando != '1')
                    {
                        estarJogando = '1';
                        printf("\t !!!!! Comando inválido !!!!! \n");
                        scanf(" %c", &lixo);
                        continue;
                    }

                    // * usuário escolheu jogar
                    system("cls || clear");

                    printf("\t Digite o nome do primeiro jogador: ");
                    getchar();
                    fgets(nomePrimeiroJogador, 50, stdin);
                    nomePrimeiroJogador[strcspn(nomePrimeiroJogador, "\n")] = '\0'; // * remover o \n do nome

                    printf("\t Digite o nome do segundo jogador: ");
                    fgets(nomeSegundoJogador, 50, stdin);
                    nomeSegundoJogador[strcspn(nomeSegundoJogador, "\n")] = '\0'; // * remover o \n do nome

                    // * segundo jogador começa
                    if(rand() % 2 == 1)
                    {
                        // * trocando o nome do segundo para o primeiro e o primeiro para o segundo
                        printf("\t Segundo jogador começa jogando!\n");
                        strcpy(temp, nomePrimeiroJogador);
                        strcpy(nomePrimeiroJogador, nomeSegundoJogador);
                        strcpy(nomeSegundoJogador, temp);
                    }
                    // * primeiro jogador começa
                    else
                    {
                        printf("\t Primeiro jogador começa jogando!\n");
                    }

                    // * sorteando aonde estar o botão e aonde estar a cobra
                    do
                    {
                        caixaBotao = rand() % 5 + 49;  // * utilizando o valor da tabela ASCII
                        caixaCobra = rand() % 5 + 49;  // * utilizando o valor da tabela ASCII
                    }
                    while(caixaBotao == caixaCobra);

                    // * definindo as sprites das caixas
                    spritePrimeiraCaixa = 'O';
                    spriteSegundaCaixa = 'O';
                    spriteTerceiraCaixa = 'O';
                    spriteQuartaCaixa = 'O';
                    spriteQuintaCaixa = 'O';

                    scanf(" %c", &lixo);
                    while(estarJogando == '1')
                    {
                        do
                        {
                            // * turno do primeiro jogador escolhido
                            system("clear || cls");
                            printf("\t ### TURNO %s ### \n", nomePrimeiroJogador);
                            printf("\t %c\t%c\t%c\t%c\t%c\n", spritePrimeiraCaixa, spriteSegundaCaixa, spriteTerceiraCaixa, spriteQuartaCaixa, spriteQuintaCaixa);
                            printf("\t Escolha uma caixa de 1 a 5: ");
                            scanf(" %c", &escolhaPrimeiroJogador);
                        }
                        while(escolhaPrimeiroJogador <  '1' || escolhaPrimeiroJogador > '5');

                        // * primeiro jogador escolhido achou o botão
                        if(escolhaPrimeiroJogador == caixaBotao)
                        {
                            printf("\t ### PARABENS %s ###\n", nomePrimeiroJogador);
                            printf("\t ### Você ganhou! ###\n");
                            estarJogando = '0';
                        }
                        // * primeiro jogador escolhido achou a cobra
                        else if(escolhaPrimeiroJogador == caixaCobra)
                        {
                            printf("\t !!! ESSA NÃO %s !!!\n", nomePrimeiroJogador);
                            printf("\t !!! Você achou a cobra !!!\n");
                            estarJogando = '0';
                        }
                        // * primeiro jogador escolhido não achou a cobra e nem o botão
                        // * logo modificar a sprite da caixa
                        else if(escolhaPrimeiroJogador == '1' && spritePrimeiraCaixa == 'O')
                        {
                            printf("\t\t Caixa estar vazia\n");
                            spritePrimeiraCaixa = 'X';
                        }
                        // * primeiro jogador escolhido não achou a cobra e nem o botão
                        // * logo modificar a sprite da caixa
                        else if(escolhaPrimeiroJogador == '2' && spriteSegundaCaixa == 'O')
                        {
                            printf("\t\t Caixa estar vazia\n");
                            spriteSegundaCaixa = 'X';
                        }
                        // * primeiro jogador escolhido não achou a cobra e nem o botão
                        // * logo modificar a sprite da caixa
                        else if(escolhaPrimeiroJogador == '3' && spriteTerceiraCaixa == 'O')
                        {
                            printf("\t\t Caixa estar vazia\n");
                            spriteTerceiraCaixa = 'X';
                        }
                        // * primeiro jogador escolhido não achou a cobra e nem o botão
                        // * logo modificar a sprite da caixa
                        else if(escolhaPrimeiroJogador == '4' && spriteQuartaCaixa == 'O')
                        {
                            printf("\t\t Caixa estar vazia\n");
                            spriteQuartaCaixa = 'X';
                        }
                        // * primeiro jogador escolhido não achou a cobra e nem o botão
                        // * logo modificar a sprite da caixa
                        else if(escolhaPrimeiroJogador == '5' && spriteQuintaCaixa == 'O')
                        {
                            printf("\t\t Caixa estar vazia\n");
                            spriteQuintaCaixa = 'X';
                        }
                        else
                        {
                            printf("\t\t Essa caixa já foi selecionada!\n");
                            printf("\t\t Escolha outra\n");
                            scanf(" %c", &lixo);
                            continue;
                        }

                        // * trocando o nome dos jogadores
                        // * isso evita criar a lógica de um segundo turno para o outro jogador
                        strcpy(temp, nomePrimeiroJogador);
                        strcpy(nomePrimeiroJogador, nomeSegundoJogador);
                        strcpy(nomeSegundoJogador, temp);

                        scanf(" %c", &lixo);
                    }

                    // * acabou o jogo, perguntar se quer jogar novamente
                    system("cls || clear");
                    printf("----- FIM DO JOGO -----\n");
                    printf("\t Deseja jogar novamente?\n");
                    printf("\t\t 1. Sim\t 0. Não\n");
                    printf("\t Escolha: ");
                    scanf(" %c", &estarJogando);

                    // * comando invalido, reniciar o segundo jogo
                    if(estarJogando != '0' && estarJogando != '1')
                    {
                        estarJogando = '1';
                    }

                }

                estarJogando = '0';
                break;


            // * terceiro jogo selecionado
            case '3':
                break;


            // * encerrando o software
            case '4':
                printf("\n ### Finalizando software ### \n");
                break;


            // * opção invalida
            default:
                printf("\n !!! Comando inválido !!! \n");
                scanf(" %c", &lixo);
        }

    } while(escolhaMenuPrincipal != '4');
}