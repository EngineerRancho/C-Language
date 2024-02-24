#include<stdio.h>
int main(){
    int arr[5] = {1,2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += i;
    }
    int avg= sum/5;
    printf("Sum = %d \nAvg = %d\n", sum, avg);    
    return 0;

}