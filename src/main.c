/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <stdlib.h>
// #include <pthread.h>
int primo(int x)
{
  int flag=0, i=2;
  if(x==0||x==1)
    flag=1;
  while(flag==0&&i<=x/2)
  {

    if(x%i==0)
    {
      flag=1;
    }
    else
    {
      i++;
      // printf("12\n");
    }
  }
  return flag;
    // if (flag==1)
    // {
    //   printf("%d não é primo\n",x);
    // }
    // else
    // {
    //   printf("%d não é primo\n",x);
    // }
}


int main() {

  int x=1, y;
  int i=2, j=0, flag=0;
  int numbers[10];
  FILE *sort;
  // FILE *aux;
  pthread_t thread[8];
  int status;
  sort=popen("sort -n -r","w");
  if(sort==NULL)
    printf("erro\n");
  while(x!=-1)
  {
    scanf("%d", &x);
    if(x!=-1)
    {
      flag=primo(x);
      if (flag==1)
      {
        // fprintf(aux,"%d\n",x);
        fprintf(sort,"%d\n",x);
      }
    }
    //fscanf(aux,"%d", numbers);
    // printf("flag");

    if(j<7)
      j++;
    else
      j=0;
  }
  pclose(sort);
  return 0;
}
