/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
void bubbleSort(int *arr,int size)
    {
        for (int i = 0; i < size - 1;i++)
        {
            for (int j = (size - 1); j > i;j--)
            {
                if (arr[j - 1] > arr[j])
                {
                    int temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
int main()
{
    int N;
    int i;
    int j;
    int range;
    printf("Enter size of array: ");
    scanf("%d",&N);
    printf("Enter range of random: ");
    scanf("%d",&range);
    int *a = malloc(N * sizeof(int));
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % range;
    }
    bubbleSort(a,N);
        for (i = 0; i < N; i++)
    {
        printf("%15d",a[i]);
    }
    return 0;
}
