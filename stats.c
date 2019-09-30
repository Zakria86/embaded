/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief < first assignment main function and the other functions ,that doing some math work >
 *
 * <main function and other functions to print a array and find the max,min,mean and the median for an array

 >
 *
 * @author <Zakria Hussine>
 * @date <30.09.2019>
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
#include <stdio.h>
#include "stats.h"

void print_statistics(unsigned char * ptr, int count);
void print_array(unsigned char * ptr, int count);
unsigned char find_median(unsigned char * ptr, int count);
unsigned char find_mean(unsigned char * ptr, int count);
unsigned char find_maximum(unsigned char * ptr, int count);
unsigned char find_minimum(unsigned char * ptr, int count);
unsigned char sort_array(unsigned char * ptr, int count);



/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
    print_array(test,SIZE);
    print_statistics(test,SIZE);

}
void print_statistics(unsigned char * ptr, int count){
unsigned char median = find_median(* ptr,count) ;
unsigned char mean = find_mean(* ptr,count) ;
unsigned char max = find_maximum(* ptr,count) ;
unsigned char median = find_minimum(* ptr,count) ;

}

void print_array(unsigned char * ptr, int count){};
unsigned char find_median(unsigned char * ptr, int count){};
unsigned char find_mean(unsigned char * ptr, int count){};
unsigned char find_maximum(unsigned char * ptr, int count){};
unsigned char find_minimum(unsigned char * ptr, int count){};
unsigned char sort_array(unsigned char * ptr, int count){};

/* Add other Implementation File Code Here */
    return 0;
}

