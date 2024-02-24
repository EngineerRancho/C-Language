#include<stdio.h>
#include<string.h>
int main(){
    char str1[50] = "Hello ";
    char str2[] = "World!";
    char str3[] = " What's Up.";
    char str4[] = " Doing Well ?";
    strcat(str1, str2);         //strcat funcion to concatenate strings.
    strcat(str1, str3);         //strcat funcion to concatenate strings.
    strcat(str1, str4);         //strcat funcion to concatenate strings.
    printf("Concatenated String = %s\n", str1);
    return 0;
}