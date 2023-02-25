#include<stdio.h>
int main(){

    int a[5]={10,20,30,40,50};


    /***
     * elements at index i ;
     * address -&a[i] or (a+i)
     * value a[i] or *(a+i)
    */
    printf("%d\n",(a)); // 6422284
    printf("%d\n",(a+1)); //6422288

    printf("%d\n",*a);//10
    printf("%d\n",*(a+1));//20
     
    return 0;
}