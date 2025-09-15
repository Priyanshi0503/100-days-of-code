/**
Write a program to print the following pattern:

*
*
*

*
*
*
*
*

*
*
*

**/

#include <stdio.h>
int main (){
    for(int i=1;i<=13;i++){
       if(i==4 || i==10)
       printf(" \n");
       
       else 
       printf("\n*");
    }
}