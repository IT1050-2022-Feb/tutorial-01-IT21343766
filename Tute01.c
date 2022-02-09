/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  // Variable declaration and initialization
  float marks = 0 , avg = 0 ;

  //Getting the inputs
  for (int i = 0 ; i < 2 ; i++)
  {
    printf("Enter marks for subject %d : " , i+1) ;
    scanf("%f" , &marks ) ;
    avg += marks ;  //Getting the sum of marks
  }
  avg /= 2 ; // converting the sum to average

  // Display results and termination
  printf("\nThe average of the two marks : %.2f" , avg) ;
  return 0;
}

