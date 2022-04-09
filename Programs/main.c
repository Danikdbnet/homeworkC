//Delete element in the middle of array
#include <stdio.h>
#define N 5
int main(int argc, const char * argv[]) {
    int arr[N];
    int delete = 3;
    int arr2[N - 1];
    for (int i = 0; i < N; i++) {
        arr[i] = i;
        printf("%d" , arr[i]);
    }

    printf("\n");

    for (int i = 0; i < delete - 1; i++)
       {
           arr2[i] = arr[i];
       }

       for (int i = delete - 1; i < N; i++)
       {
           arr2[i] = arr [i + 1];
       }


    for (int i = 0; i < N - 1; i++) {
        printf("%d" , arr2[i]);
    }
    printf("\n");
}




