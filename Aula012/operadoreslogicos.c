#include <stdio.h>
#include <stdlib.h>

int main (){
//Operadores lógicos 
/* Operador E (&&): O resultado é 1 apenas se ambas as expressões também forem 1, do contrário, o resultado é zero
*/
 /*int r, x = 5, y = 3;
r = (x > 2) && (y < x);

printf("Resultado = %d \n",r);

r = (x % 2 == 0) && (y > 0);
printf("Resultado = %d \n", r);
*/
/* O operador OU (||): O resultado é 1 se uma ds expressões for 1 e 0 se ambas as expressões forem 0.
*/
/* int r, x = 5, y = 3;
r = (x > 2) || (y > x);

printf("Resultado = %d \n",r);

r = (x % 2 == 0) && (y < 0);
printf("Resultado = %d \n", r);
*/


int r, x = 5, y = 3;
r = !(x > 2);

printf("Resultado = %d \n",r);

r = ! (x > 7) && (x > y );

printf("Resultado = %d \n", r);

    //system("pause");
    return 0 ;

//Adicionando um comentario para ver se o git capta
//Adicionando um comentario para ver se o git capta 12-03-21
//apareceu lá 13032021
//apareceu lá 14032021
//apareceu lá 15032021
}
