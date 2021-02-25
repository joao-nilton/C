#include <stdio.h>
#include <stdlib.h>
# define PI 3.1415
int main (){
int nro = 10;
const int  nro = 10;
int soma = nro + 1;
printf("Constante %d \n",nro);
// nro = 12; nao pode pois nro é uma constante e vale 10
float f = PI +1;
printf("PI = %f \n",PI);
// PI = 12.4; Idem ao comentário anterior.
// em const o valor atribuido é colocado na men=moria em define não, neste o valor PI ira sendo substituido por 3.14 de acordo com a execução do programa.
// system ("pause");
return 0;
}