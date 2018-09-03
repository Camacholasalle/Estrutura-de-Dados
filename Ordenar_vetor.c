#include<stdio.h>
#include<stdlib.h>

void ordena(int n, float *v)
{
int i=0, troca, f, aux;
    troca =1;
    f=n-1;
while(troca==1)
    {
    troca=0;
    f=f-1;
        for(i=0; i<=f; i++){
           if(v[i]> v[i+1])
           {
            aux= v[i];
            v[i] = v[i+1];
            v[i+1]= aux;
            troca=1;
}}}
}

int main( void)

{
  int i, n, achou;
  float *v;
  float proc;

/* leitura do número de valores */

  printf("\nEntre com o numero de valores do vetor: ");
  scanf("%d", &n);

/* alocação dinâmica */

  v = (float*) malloc(n*sizeof(float));
  if (v==NULL)
	  {
	    printf("Memoria insuficiente.\n");
	    return 1;
	  }


/* leitura dos valores */

  printf("\nEntre com os valores: ");
  for (i = 0; i < n; i++) scanf("%f", &v[i]);

/*Ordenação*/

  ordena(n,v);
  printf("\nEstes sao os valores ordenados: ");
  for (i = 0; i < n; i++) printf("  %.1f",v[i]);



/*Liberação da memória*/
  free(v);

  printf("\n");
  system ("PAUSE");
  return 0;
}

