#include<stdio.h>
void swap (int* , int*);
void swap (int *x, int *y)
{
    int temp =0;
    temp = *x;
    *x=*y;
    *y=temp;
}
void MangA (int A[],int a)
{
    printf("Mang A: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n ");
}
void printA(int A[],int a)
{
    printf("\nMang a sau khi xep :");
    for (int i = 0; i < a; i++)
    {
        printf(" %d ",A[i]);
    }
    printf("\n");
}
void sapXepTang( int A[], int a)
{
    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j < a ; j++)
        {
            if(A[i]>A[j])
            {
                swap(&A[i],&A[j]);
            }
        }
        
    }
    printA(A,a);
}
void sapXepGiam( int A[], int a)
{
    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j < a ; j++)
        {
            if(A[i]<A[j])
            {
                swap(&A[i],&A[j]);
            }
        }
        
    }
    printA(A,a);
}
int main()
{
    int A[]= {1,5,3,4,9,6,7,8,2,0,58,48,64,85};
    int a = sizeof(A)/sizeof(int);
    MangA(A,a);
    sapXepTang(A,a);
    sapXepGiam(A,a);
    return 0 ;
}