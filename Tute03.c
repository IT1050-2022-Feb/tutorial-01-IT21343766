/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  //Variable declaration and initialization
  int n = 0 , sum = 0 ;

  //Getting input
  printf("n -> ") ;
  scanf("%d" , &n) ;

  //Calculation
  for (int i = 1 ; i <= n ; i++)
    sum += i ;
  
  //Display result and termination of the program
  printf("sum = %d" , sum) ;
  return 0 ;
}

