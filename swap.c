#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After interchanging:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}