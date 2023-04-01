#include <stdio.h>
int main()
{
    // int n;
    // printf("enter the value of n: ");
    // scanf("%d", &n);

    // i++ is fo add one & i+=2 is for other like for plus 2,3,4 etc
    // when i+=2 is there then output will be 1,3,5..
    // i++ (post increment)is first use i and then increase its value
    // where as ++i(pre increament operator) is  increase and then use
    // same for --i & i--

    // *--for loops --*
    // for (int i=1;i<10;i+=2){
    //     printf("hello world %d\n",i);
    // }

    // --while loop--
    // int i =0;
    // while(i<=n){
    //     printf("hw\n");
    //     i++;
    // }

    //-- do while loops
    // int i=0;
    // do{
    //     printf("hello world\n");
    //     i++;
    // }while(i<=5);


    //--> Q1 sum of n natural no. n given by user 

        int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    int sum =0;
    for (int i = 0; i<=n; i++){
        sum = sum + i;
    }
    printf(" the sum is %d " , sum);



        return 0;
}