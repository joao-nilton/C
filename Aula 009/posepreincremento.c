#include <stdio.h>
#include <stdlib.h>

int main (){
    /*
    int x = 10, y = 10;
    x++; //x = x + 1
    ++y; // y = y + 1
    printf("x = %d \n",x);
    printf("y = %d \n",y);
*/
/*
int x = 10, y = 10;
    y = x++; //y = x 
             //  x++ 
    printf("x = %d \n",x);
    printf("y = %d \n",y);
*/

int x = 10, y = 10;
    y = ++x ; //x = x++
             //  y = x;
    printf("x = %d \n",x);
    printf("y = %d \n",y);


    //system("pause");
    return 0 ;


}