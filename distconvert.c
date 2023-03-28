#include <stdio.h>

int main() {
  float distance_kms, distance_meters, distance_feet, distance_inches, distance_cms;
  
  printf("Enter the distance between two cities (in km): ");
  scanf("%f", &distance_kms);

  distance_meters = distance_kms * 1000;
  distance_feet = distance_kms * 3280.84;
  distance_inches = distance_feet * 12;
  distance_cms = distance_kms * 100000;

  printf("The distance between two cities is:\n");
  printf("%.2f km = %.2f meters\n", distance_kms, distance_meters);
  printf("%.2f km = %.2f feet\n", distance_kms, distance_feet);
  printf("%.2f km = %.2f inches\n", distance_kms, distance_inches);
  printf("%.2f km = %.2f centimeters\n", distance_kms, distance_cms);
  
  return 0;
}