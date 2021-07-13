/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1, mark2, avg=0.0;

  printf("Enter your marks : ");
  scanf("%f %f", &mark1, &mark2 );

  avg = (mark1 + mark2)/2.0;

  printf("%.2f", avg);
  return 0;
}

