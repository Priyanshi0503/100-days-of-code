#include <stdio.h>
int main(){
    float a,b,c;
    printf("enter three sides of triangle:");
    scanf("%f %f %f",&a,&b,&c);

    if(a==b && b==c){
        printf("it is an equilateral triangle \n");
    }
    else{
        if(a==b||b==c||c==a){
            printf("it is an isoceless triangle \n");
        }
        else {
            printf("it is a scalene triangle");
        }
    }

    return 0;
}