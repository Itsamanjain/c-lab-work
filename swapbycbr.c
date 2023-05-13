#include<stdio.h>
void swap(int *x ,int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    a=74;
    b=36;
    printf("the value of a and b is %d and %d\n",a,b);
    swap(&a,&b);
    printf("the value of a and b after sawaping is %d and %d\n",a,b);
    return 0;
    
}