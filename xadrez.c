// PROJETO DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ
#include <stdio.h>;

int main(){//CORPO DO PROJETO
  int jogador;// VARIAVEL PARA INDICAR A OPÇÃO ESCOLHIDA PELO USUARIO
  int Movimentacao;// VARIAVEL PARA INDICAR A MOVIMENTAÇÃO DAS PEÇAS 
  int MovimentacaoDoCavalo = 1;//VARIAVEL PARA ADMINISTRAR A MOVIMENTAÇÃO DO CAVALO
  int direcao;//VARIAVEL RESPONSAVEL POR CUIDAR DA ESCOLHADO DO USUARIO AO MOVIMENTAR O CAVALO
  //TODOS OS PRINTF SERAM MANEIRAS DE INTERAGIR COM O USUARIO
  printf("***Movimentação Peças do xadrez***\n\n");
  printf("Escolha uma peça:\n");
  printf("1.Torre\n");
  printf("2.Rainha\n");
  printf("3.Bispo\n");
  printf("4.Cavalo\n");
  printf("Digite o numero correspondente a peça:\n");
  scanf("%d",&jogador);//AQUI O USUARIO DEVE INFORMAR UMA OPÇÃO

  switch (jogador)
  {
  case 1:
      while (Movimentacao <= 8)
      {
         if(Movimentacao == 8){
            printf("A torre andou 5 casas para frente");
         };
        Movimentacao++;
      } 
    break;

    case 2:
    do{
        printf("digite para movimentar a rainha:\n");
        scanf("%d",&Movimentacao);
         if (Movimentacao <= 5   )
         {
           printf("A rainha andou  %d para direita\n",Movimentacao);
         }else if(Movimentacao >= 5  ){
            printf("A rainha andou  %d para esquerda\n",Movimentacao);
   
         }
       
      }while (Movimentacao == 0);
      printf("encerrando a jogada!");
  break;

  case 3:
   printf("Bispo andou 1 casa para Cima\n");
  for(Movimentacao = 0 ; Movimentacao < 4 ; Movimentacao++){
   printf("Bispo andou para direita\n");

  }

   break;
   case 4:
   printf("Escolha uma direção para o cavalo seguir\n\n");
   printf("1.baixo/direita\n");
   printf("2.cima/direita\n");
   printf("3.baixo/esquerda\n");
   printf("4.cima/esquerda\n");
   printf("Faça sua escolha:\n");
   scanf("%d",&direcao);

   switch (direcao)//switch responsavel por gerenciar a decisao do usuario ao movimentar o cavalo
   {
   case 1:
   while (MovimentacaoDoCavalo -- )
   {
    
    for(int mov  = 0; mov < 2; mov++){
     printf("Baixo\n");
   }
   printf("Direita\n");  
   }
    break;
    case 2:
   while (MovimentacaoDoCavalo -- )
   {
    
    for(int mov  = 0; mov < 2; mov++){
     printf("Cima\n");
   }
   printf("Direita\n");  
   }
    break;
    case 3:
   while (MovimentacaoDoCavalo -- )
   {
    
    for(int mov  = 0; mov < 2; mov++){
     printf("Baixo\n");
   }
   printf("Esquerda\n");  
   }
    break;
    case 4:
   while (MovimentacaoDoCavalo -- )
   {
    
    for(int mov  = 0; mov < 2; mov++){
     printf("Cima\n");
   }
   printf("Esquerda\n");  
   }
    break;
   
   default:
   printf("opção invalida\n");
    break;
   }
  
   break;
  
  default:
  printf("Opção invalida");
    break;
  }

return 0;
};