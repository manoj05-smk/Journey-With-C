#include <stdio.h>
struct data
{
    char sh; //1 byte
    int n; //4 bytes
    char gh; //1 byte
    float f1; //4 bytes
};
typedef struct PaddingHandling //With Padding Handling (larger types first)
{
    int n; //4 bytes
    float f1; //4 bytes
    char gh; //1 byte
    char sh; //1 byte
}padding;
int main()
{
    struct data d1;
    padding p1;
    printf("Structure size with Padding %zu bytes.\n",sizeof(d1));
    printf("Structure size with Padding Handling (Grouping larger types first) %zu bytes",sizeof(p1));
    return 0;
}
