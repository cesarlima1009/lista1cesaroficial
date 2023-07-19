// Determine o que será mostrado pelo seguinte programa (compile-o, execute-o e verifique se foram obtidas as respostas esperadas). 

#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;


   // (a) :
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor); 

    // a resposta foi a esperada, o 10 contido no ponteiro foi substituí do pelo número 20


    // (b): 
    temp = 26.5;
    p2 = &temp; 
    *p2 = 29.0;
    printf("%.1f \n", temp);  
    
    // a resposta foi a esperada pois o 26,5, inicialmente contido no ponteiro 2, foi substituido pelo número 29.
    

    //(c):
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux); 

    // o resultado foi o esperado.


    // (d):
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux); 

    // o resultdo foi o esperado, mas a utilização do malloc poderia ter facilitado a implementação desse código.

    //(e) :
    p3 = nome;
    printf("%c \n", *p3); 

    // o resultado foi apenas a letra p, ou seja, não foi espererado. não utilizou vetor.

    // (f) :

    p3 = p3 + 4;
    printf("%c \n", *p3); 

    //foi impressa apenas a letra e, pelo fato de ser uma variável char, e estar na posição [4].


  //(g):

    p3--;
    printf("%c \n", *p3);

    //foi impressa apenas a letra T, pelo fato de ser uma variável char, e estar na posição 3--.


  //(h):

    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    // PELA AUSÊNCIA DE UM LAÇO DE REPETIÇÃO(FOR, WHILE) E DE UMA FUNÇÃO PRA ALOCAR A MEMÓRIA(MALLOC), FOI IMPRESSO APENAS O NÚMERO 31.


    //(i):

    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);
//PELA AUSÊNCIA DE UM LAÇO DE REPETIÇÃO(FOR, WHILE) E DE UMA FUNÇÃO PRA ALOCAR A MEMÓRIA(MALLOC), FOI IMPRESSO APENAS O NÚMERO 45 .


    //(j) :

    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);
//PELA AUSÊNCIA DE UM LAÇO DE REPETIÇÃO(FOR, WHILE) E DE UMA FUNÇÃO PRA ALOCAR A MEMÓRIA(MALLOC), FOI IMPRESSO APENAS O NÚMERO 27 OU DO ENDEREÇO DE MEM P5+1.


  // (l) :

    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);
//PELA AUSÊNCIA DE UM LAÇO DE REPETIÇÃO(FOR, WHILE) E DE UMA FUNÇÃO PRA ALOCAR A MEMÓRIA(MALLOC), FOI IMPRESSO APENAS O NÚMERO 31.


    //(m) :

    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    // O VALOR IMPRESSO FOI O 45, QUE É JUSTAMENTE O VALO CONTIDO NO VETOR [2] - 1, OU SEJA [1].


    //(n) :

    p5++;
    printf("%d \n", *p5);

    // ATRAVÉS DA INCREMENTAÇÃO ++, O VALOR CONTIDO FOI O 27, CONTIDO NO VETOR [2].

    return 0;

}