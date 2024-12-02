#include<stdio.h>

int f_test(){
   return -100; 
}



int main()
{
    int info = f_test();
    printf("hello conflict %d ...\n", info);
    return(0);
}