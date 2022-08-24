for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if( A[i]== A[j])
            {
            B[0][i]=A[i];
            B[1][i] = B[1][i]+ 1 ;
            }
        }
    }