// Se i e j são variáveis inteiras e p e q ponteiros para int, quais das seguintes expressões de atribuição são ilegais? 


    int i, j;
    int *p, *q;
    p = i; 
// INVÁLIDA, PORÉM O PROGRAMA AINDA COMPILA.
    q = &j; 
//VÁLIDA
    p = &*&i;
// VÁLIDA
    i = (*&)j;
// INVÁLIDA E O PROGAMA NÃO COMPILA
    i = *&j; 
// VÁLIDA
    i = &&j;
// VÁLIDA
    q = *p; 
// INVÁLIDA , PORÉM AINDA HÁ A COMPILAÇAO 
    i = (*p)++ + *q; 
// VÁLIDA