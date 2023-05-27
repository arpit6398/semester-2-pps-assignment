#include<stdio.h>

int main(){
    long long n;
    int count = 0;
    printf("enter an integer:");
    scanf("%11d" ,&n);


    do{
        n /= 10;
        ++ count;

    } while (n != 0);
    printf("number of digits: %d", count);
    return 0;

}