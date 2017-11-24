/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: juanmi
 *
 * Created on 17 de noviembre de 2017, 13:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int calculodni (int);//prototipo de función
char indiceletra (int);
char romanos(int);
int verificar (char);
int main() {
    char numerodni[9];
    int eleccion;
    int resultado;
    char numeroRomano[4];
    char resultadoRomano;
    int control =1;
     
    while (control == 1 ) { 
    printf ("Elija una opción:\n");
    printf("\t2 Calculo Romanos\n");
    printf ("\t1.-Calcular letra NIF .\n");
    printf ("\t0.- salir .\n");
   
    scanf ("%i", &eleccion);
    
    
 
    
    if (eleccion==1) {
        printf ("Escriba su numero DNI: \n");
        scanf ("%s",numerodni);
        verificar(numerodni);
        
        printf("el numero de dni es %s \n",numerodni);
        resultado=calculodni(*numerodni);
        
        printf("Su letra de dni es %c \t\n",indiceletra(resultado));
    }
    
    else if (eleccion==2) {
        printf("escriba un valor entre 1 y 3000 \n");
        scanf ("%s",&numeroRomano);
            verificar(numeroRomano);
            printf("numero valido\n %i \t \n",);
            
            if (numeroRomano <= 3000){
                 resultadoRomano=romanos(numeroRomano);
            }
           
            else{
                printf("dato erroneo \n");
            }
    }
            
    
    else {
        printf ("Hasta otra guapi \n");
        
    }
    printf ("¿Quiere continuar? \t pulse 1 para continuar o 0 para salir\n");
    scanf ("%i",&control);
    }
return (0);
}

