/*Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.

If the input array is empty or null, return an empty array.*/

#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{
  // Please store the positives count in the memory, pointed to
  // by the positivesCount parameter.
  
  // Please store the negatives sum in the memory, pointed to
  // by the negativesSum parameter.
 
   int pos = 0;
   int neg = 0;
   
  for(size_t i = 0;i<count;i++){
    if(values[i]>0){
      pos++;
    }
    else {
      neg += values[i];
    }
  }
  
  *positivesCount = pos;
  *negativesSum = neg;
}  
