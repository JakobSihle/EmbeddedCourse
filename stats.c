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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100, 90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test);
  print_statistics(test);
  print_array(test);
}

/* Add other Implementation File Code Here */
void print_statistics (unsigned char array[]) {
  int min = find_minimum(array);
  int max = find_maximum(array);
  double mean = find_mean(array);
  double median = find_median(array);

  printf("\nMin = %d", min);
  printf("\nMax = %d", max);
  printf("\nMean = %f", mean);
  printf("\nMedian = %f \n", median);
}

void print_array (unsigned char array[]) {
  int index;
  for ( index = 0; index < SIZE; index++){
    printf("%d ", array[index]);
  }
}

int find_minimum (unsigned char array[]){
  int min = array[0];
  int index;
  for ( index = 1; index < SIZE; index++){
    if ( min > array[index]){
      min = array[index];
    }
  }
  return min;
}

int find_maximum (unsigned char array[]){
  int max = array[0];
  int index;
  for ( index = 1; index < SIZE; index++){
    if ( max < array[index]){
      max = array[index];
    }
  }
  return max;
}

double find_mean (unsigned char array[]){
  double sum;
  int index;
  double mean;
  for (index = 0; index < SIZE; index++){
    sum = sum + array[index];
  }
  mean = sum / SIZE;
  return mean;
}

double find_median (unsigned char array[]){
  double median;
  sort_array(array);
  if (SIZE%2 == 0){
    double med1 = array[SIZE/2 - 1];
    double med2 = array[SIZE/2];
    median = (med1 + med2) / 2;
  } else {
    median = array[(SIZE + 1) / 2];
  }
  return median;
}

void sort_array (unsigned char array[]){
  int index;
  int iteration;
  int temp;
  int max;
  int maxIndex;

  for (iteration = 0; iteration < SIZE; iteration++){
    max = array[iteration];
    maxIndex = iteration;
    temp = array[iteration];
    for (index = iteration; index < SIZE; index++){
      if (array[index] > max){
        max = array[index];
        maxIndex = index;
      }
    }
    array[iteration] = max;
    array[maxIndex] = temp;
  }
}