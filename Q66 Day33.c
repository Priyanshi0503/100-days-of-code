//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, x;
    int arr[100];  


    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d", &x);

    int pos = n; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            pos = i;
            break;
        }
    }

    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos] = x;
    n++;


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}