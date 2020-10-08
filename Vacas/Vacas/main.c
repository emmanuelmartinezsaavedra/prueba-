/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 21 de septiembre de 2020, 11:22 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int hora=time(NULL);
    int num1,num2,num3,num4;
    int x,x2,x3,x4;
    srand(hora);
    num1=rand() % 10;
    num2=rand() % 10;
    num3=rand() % 10;
    num4=rand() % 10;
    while(num1==num2)
        num2=rand() % 10;
    while((num2==num3)|| (num1==num3))
        num3=rand() % 10;
    while((num3==num4)|| (num2==num4)|| (num1==num4))
        num4=rand() % 10;
    printf("%d", num1);
    printf("%d", num2);
    printf("%d", num3);
    printf("%d", num4);
    
    

    return (EXIT_SUCCESS);
}

