#include <stdio.h>

int main(void){
int i=3,j=5;
int *p, *q;
p = &i;
q = &j;
printf("*p = %d\n", *p);
printf("*q = %d\n", *q);
printf("p = %d\n", p);
printf("q = %d\n", q);
printf("*&p = %d\n", *&p);
printf("*&p = %d\n", *&p);
printf("%d", (3 - *p/(*q) + 7));
return 0;
}

Determine o valor das seguintes expressões:

p == &i; // 6422296 == 6422296.
*p - *q; // P-Q==> 3 - 5 == -2.
**&p; // o conteúdo do ponteiro para endereço de P É 3.
3 - *p/(*q) + 7; // 3 - 3/5 + 7 ==9.4.