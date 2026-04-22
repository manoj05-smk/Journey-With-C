#include <stdio.h>
int main()
{
    //Understanding about Memory Address Sequence
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Base address of array (arr)        : %p\n", (void*)arr);
    printf("Address of first element (&arr[0]) : %p\n", (void*)&arr[0]);

    printf("\n--- Pointer Arithmetic ---\n");
    printf("arr + 1 (next element)             : %p\n", (void*)(arr + 1));
    printf("&arr[1]                            : %p\n", (void*)&arr[1]);
    
    printf("\n--- Values ---\n");
    printf("Value at arr[0]                    : %d\n", arr[0]);
    printf("Value at *(arr + 1)                : %d\n", *(arr + 1));
    return 0;
}