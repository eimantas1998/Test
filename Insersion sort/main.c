    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    void insersion_sort(int *array,int size);
    int main()
    {
        int *A;
        int size;
        int i;
        double time_spent;
        printf("\nEnter the size of the array: ");
        scanf("%d",&size);
        A=(int*)malloc(size * sizeof(int));
        for (i=0;i<size;i++)
        {
            A[i]=rand()%100;
        }

        clock_t tic = clock();
        inserrtsion_sort(A, size);
        clock_t toc = clock();
        printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);




        return 0;
    }

    void inserrtsion_sort(int*A,int size)
    {
        int i, j, tmp;
        for(i=i; i<size; i++)
        {
            j=i;
            while(j>0 && (A[j-1]>A[j]))
                  {
                      tmp=A[j];
                      A[j]=A[j-1];
                      A[j-1]=tmp;
                      j--;
                  }
        }
        printf("Done\n");
    }

