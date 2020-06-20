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
#ifndef __STATS_H__
#define __STATS_H__

/******************************************************************************
 * Function: print_statistics
 * Description:
 *     This function prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *     @param double minimum: The calculated minimum.
 *     @param double maximum: The calculated minimum.
 *     @param double maean: The calculated mean.
 *     @param double median: The calculated median
 *  
 *****************************************************************************/
void print_statistics(double minimum, double maximum, double mean, double median);
/******************************************************************************
 * Function: print_array
 * Description:
 *     This function prints an array of data and a length
 *
 *     @param unsigned char array[]: Pointer to a data set in array
 *     @param int arraySize: Number of items in the array
 *****************************************************************************/
void print_array(unsigned char array[], int arraySize);
/******************************************************************************
 * Function: find_median
 * Description:
 *     Given an array of data and a length, the function returns the median value
 * 
 *     @param unsigned char array[]: Pointer to a data set in array
 *     @param int arraySize: Number of items in the array
 * 
 *     @return Returns the median of the array
 *****************************************************************************/
double find_median(unsigned char array[], int arraySize) ;
/******************************************************************************
 * Function: find_mean
 * Description:
 *     Given an array of data and a length, the function returns the mean
 * 	   
 *	   @param unsigned char array[]: Pointer to a data set in array
 *     @param int arraySize: Number of items in the array
 * 
 *     @return Returns the mean of the array
 *****************************************************************************/
double find_mean(unsigned char array[], int arraySize);
/******************************************************************************
 * Function: find_maximum
 * Description:
 *     Given an array of data and a length, the function returns the maximum
 * 	   
 *	   @param unsigned char array[]: Pointer to a data set in array
 *     @param int arraySize: Number of items in the array
 * 
 *     @return Returns the maximum of the array
 *****************************************************************************/
double find_maximum(unsigned char array[], int arraySize);
/******************************************************************************
 * Function: find_minimum
 * Description:
 *     Given an array of data and a length, the function returns the minimum
 * 	   
 *	   @param unsigned char array[]: Pointer to a data set in array
 *     @param int arraySize: Number of items in the array
 * 
 *     @return Returns the minimum of the array
 *****************************************************************************/
double find_minimum(unsigned char array[], int arraySize);
/******************************************************************************
 * Function: sort_array
 * Description:
 *     Given an array of data and a length, sorts the array from largest to smallest.
 *	   Print the sorted array by calling print_array function.
 *	   Calculates median from sorted array using find-median function.
 * 	   
 *	   @param unsigned char array[]: Pointer to a data set in array
 *     @param int arraySize: Number of items in the array
 * 
 *     @return Returns the median
 *****************************************************************************/
double sort_array(unsigned char array[], int arraySize);


#endif /* __STATS_H__ */

