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
 * @brief <C programming file >
 *
 * <couple of functions to analyze given character array to give analytics like maximum, minimum, mean and median.
 *  Also sorted data from larger to smaller >
 *
 * @author <Krishna Chaitanya Tirumalaraju>
 * @date <2018/09/16 >
 *
 */



#include <stdio.h>
#include "stats.h"

#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test,SIZE);
  print_statistics(test,SIZE);
}


void print_statistics(unsigned char*ptr, unsigned int size){

	int i;
    unsigned char test1[size];
    for(i=0;i<size;i++)
    {
        test1[i]=ptr[i];
    }

    int min,max,mean,median;

    sort_array(test1, size);
    min=find_minimum(test1,size);
    max=find_maximum(test1,size);
    mean=find_mean(test1,size);
    median = find_median(test1,size);

    printf("\n");
    printf("sorted Array is: ");
    for(int i=SIZE-1;i>=0;i--)
    {
        printf("%d ",test1[i]);
    }

    printf("\nMinimum is: %d",min);
    printf("\nMaximum is: %d",max);
    printf("\nMean is: %d",mean);
    printf("\nMedian is: %d",median);

}



void print_array(unsigned char *ptr, unsigned int size){

	int i;
    printf("Given Array: ");

    for(int i=0;i<size;i++)
    {
        printf("%d ",ptr[i]);
    }
}

unsigned char find_minimum(unsigned char *ptr, unsigned int size) {

	int i=0;
    int min;
    if(i==0)
    		{
        		min=*ptr;
		}
    while(i<size)
    		{
			if(*ptr<min)
       			 {
           			 min=*ptr;
        			}

        		i++;
       		ptr++;
		}
    return min;

}


unsigned char find_maximum(unsigned char *ptr, unsigned int size){

	int i=0;
    int max;
    if(i==0)
    		{
        		max=*ptr;
		}
    while(i<size)
    		{
			 if(*ptr>max)
        			{
           			 max=*ptr;
       			 }

       		 i++;
        		ptr++;
		}
   	 return max;
}

unsigned char find_mean(unsigned char *ptr, unsigned int size){

	int i=0;
    int mean=0;

    if(ptr== NULL)
    {
        return 0;
    }

    if(size<=0)
    {
        size=1;
    }

    for(i=0;i<size;i++)
    {
        mean +=*ptr;
        ptr++;
    }

    return (mean/size);

}

void sort_array(unsigned char *ptr, unsigned int size){

	int i,j;
    unsigned char temp;
    for( i=1; i<size; i++ )
    {
        for( j=0; j<size-i; j++ )
        {
            if(*(ptr+j)>=*(ptr+j+1))
            {
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
        }

    }


}

unsigned char find_median(unsigned char *ptr, unsigned int size){

  int med;
  if(size%2==0)
  {
      med = (ptr[size/2]+ptr[(size/2)-1])/2;
  }
  else
  {
      med = ptr[size/2];
  }


  return med;

}





