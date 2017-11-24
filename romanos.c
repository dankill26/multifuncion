
#include <stdio.h>
void romanos(int *n) {

    
    int mil,centena,decena,unidad;
       
    
    //declaracion de cadenas de caracteres
    char miles1[2]="",miles2[2]="M",miles3[3]="MM",miles4[4]="MMM";    
    
    char centenas1[2]="",centenas2[2]="C",centenas3[3]="CC",centenas4[4]="CCC",centenas5[3]="CD";
    char centenas6[2]="D",centenas7[3]="DC",centenas8[4]="DCC",centenas9[5]="DCCC",centenas10[3]="CM";
    
    char decenas1[2]="",decenas2[2]="X",decenas3[3]="XX",decenas4[4]="XXX",decenas5[3]="XV",
    decenas6[2]="L",decenas7[3]="LC",decenas8[4] ="LCC",decenas9[5] ="LCCC",decenas10[3] ="XC";   
    
    char unidades1[2] ="",unidades2[2] ="I",unidades3[3] ="II",unidades4[4] ="III",unidades5[3] ="IV",
    unidades6[2] ="V",unidades7[3] ="VI",unidades8[3]="VII",unidades9[5]="VIII",unidades10[3] ="IX";        
    
    //declaracion del puntero (con simbolo *)con valores de las cadenas anteriores
    char *mile[4];
   mile[0]=miles1,mile[1]=miles2,mile[2]=miles3,mile[3]=miles4;    
    
    char*cent[10];
    cent[0]=centenas1,cent[1]=centenas2,cent[2]=centenas3,cent[3]=centenas4,cent[4]=centenas5,
   cent[5]=centenas6,cent[6]=centenas7,cent[7]=centenas8,cent[8]=centenas9,cent[9]=centenas10;
   
   char*dec [10];
   dec[0]=decenas1,dec[1]=decenas2,dec[2]=decenas3,dec[3]=decenas4,dec[4]=decenas5,
   dec[5]=decenas6,dec[6]=decenas7,dec[7]=decenas8,dec[8]=decenas9,dec[9]=decenas10;
   
   char *uni[10];
    uni[0]=unidades1,uni[1]=unidades2,uni[2]=unidades3,uni[3]=unidades4,uni[4]=unidades5,
    uni[5]=unidades6,uni[6]=unidades7,uni[7]=unidades8,uni[8]=unidades9,uni[9]=unidades10;
 //printf ("escriba numero \n");
    //scanf ("%i", &numerodecimal);
    
   
    
     
        //{
          //  printf("numero demasiado alto\n");
           
       // printf ("vuelva a introducir numero entre 1 y 3000 \n");
       
     
        
    
         //scanf ("%i", &numerodecimal);
        //desfactorizando el numero introducido por el usuario
    mil=(*n/1000);
    printf("resultado para milares : %i %s \t \n \t",mil,mile[mil]);    
    centena=((*n-mil*1000)/100);
    printf("resultado para centenas : %i %s \t \n\t",centena,cent[centena]);
    decena=(((*n -(mil*1000+centena*100)))/10);        
    printf("resultado para decenas : %i %s \t \n\t",decena,dec[decena]);
    unidad=(*n-(mil*1000+centena*100+decena*10));    
    printf("resultado para unidades : %i %s\t \n\t",unidad,uni[unidad]);
    printf("su numero romano es %s%s%s%s \n",mile[mil],cent[centena],dec[decena],uni[unidad]);
                
return mile[mil],cent[centena],dec[decena],uni[unidad];





}