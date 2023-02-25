#include<stdio.h>

void increment(int *p){
    printf("%d\n",p); //6422300
    *p=*p+1;//a=11
}

int main (){

    int a =10;//a=10
    printf("%d\n",a);
    printf("%d\n",&a);//6422300
    increment(&a);
    printf("%d\n",a);
    return 0;
}


