/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 14 de septiembre de 2020, 09:46 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int nui=10;
    int nuf=20;
    printf("Ingrese el numero con el que desea iniciar");
    scanf("%d", &nui);
    printf("Ingrese el nunero con el que sea terminar");
    scanf("%d", &nuf);
    while (nui<=nuf){
        printf("%d\n", nui);
        nui=nui+1;
        
    }
    printf("Adios");
    return (EXIT_SUCCESS);
}

