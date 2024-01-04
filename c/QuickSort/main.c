#include <stdio.h>
#include "exc.h"
#include "QuiSor.h"

int main()
{
    int arr[10] = {5, 2, 6, 8, 4, 0, 5, 7, 10, 9};
    int LenArr = sizeof(arr) / sizeof(int);

    QuiSor(arr, 0, LenArr-1);

    for (int i = 0; i < LenArr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}