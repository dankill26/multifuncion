
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
 * 
 */
int verificar(int *c) {
   
//recorrer array y verificar que es numero.
//char numerr[20]= *c;
int longitud;
int numero;
int control=0;
//scanf("%s",&numerr);
longitud = strlen(*c);
//longitud = longitud -1;
for (int i=0; i<=longitud -1; i++){ 
    //printf(" num %c \t \n",num [i]);
   
    if (isdigit(*c[i])) {
        control=control+ 1;
        //printf("\t %c \n",numerr[i]);
        if (i == longitud){
            break;
        }
        
    }
        else{
            printf("no es numero \n");
        break;
   }
   
    
   }
//printf("%i        %i \n",longitud,control);
if (control == longitud){
    numero = atoi(*c);
    //printf("%i\n",numero);
    }else{
        printf("UNA PATATA \n");
    }

    return (numero);
}
