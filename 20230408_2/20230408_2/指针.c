#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p1, * p2, * p3;
    p1 = (int*)malloc(sizeof(int));
    p2 = (int*)malloc(sizeof(int));
    p3 = (int*)malloc(sizeof(int));
    *p1 = 1;
    *p2 = 2;
    *p3 = 3;
    printf("%d %d %d\n", *p1, *p2, *p3);
    free(p1);
    free(p2);
    free(p3);
    return 0;
}