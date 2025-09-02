#include <stdio.h>
int main () {
    int a,b,c;
    printf("enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        printf("%d is largest\n",a);
    }
    else{
        if(b>c){
            printf("%d is largest\n",b);
        }

        else{
            printf("%d is largest\n",c);
        }
    }

    return 0;

}