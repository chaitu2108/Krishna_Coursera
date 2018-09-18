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
 * @file <ststs.h>
 * @brief <C programming file >
 *
 * <Header file with function declerations and description of input and output parameters>
 *
 * @author <Krishna Chaitanya Tirumalaraju>
 * @date <2018/09/15 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* print_statistics() Declarations and Function Comments here */
void print_statistics(unsigned char *ptr,unsigned int size);
/**
 * @brief <Prints the statistics of the Given array>
 *
 * <This function prints all the statistics analyzed like Maximum, Minimum, mMean and Median
 * of the given unsigned char array.>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Prints all the Statistics of the Data set>
 */

void print_array(unsigned char *ptr, unsigned int size);
/* print_Array() Declarations and Function Comments here */

/**
 * @brief <Prints the Given unsorted array>
 *
 * <This function prints the unsorted array.>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Prints the Data set>
 */

unsigned char find_minimum(unsigned char *ptr, unsigned int size);
/* find_minimum() Declarations and Function Comments here */

/**
 * @brief <Finds minimum in the given data set>
 *
 * <This function finds the minimum number in the given data set.>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the minimum char element in the given data set>
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int size);
/* find_maximum Declarations and Function Comments here */

/**
 * @brief <Finds maximum in the given data set>
 *
 * <This function finds the minimum number in the given data set>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the minimum char element in the given data set>
 */
unsigned char find_mean(unsigned char *ptr, unsigned int size);
/* find_mean Declarations and Function Comments here */

/**
 * @brief <Finds mean of the given data set>
 *
 * <This function finds the mean of the given data set>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the mean of the given data set>
 */
unsigned char find_median(unsigned char *ptr, unsigned int size);
/* find_median Declarations and Function Comments here */

/**
 * @brief <Finds median of the given data set>
 *
 * <This function finds the median of the given data set>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the median of the given data set>
 */

void sort_array(unsigned char *ptr, unsigned int size);
/* sort_array Declarations and Function Comments here */

/**
 * @brief <Sorts the given data set from larger to smaller>
 *
 * <This function sorts the given data set from larger element first to smller element>
 *
 * @param <unsigned char *ptr>  Pointer to a data set
 * @param <unsigned int size>   Size of the data set

 *
 * @return <Returns the data set which is sorted>
 */

#endif /* __STATS_H__ */
