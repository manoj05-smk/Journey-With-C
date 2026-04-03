#include <stdio.h>
struct data
{
    int n;
    float lk;
    char s;
};
union new
{
    int m;
    float kl;
    char t;
};
int main()
{
    //Memory usage
    struct data d1;
    union new n1;
    printf("Structure Have %zu Memory Size.\n",sizeof(d1)); //Separate Memory for Each Member
    printf("Union Have %zu Memory Size.\n",sizeof(n1));  //Shared Memory across all Members
    return 0;
}