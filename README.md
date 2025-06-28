# PROJETO - ARCADE GAMES

## INTRODUÇÃO   
   No universo da programação, os projetos de desenvolvimento de jogos são considerados os mais difíceis devido à quantidade de detalhes e regras que devem ser respeitadas. Entretanto, quando finalizados, trazem grande satisfação.

## OBJETIVO
   Olhando para esse grande desafio, essa atividade tem como objetivo desenvolver a habilidade do aluno de resolução de problema, raciocínio lógico algorítmico e competência interpessoal, além de treinar todos o conhecimento adquirido na programação estruturada em C.

## ATIVIDADE
   O projeto pode ser desenvolvido em equipe de até três estudantes e gera três artefatos para serem entregues:

   * O arquivo principal do código desenvolvido em C;
   * Um repositório no Github, contendo o arquivo do código e um arquivo README explicando o que é o projeto e o nome dos integrantes da equipe;
   * Um seminário da apresentação e defesa do código.

   O projeto envolve o desenvolvimento de um jogo em C. O jogo deve utilizar o console para o desenvolvimento gráfico e interação com o usuário. O objetivo do jogo é desenvolver um arcade contendo três mini jogos.

## JOGO
   A ideia do código é criar um sistema com três mini jogos. Ao iniciar o aplicativo, o usuário se deparará com um menu principal:

   ```
           TITULO DO JOGO
       1: Pergunta e resposta
       2: Cobra na caixa!
       3: Gousmas War
       4: Sair
   ```

   O aplicativo deve continuar rodando até que o usuário escolha a opção de sair. Para cada opção de mini jogo deve ter yna descrição prévia do mini jogo e a pergunta se o usuário quer começar.
   As regras de cada jogo são:

#### Pergunta e resposta
   O nome é autoexplicativo, esse é um jogo em que o computador faz uma pergunta e apresenta quatro alternativas, pedindo ao usuário que escolha a alternativa correta. Ao escolher a alternativa, o computador deve informar se está correta ou incorreta. Caso a resposta esteja incorreta, o computador deve mostrar a resposta correta.

   Esse mini jogo possui um total de cinco perguntas, e a ordem das perguntas e suas respostas não precisam ser alteradas para cada rodada.

   Ao terminar o jogo, o jogador pode escolher entre jogar novamente ou voltar para o menu principal.

#### Cobra na caixa!
   Você e seu colega de trabalho estavam explorando a tumba do faraó Neebe quando entraram em uma grande sala com escrituras na parede. Enquanto inspecionavam as escrituras, vocês acidentalmente pressionaram um botão escondido que lacrou as portas, prendendo-os lá dentro. Então, cinco caixas apareceram no centro da sala, uma delas contendo o botão para abrir as portas, mas uma delas contém uma cobra mortal! Vocês decidem jogar turnos para abrir uma caixa de cada vez, na esperança de não encontrar a cobra.

   Esse é um jogo de sorte, onde ganha o jogador que descobrir a caixa que contém o botão e perde aquele que descobrir a caixa com a cobra. Cada jogador deve informar seu primeiro nome e o computador escolherá aleatoriamente quem começa abrindo a primeira caixa. O jogador escolhido deve escolher uma das cinco caixas e o computador informará se há uma cobra, o botão ou nada dentro. Depois disso, a caixa escolhida não pode mais ser escolhida.

   O jogo deve continuar até que alguém encontre o botão ou a cobra. Ao terminar o jogo, o jogador pode escolher entre jogar novamente ou voltar para o menu principal.

#### Gousmas War
   Nas terras mágicas de Liima, é comum as pessoas capturarem Gousmas para lutar. As Gousmas são criaturas dóceis com a habilidade de se dividir, mas quando atacadas, entram em um estado de fúria e ficam mais fortes a cada ataque. No entanto, se uma Gousma fica muito furiosa, ela perde o controle e acaba se desintegrando.
   Durante a luta, cada participante começa com duas Gousmas em campo e com o nível de fúria igual a 1. Ao escolher uma Gousma para atacar, todo o nível de fúria do atacante é transferido para a Gousma atacada. Quando a Gousma atacada alcança um nível de fúria maior que 5, ela é desintegrada.

   Como a Gousma é feita de um líquido viscoso isso permite que durante a luta uma Gousma pode se dividir em duas, transferindo uma quantidade selecionada de fúria para a outra Gousma. Por exemplo, se uma única Gousma em campo tem 4 de fúria, pode ser dividida em outra Gousma passando 1 de fúria, assim, teremos uma Gousma com 3 de fúria e outra com 1 de fúria. O limite máximo de Gousmas em campo é de dois para cada participante. Se um jogador tem todas as Gousmas derrotadas, ele perde o jogo.

   O jogo é multiplayer e possui dois jogadores, que iniciam com duas Gousmas cada. O computador escolhe aleatoriamente qual jogador começa. O jogador selecionado pode escolher entre atacar com uma das Gousmas ou realizar a divisão. Se escolher atacar, deve selecionar qual Gousma atacará e qual será atacada. Se escolher dividir, o jogo deve verificar se há somente uma Gousma para o jogador (já que o limite máximo é de dois por jogador). Se for possível dividir, o jogador passa um valor de fúria para ser transferido para a nova Gousma.

   O jogador que perder todas as suas Gousmas é o perdedor. Ao término do jogo, o jogador pode optar por jogar novamente ou voltar para o menu principal.

## AVALIAÇÃO
   O projeto terá a seguinte distribuições de pontos:

   * Entrega do código (1,5 pontos): O código deve seguir as características descritas na seção JOGO.
   * Apresentação e defesa do código (0,7 ponto): Cada integrante da equipe deve apresentar o jogo funcionando, as principais ideias e dificuldades durante o desenvolvimento.
   * Repositório no GitHub (0,3 ponto): Repositório no Github contendo o código principal e um README explicando o que é o projeto e seu objetivo, o jogo e os nome dos integrantes da equipe.
   * Acompanhamento do projeto (0,5 ponto): A cada semana durante o desenvolvimento do projeto, terá um momento para o professor fazer um acompanhamento do projeto e avaliar o progresso durante as semanas.

   Caso tenha sido utilizado códigos de outro lugares (por exemplo: stackoverflow, chatGPT etc.), no README do github deve ter um link para os sites acessados e o nome dos devidos autores (para o chatGPT os alunos deveram mostrar a conversa com o chat durante a apresentação para destacar como foi a interação).
