/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 21 de septiembre de 2020, 09:30 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a=12,b=18;
    printf("Ingrese el numero con el que desea iniciar");
    scanf("%d", &a);
    printf("Ingrese el numero con en el que desea terminar");
    scanf("%d", &b);
    for ( a=12; a<=b; a++ ){
        printf("%d\n", a);
    }

    return (EXIT_SUCCESS);
}

