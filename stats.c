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
 * @file chakraborty_coursera 
 * @brief Statistical analysis on a given dataset.
 *
 * A simple program to find max, min, mean and median of an array
 * of data along with generating a sorted array of dataset.
 *
 * @author Shouvik Chakraborty
 * @date 2020-06-18
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
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
    
  /* Statistics and Printing Functions Go Here */
  double mean = find_mean(test,SIZE);
  double median = sort_array(test, SIZE); /* The find_median is called inside sort_array*/
  double maximum = find_maximum(test, SIZE);
  double minimum = find_minimum(test, SIZE);
  
  sort_array(test,SIZE);
  
  
  
  print_statistics(minimum,maximum,mean,median);
  
  
}

/******************************************************************************
 * Function: print_statistics
 *****************************************************************************/
void print_statistics(double minimum, double maximum, double mean, double median){
	
	printf("The mean value is %f \n", mean);
	printf("The median value is %f \n", median);
	printf("The maximum value is %f \n", maximum);
	printf("The minimum value is %f \n", minimum);
	
}
/******************************************************************************
 * Function: print_array
 *****************************************************************************/
void print_array(unsigned char array[], int arraySize){
   int i;
   double ar;
    for (i = 0; i < arraySize; ++i) 
        {
            ar = array[i];
            printf("The array element no %d is %f \n", i, ar);
            
        }	
}
/******************************************************************************
 * Function: find_median
 *****************************************************************************/
double find_median(unsigned char array[], int arraySize){
	double median;
	int center;
	center = (arraySize+1)/2;
	median = array[center];
	
	return median;
	
}
/******************************************************************************
 * Function: find_mean
 *****************************************************************************/
double find_mean(unsigned char array[], int arraySize){
	int i;
	double sum, avg;
	for (i = 0; i < arraySize; i++){
		sum += array[i];
	}
	avg = sum/arraySize;
	return(avg);
}
/******************************************************************************
 * Function: find_maximum
 *****************************************************************************/
double find_maximum(unsigned char array[], int arraySize){
    int i;
    double max;
    
    max = array[0];
    
    for (i = 0; i < arraySize; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
	return max;
}
/******************************************************************************
 * Function: find_minimum
 *****************************************************************************/
double find_minimum(unsigned char array[], int arraySize){
	int i;
    double min;
    
    min = array[0];
    
    for (i = 0; i < arraySize; i++){
        if (array[i] < min){
            min = array[i];
        }
    }
	return min;
}
/******************************************************************************
 * Function: sort_array
 *****************************************************************************/
double sort_array(unsigned char array[], int arraySize){
	int i,j;
	double median, a;
	
    for (i=0; i<arraySize; i++){
        for (j=i+1; j<arraySize; j++){
            if (array[i]<array[j]){
                a = array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }
    print_array(array, arraySize);
    median = find_median(array, arraySize);
    return median;

}


