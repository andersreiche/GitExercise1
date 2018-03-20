/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Emilie1
 *
 * Created on 20. marts 2018, 10:20
 */

#include <stdio.h>
#include <stdlib.h>
#include "adder.h"


int main(int argc, char** argv) {

    puts("");
    printf("3 + 4 = %d\n", adder(3,4));
    printf("1 + 1 = %d\n", adder(1,1));
    printf("1 + 2 = %d\n", adder(1,2));
    
    return (EXIT_SUCCESS);
}

