/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int no1,no2,total;
  float ave;

  printf("Enter the number 1 : ");
  scanf("%d",&no1);
  printf("Enter the number 2 : ");
  scanf("%d",&no2);

  total=no1+no2;
  ave=total/2;

  printf("Average is %.2f",ave);

  
  return 0;
}

