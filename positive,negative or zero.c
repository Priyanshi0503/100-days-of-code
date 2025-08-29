#include <stdio.h>
int main (){
    int number;
    printf("enter a number");
    scanf("%d",&number);

    if(number>=0){
        if (number==0){
            printf("the number is zero \n");

        } else {
            printf("the number is positive \n");
    }
     
    

    } 
    else{
        printf("the number is negative");
    }
    return 0;



}