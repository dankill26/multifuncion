
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
 * 
 */
int verificar(char numeroval) {
//recorrer array y verificar que es numero.

char num[9];

int i;
int numero;

//printf("introduzca numero: \t \n ");
//scanf ("\t \n %s", &num);
//atoi(num);
//numero=num;
//numval=num;
//printf("el numero introducido es %s \t\n ",num); 
    //le decimos el maximo del vector y hasta que llegue al final de la escritrura (/0) qu se situa detras del numero escrito.
for (i=0; ((i<9)&&(num[i]!='\0')); i++){ 
    //printf(" num %c \t \n",num [i]);
   
    if (isdigit(num[i])) {
        numero = atoi(num);
        //printf("\t %i \n",numero);
    }
        else{
            printf("no es numero \n");
        break;
   }
   
    
    }


    
    
    
    
    
    return (numero);
}
