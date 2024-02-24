//     #include<stdio.h>
// int main(){
     
    // int n;
    // printf("Enter the Number of Elements for the array : ");
    // scanf("%d", &n);

    // // int a = 0, arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int a = 0, arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the element number %d : ", i);
    //     scanf("%d", &arr[i]);
    // }
    // printf("Odd index elements : ");
    // for (int i = 1; i <= n; i+=2)   //twice of odd indexed elements 
    // {
    //     a = 2* arr[i];
    //     printf("%d ", a);
    // }
    // printf("\n");
    // printf("Odd index elements : ");
    // for (int i = 0; i <= n; i+=2)   // increament 10 in each even indexed element
    // {
    //     a = arr[i] + 10;
    //     printf("%d ", a);
    // }
    // printf("\n");
    // return 0;
    // }
    
#include<stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5 , 6, 7, 8};
    for (int i = 0; i < 8; i++){
        if (i%2!=0) arr[i]*=2;
        else arr[i]+=10;   
    }
    for (int i = 0; i < 8; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}