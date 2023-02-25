#include <stdio.h>

int main (){
    int a = 10;
    int *p = &a;

    //asterisk sign point out the value of  memory address
    printf("%d\n", *p);//10
    printf("%d\n", *p+1);//11

    //without asterisk sign it point out the value of memory address 
    printf("%d\n",p);//6422296

    /**
     * @brief 
     *  as int data type takes 4 bytes and 
     * that why increment 4 that indicates next memory for another variable
     * 
     */
    printf("%d\n",p+1);//6422300

    return 0;
} 