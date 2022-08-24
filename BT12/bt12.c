#include<stdio.h>

void MangA (int A[],int n)
{
    printf("\nMang A :\n ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
    
}
void count(int A[], int n)
{
    int B[2][n];
    for( int i =0;i<n;i++)
    {
        B[0][i]=0;
        B[1][i]=1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if( A[i]== A[j])
            {
            B[0][i]=A[i];
            B[1][i] = B[1][i]+ 1 ;
            for (int k = j; k < n -2; k++)
            {
                A[k]=A[k+1];
            }
            n--;
            
            }

        }
    }
    printf("\naaaaaaaaaaaaaa\n");
     for (int i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\naaaaaaaaaaaaaa\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
    
    
}
int main()
{
    int A[]= {1,2,3,4,5,6,7,8,9,5,9,8,7,4,5,6,1,2,3,5,3,4,4,5};
    int n = sizeof(A)/sizeof(int);
    MangA(A,n);
    count(A,n);

}