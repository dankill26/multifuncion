int calculodni(int a){ 
    int calculo;
    calculo= a%23;
    return(calculo);
}

char indiceletra(int a) {
    int relacion;
    char tabladni[24];
    tabladni[0]='T',tabladni[1]='R',tabladni[2]='W',tabladni[3]='A',
    tabladni[4]='G',tabladni[5]='M',tabladni[6]= 'Y';tabladni[7]='F',
    tabladni[8]='P',tabladni[9]='D',tabladni[10]='X',tabladni[11]='B',
    tabladni[12]='N',tabladni[13]='J',tabladni[14]='Z',tabladni[15]='S',
    tabladni[16]='Q',tabladni[17]='V',tabladni[18]='H',tabladni[19]='L',
    tabladni[20]='C',tabladni[21]='K',tabladni[22]='E',tabladni[23]='O';
    relacion=a;
    return tabladni[a];
    
}/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

