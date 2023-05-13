#include<stdio.h>

float aoc(float r){
    float PI;
    PI=3.14;
    return (PI*r*r);

}
int main (){
    float r,aofc;
    printf("enter the vlaue of r :\n");
    scanf("%f",&r);
    aofc=aoc(r);
    printf("the area of cirlce if %f",aofc);
    return 0;
}