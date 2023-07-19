// Suponha que as seguintes declarações tenham sido realizadas:/

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

//Identifique quais dos seguintes comandos é válido ou inválido:

aloha[2] = value;
// VÁLIDO
scanf("%f", &aloha);
// VÁLIDO
aloha = value; 
// INVÁLIDO
printf("%f", aloha); 
// VÁLIDO
coisas[4][4] = aloha[3];
// não há um valor definido para aloha[3], porém é válido
coisas[5] = aloha; 
// INVÁLIDO
pf = value; 
// INVÁLIDO
pf = aloha;
// VÁLIDO