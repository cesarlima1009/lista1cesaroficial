//Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas).

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }



  //sim, as repostas foram as esperadas. 
 //1- o valor do primeiro printf é o próprio contador. 
 //2- v[i] do vetor f, declarado por float; 
 //3- o conteúdo *(f+i) que está dentro do ponteiro f + 1,  *(f+i)  retorna o mesmo valor que v[i];
 // 4- O endereço do vetor f (float) na base hexadecimal;
 // 5- retorna o mesmo endereço.

}