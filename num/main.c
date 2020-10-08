/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 17 de septiembre de 2020, 09:29 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b;
    printf("Ingresar el numero con que desea iniciar\n");
    scanf("%d", &a);
    printf("Ingrese el numero con el que desea terminar\n");
    scanf("%d",&b);
    do{
        printf("%d\n",a);
        a++;
        
    }while(a<=b);
        
    
    printf("adios");
    return (EXIT_SUCCESS);
}

