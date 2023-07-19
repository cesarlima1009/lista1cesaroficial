//Considerando a declaração int mat[4], *p, x;, quais das seguintes expressões são válidas? Justifique.

p = mat + 1; // Válido. p está sendo definido como um ponteiro para mat + 1;

p = mat++; /* Inválido. Pois não é possivel fazer incrementação de tipo int ao ponteiro, ou seja mat++ é inválido */

p = ++mat; // inválido.

x = (*mat)++; // Válido. O resultado vai ser o endereço em mat[0] com a incrementação de um em um.