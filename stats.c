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
 * @file stats.c
 * @brief first assignment main function and the other functions ,that doing some math work >
 *
 *         main function and other functions to print a array and find the max,min,mean and the median for an array

 >
 *
 * @author Zakria Hussine
 * @date 30.09.2019
 *
 */

#include <stdio.h>
//#include "stats.h"

unsigned char print_statistics(unsigned char * ptr, int count);
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

    print_statistics(test,SIZE);
    print_array(test,SIZE);
    printf("\n");


};

unsigned char print_statistics(unsigned char * ptr, int count){


unsigned char median = find_median(ptr,count) ;

unsigned char mean = find_mean(ptr,count) ;

unsigned char max = find_maximum(ptr,count) ;

unsigned char min = find_minimum(ptr,count) ;


printf("the mean  is : %u \n",mean);
printf("the median number is : %u \n",median);
printf("the max number  is : %u \n",max);
printf("the min number  is : %u \n",min);
}

void print_array(unsigned char * ptr, int count){
    int i,n;
    n=0;
    for(i=0;i<count;i++)
        {
        printf(" %u  ",ptr[i]);
        n++;
        if(n>7)
        {
            n=0;
            printf("\n");
        }
        }

};
unsigned char sort_array(unsigned char * ptr, int count){
int temp,i,j;
if(ptr==0){
    return 0;
}
if (count <= 0 ){
    return 0;
}
unsigned char sorted[count];
for(i=0;i<count;i++)
{
    sorted[i]=ptr[i];

}
for(i=1;i<count;i++)
{
     for(j=0;j<count-i;j++)
     {
         if(sorted[j]<sorted[j+1])
         {
             temp=sorted[j];
             sorted[j]=sorted[j+1];
             sorted[j+1]=temp;
         }
     }
}
print_array(sorted,count);
 return sorted;

}
unsigned char find_mean(unsigned char * ptr, int count){
int avg , i ;

if(ptr==0){
    return 0;
}
if (count <= 0 ){
    return 0;
}

for(i=0;i<count;i++)
{
    avg += ptr[i];

}
return (avg/count);
};


unsigned char find_median(unsigned char * ptr, int count){


if(ptr==0){
    return 0;
}
if (count <= 0 ){
    return 0;
}


 if((count%2)==0){
    sort_array(ptr,count);
    return (ptr[(count-1)/2] + ptr[count/2])/2;
 }else
 {
     return ptr[count/2];
 }

};




unsigned char find_maximum(unsigned char * ptr, int count){


if(ptr==0){
    return 0;
}
if (count <= 0 ){
    return 0;
}
int max,i;
max=ptr[0];
for(i=1;i<count;i++)
{
    if(max<ptr[i])
        max=ptr[i];

}

return max;

};
unsigned char find_minimum(unsigned char * ptr, int count){


unsigned char array_min[count];
if(ptr==0){
    return 0;
}
if (count <= 0 ){
    return 0;
}
int min,i;
min=ptr[0];
for(i=1;i<count;i++)
{
    if(min>ptr[i])
        min=ptr[i];

}
return min;

};

/* Add other Implementation File Code Here */



