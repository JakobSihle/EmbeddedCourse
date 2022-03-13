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
 * @file stats.h 
 * @brief This header file declares the functions used in stats.c
 *
 * This file contains the declaration and information about various
 * functions used for statistical analysis of an array, such as finding 
 * its minimum, maximum, mean or median. It declares also a sorting
 * function for arrays.
 *
 * @author Jakob Sihle-Wissel   
 * @date 13/03/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics(unsigned char[]);
/**
 * @brief Function to print statistical analysis of an array
 *
 * This function takes an array of 8-bit unsigned chars as an input and
 * prints its minimum, maximum, mean and median. 
 *
 * @param array The array to be analysed.
 */

void print_array(unsigned char[]);
/**
 * @brief Function to print an array
 *
 * This function takes an array of 8-bit unsigned chars as an input and
 * prints it in the console. 
 *
 * @param array The array to be analysed.
 */

int find_minimum(unsigned char[]);
/**
 * @brief Function to find the minimum of an array
 *
 * This function takes an array of 8-bit unsigned chars as an input and
 * returns its minimum. 
 *
 * @param array The array to be analysed.
 *
 * @return The minimum of the array.
 */

int find_maximum(unsigned char[]);
/**
 * @brief Function to find the maximum of an array
 *
 * This function takes an array of 8-bit unsigned chars as an input and
 * returns its maximum. 
 *
 * @param array The array to be analysed.
 *
 * @return The maximum of the array.
 */

double find_mean(unsigned char[]);
/**
 * @brief Function to find the mean of an array
 *
 * This function takes an array of 8-bit unsigned chars as an input and
 * returns its mean. 
 *
 * @param array The array to be analysed.
 *
 * @return The mean of the array.
 */

double find_median(unsigned char[]);
/**
 * @brief Function to find the median of an array
 *
 * This function takes an array of 8-bit unsigned chars as an input and
 * returns its median, after sorting the array that was passed by it. 
 *
 * @param array The array to be analysed.
 *
 * @return The median of the array
 */

void sort_array(unsigned char[]);
/**
 * @brief Function to sort an array
 *
 * This function takes an array of 8-bit unsigned chars as an input and
 * sorts it. The function returns nothing, but will effectively change the
 * array that was passed by it. 
 *
 * @param array The array to be sorted.
 */


#endif /* __STATS_H__ */
