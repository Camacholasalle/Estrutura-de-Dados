/*MATRIZ*/

#include<stdio.h>

int main(){

int i, j, num, n=3;
int M[3][3];

printf("\n\n********************* MATRIZ DO Camacho el Cangaceiro **************************\n\n\n\n");
//Faz a leitura da matriz M

for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        printf("Digite o elemento [%d]-[%d] da matriz: ", i,j);
        scanf("%d", &M[i][j]);
    }
}

//Mostrar a Matriz

printf("\nA Matriz e:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%6d", M[i][j]);
        }
        printf("\n");
    }


//Solicita o elemento de busca

printf("\nEntre com o numero de busca ");
scanf("%d", &num);
busca(M, num);
printf("\n");


system("pause");
return 0;

}

void busca(int M[][3], int num){
    int i,j, achou;

for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        if(M[i][j]==num){
            printf("\nFoi encontrado na posicao [%d]-[%d] da Matriz",i, j);
            achou=1;
        }
    }
}
if(achou==0){
        printf("Não tem playboy");
}

}





















