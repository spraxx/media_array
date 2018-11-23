#include <stdio.h>
void main(){
  int notas[38], n, i, soma = 0;
  float media;

  printf("qual o numero de cadeiras feitas?\n");
  scanf("%d", &n);

  for(i = 0;  i <n ;  i++){

    printf("\nIntroduza %dª nota: ", i+1);
    scanf("%d", &notas[i]);

    soma  =  soma  + notas[i];
  }
  media = soma  * 1.0  / n;

  printf("\nA media e %.1f", media);

  printf("E as notas acima da media sao: ");
  for(i = 0; i  < n;  i++){
    if (notas[i]  > media) {
      printf("\n%d\n",  notas[i]);
    }
  }
}
