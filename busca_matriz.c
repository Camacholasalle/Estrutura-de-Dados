#
include < stdio.h >

  int main(void) {

    int M[3][3];
    int num, i, j, opc;

    printf("\n******************************** Matriz do Lucas *******************************");
    do {
      //Ler a Matriz
      for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
          printf("\n\nDigite o termo [%d]-[%d] da matriz: ", i, j);
          scanf("%d", & M[i][j]);
        }

      }

      //Exibir a Matriz

      printf("\n A Matriz e: \n\n");
      for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
          printf("%6d", M[i][j]);
        }
        printf("\n");
      }

      printf("\nEntre com o numero de busca ");
      scanf("%d", & num);
      busca(M, num);
      printf("\n");

      printf("Deseja fazer outra Matriz? [1]SIM || [2]NAO. ");
      scanf("%d", & opc);

    } while (opc == 1);

    system("pause");
    return 0;
  }

void busca(int M[][3], int num) {
  int i, j, achou;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (M[i][j] == num) {
        printf("\nFoi encontrado na posicao [%d]-[%d] da Matriz", i, j);
        achou = 1;
      }
    }
  }
  if (achou != 1) {
    printf("Esse item nao se encontra na matriz. ");
  }

}
