#include<stdio.h>
void MangA (int A[], int n);
void swap (int *x, int *y)
{
    int temp =0;
    temp = *x;
    *x=*y;
    *y=temp;
}
void sapXep( int A[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if(A[i]>A[j])
            {
                swap(&A[i],&A[j]);
            }
        }    
    }
}
void count (int A[], int n)
{
    int max =0, dem=1;
    int giatri=0;
    sapXep(A,n);
    for (int i = 0; i < n; i++)
    {
        if( A[i]== A[i+1])
        {
            dem++;
            if(dem > max)
            {
                max = dem;
                giatri=A[i];
            }
        }
        else 
        {
            dem =1;
        }
    }
    n--;
    printf("gia tri xuat hien nhieu: %d", giatri);
    printf("\nso lan xuat hien: %d", max);
    
}
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9,5,9,8,7,6,5,4,3,2,1,5,1,5,7,5,9,5,6,5,3,5};
    int n = sizeof(A)/sizeof(int);
    MangA(A, n);
    count(A,n);
}
void MangA (int A[],int n)
{
    printf("\nMang A :\n ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
    
}