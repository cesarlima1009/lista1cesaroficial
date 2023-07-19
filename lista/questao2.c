//  Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.


#include <stdio.h>

int main(void){
    int i=5, *p;
    p = &i==4094; 
    printf("%d %d %d %d %d", 4094,p+2,&p,3p,*&p+4);
    return 0;
}

// IMPRESSÃO: 4094, 7, 5, 15, 9.