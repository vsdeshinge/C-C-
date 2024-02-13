#include <stdio.h>
#include <stdlib.h>

int compare(
    const void *a, const void *b ){
        if (*(int *)a < *(int *)b)
            return -1;
        if (*(int *)a == *(int *)b)
            return 0;

            //de referincing the data
        if (*(int *)a > * (int *)b)
            return 1;
    }

    int main()
{
    int data[] = {1, 2, 3, 2, 5};
    int k = 3;
    if (bsearch(&k, data, 5, sizeof(int), compare))
        printf("found!\n");
    else
        printf("not found\n");
}