    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    void selection_sort(int *array, int length);
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
        selection_sort(A,size);
        clock_t toc = clock();
        printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);




        return 0;
    }

    void selection_sort(int *A, int size)
    {
        if(size<=1)
            return;
        for(int i=0;i<size-1;i++)
        {
            int ismallest=i;
            for(int j=i+1; j<size; j++)
            {
                if(A[ismallest]>A[j])
                    ismallest=j;
            }
            int tmp = A[ismallest];
            A[ismallest]=A[i];
            A[i]=tmp;

        }
        printf("done");
    }
