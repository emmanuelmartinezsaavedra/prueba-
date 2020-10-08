/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 24 de septiembre de 2020, 09:25 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int cuantos,a,num,suma;
    printf("Ingrese cuantos numeros desea sumar\n");
    scanf("%d", &cuantos);
    for(a=0; a<cuantos; a++){
        printf("Ingrese los numeros\n");
        scanf("%d",&num);
        suma=suma+num;
        
    }
    printf("La suma es: %d", suma);
    

    return (EXIT_SUCCESS);
}

