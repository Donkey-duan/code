#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int **create_2d_arr(int n, int m) {
    // create 2d array using malloc than return it.
    int **ptr = malloc(n*sizeof(int *));
    for(int i = 0;i<n;i++)
    {
        *ptr[i] = malloc(m*sizeof(int));
    }
    return ptr;
}
int main() {
    
}