#include <stdio.h>

int main() {
  float num1, num2, num3, num4, num5, sum, average;
  
  printf("Enter five numbers: ");
  scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

  sum = num1 + num2 + num3 + num4 + num5;
  average = sum / 5;

  printf("Sum = %.2f\n", sum);
  printf("Average = %.2f\n", average);
  
  return 0;
}