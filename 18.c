#include <stdio.h>
int main (){
    float s1,s2,s3,s4,s5,percentage;
    printf("enter marks of 5 subjects:");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

    percentage=((s1+s2+s3+s4+s5)/500)*100;

    if (percentage>=60){
        printf("grade A\n");

    }
    else{
        if(percentage>=50){
            printf("grade B \n");
        }
        else{
            if(percentage>=40){
                printf("grade C \n");
            }
            else {
                printf("fail \n");
            }
        }
    }

    return 0;

}