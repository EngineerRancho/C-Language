#include<stdio.h>
void funA(int a[]){
    int temp = a[0];
    a[0] = a[1];
    a[1]= temp;
    return;
}
int main(){
    int arr[2]= {2, 8};
    printf("%d %d\n", arr[0], arr[1]);
    funA(arr);
    printf("%d %d\n", arr[0], arr[1]);
    return 0;
}