//O que fazem os seguintes programas em C? 
#include <stdio.h>

 int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
} 

// Imprime cada um dos elementos do vetor por meio do laço de repetição for.

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}

//o laço de repetição imprime o endereço de memória de cada componente do vetor.