/*
Programa: Urna eletrônica para escolha do presidente.
----------------------------------------------------------
Desenvolvedores: Lucas Peixoto, Fernando Peixoto & Gabriel Ribeiro.
*/

#include<stdio.h>
#include<stdlib.h>
int confirma; // variável que guardará a confirmação do voto
int voto[13]={0,0,0,0,0,0,0,0,0,0,0,0,0}; //vetor que armazenará os votos dos 13 candidatos iniciando com 0 votos
//----------------------------- FUNÇÕES ----------------------------------------
 // *** Função para imprimir linhas ***
 void linha(){ 
         printf("-----------------------------------------------------\n"); // imprime linhas
}
// *** Função de validação dos votos ***
void validaVoto(int posicao){ // o valor da variável "posicao" é dada após o usuário escolher o codigo do candidato escolhido
     printf("\n1 - Confirmar\n0 - Cancelar\n"); // informa ao usuário as opções de validação do voto
     printf("\nOpcao: "); // indica ao usuário a opção escolhida
     scanf("%d",&confirma); // armazena a opção escolhida
     if(confirma==1){ // se o usuário confirmar o voto...
                    voto[posicao]++; // acrescenta +1 voto na posição do vetor referente ao candidato
                    // Obs. A posição do vetor referente ao candidato é informada após a escolha do candidato pelo usuário,
                    // cada candidato possui uma posição no vetor.
                    system("cls"); // limpa a tela
                    printf("AGRADECEMOS O SEU VOTO!"); // imprime o agradecimento pelo voto
                    _sleep(5000); // aguarda 5 segundos ou 5000 milésimos segundos
                 }// fim if
                 }// fim função
//-------------------------- INICIO --------------------------------------------
int main(){
system("color F0"); // inicia o programa com o fundo na cor branca(F) e as letras na cor preta(0) deixando o resultado mais proximo da urna real
 int codigo, menu, eleitores; // variáveis

// *** Primeira janela ***
 while(1){ // loop infinito para depois de finalizada a votação retornar ao menu inicial
 system("cls"); // limpa a tela
   linha(); // imprime linhas
   printf("OPCOES DA URNA ELETRONICA\n");
   linha(); // imprime linhas
   printf("1 - Iniciar votacao\n2 - Resultado\n3 - Sair\n\nSua opcao: "); // informa as opções inicias e indica a opção escolhida
    scanf("%d",&menu); // armazena a opção escolhida 
    switch(menu){ // analiza a opção escolhida no menu inicial
                 
//------------------- INICIAR A VOTAÇÃO ----------------------------------------
    case 1: // caso o usuário escolheu iniciar a votação...
    system("cls"); // limpa a  tela
              linha(); // imprime linhas
              printf("Escolha o codigo referente a sua opcao\n"); // pede para o usuário escolher o candidato
              linha(); // imprime linhas
              // Imprime as opções de candidatos e seus respectivos códigos
              printf("\nCodigo:       Candidato:\n"); 
              printf("Codigo 45    Aecio Neves\nCodigo 13    Dilma Rousseff\n");
              printf("Codigo 43    Eduardo Jorge\nCodigo 27    Eymael\nCodigo 28    Levy Fidelix\n");
              printf("Codigo 50    Luciana Genro\nCodigo 40    Marina Silva\nCodigo 21    Mauro Iasi\n");
              printf("Codigo 20    Pastor Everaldo\nCodigo 29    Rui Costa pimenta\nCodigo 16    Ze Maria\n");
              printf("Codigo 0     Voto nulo\nCodigo 1     Voto em branco\n");
              printf("\nSeu voto: "); // Indica a opção do usuário
              scanf("%d",&codigo); // armazena o código do candidato escolhido
              system("cls"); // limpa a tela 
              linha(); // imprime linhas
              printf("CANDIDATO(A) ESCOLHIDO(A)\n");
              linha(); // imprime linhas
    switch (codigo){ // analiza o codigo do candidato escolhido pelo usuário
                             case 45: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 45\nNome para urna: Aecio Neves\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido da Social Democracia Brasileira\nColigacao: MUDA BRASIL (PSDB / PMN / SD / DEM / PEN / PTN / PTB / PTC / PT do B)");
                                  printf("Vice Presidente(a): Aloysio Nunes Ferreira\n");
                                  validaVoto(0); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 13: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 13\nNome para urna: Dilma Roussef\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido dos Trabalhadores\nColigacao: COLIGACAO COM A FORÇA DO POVO (PT / PMDB / PSD / PP / PR / PROS / PDT / PC do B / PRB)\n");
                                  printf("Vice Presidente(a): Michel Temer\n");
                                  validaVoto(1); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 43: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 43\nNome para urna: Eduardo Jorge\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido Verde\nColigacao: PV\n");
                                  printf("Vice Presidente(a): Celia Sacramento \n");
                                  validaVoto(2); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 27: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 27\nNome para urna: Eymael\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido Social Democrata Cristao\nColigacao: PSDC\n");
                                  printf("Vice Presidente(a): Roberto Lopes\n");
                                  validaVoto(3); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 28: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 28\nNome para urna: Levy Fidelix\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido Renovador Trabalhista Brasileiro\nColigacao: PRTB\n");
                                  printf("Vice Presidente(a): Cel. Jose Alves\n");
                                  validaVoto(4); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 50: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 50\nNome para urna: Luciana Genro\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido Socialismo e Liberdade\nColigacao: PSOL\n");
                                  printf("Vice Presidente(a): Jorge Paz\n");
                                  validaVoto(5); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 40:
                                  // imprime informações do candidato escolhido 
                                  printf("Numero: 40\nNome para urna: Marina Silva\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido Socialista Brasileiro\nColigacao: UNIDOS PELO BRASIL (PHS / PRP / PPS / PPL / PSB / PSL)\n");
                                  printf("Vice Presidente(a): Beto Albuquerque\n");
                                  validaVoto(6); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 21: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 40\nNome para urna: Mauro Iasi\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido Comunista Brasileiro\nColigacao: PCB\n");
                                  printf("Vice Presidente(a): Sofia Manzano\n");
                                  validaVoto(7); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 20: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 20\nNome para urna: Pastor Everaldo\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido Social Cristao\nColigacao: PSC\n");
                                  printf("Vice Presidente(a): Leonardo Gadelha\n");
                                  validaVoto(8); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 29: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 29\nNome para urna: Rui Costa Pimenta\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido da Causa Operaria\nColigacao: PCO\n");
                                  printf("Vice Presidente(a): Ricardo Machado\n");
                                  validaVoto(9); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                             
                             case 16: 
                                  // imprime informações do candidato escolhido
                                  printf("Numero: 16\nNome para urna: Ze Maria\nCargo a que concorre: Presidente\n");
                                  printf("Partido: Partido Socialista dos Trabalhadores Unificado\nColigacao: PSTU\n");
                                  printf("Vice Presidente(a): Claudia Durans \n");
                                  validaVoto(10); // Inicia a opção de validação do voto informando a posição do vetor referente ao candidato escolhido
                                  break;
                            
                            case 0:
                                 // questiona se o usuário deseja anular o voto 
                                  printf("DESEJA VOTAR NULO?\n");
                                  validaVoto(11); // Inicia a opção de validação do voto informando a posição do vetor referente a opção de voto escolhida
                                  break;
                            
                            case 1:
                                  // questiona se o usuário deseja votar em branco
                                  printf("DESEJA VOTAR EM BRANCO?\n");
                                  validaVoto(12); // Inicia a opção de validação do voto informando a posição do vetor referente a opção de voto escolhida
                                  break;
                            
                            default:
                                    // se o usuário digitar um código invalido
                                  printf("Opcao invalida!\n\nRetonando ao menu...");// imprime informando que o codigo não é valido e retorna ao menu
                                  _sleep(5000); // aguarda 5 segundos ou 5000 milésimos de segundos
                                  break;  
                             }// fim switch do código
    break;

//----------------------------- MOSTRAR RESULTADO ------------------------------
case 2: // caso o usuário escolheu conferir o resultado... 
     linha(); // imprime linhas
     printf("RESULTADO DA VOTACAO\n");
     linha(); // imprime linhas
     // Exibe o resultado da votação
     printf("\nVotos:     Candidato(a):\n");
     printf("%d          Aecio Neves\n%d          Dilma Rousseff\n%d          Eduardo Jorge\n",voto[0],voto[1],voto[2]);
     printf("%d          Eymael\n%d          Levy Fidelix\n%d          Luciana Genro\n",voto[3],voto[4],voto[5]);
     printf("%d          Marina Silva\n%d          Mauro Iasi\n%d          Pastor Everaldo\n",voto[6],voto[7],voto[8]);
     printf("%d          Rui Costa Pimenta\n%d          Ze Maria\n",voto[9],voto[10]);
     printf("\n%d          Votos nulos\n%d          Votos em branco\n\n",voto[11],voto[12]);
     system("pause");  // pausa o programa enquanto nenhuma tecla é precionada
     break;

//-------------------------------- SAINDO --------------------------------------
case 3: // caso o usuário escolheu sair do programa... 
    return(0); // retorna valor 0 para a função main() fechando o programa
    break;

}// fim switch menu 
}// fim while (loop do menu inicial)
}// fim main
