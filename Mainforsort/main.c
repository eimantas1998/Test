    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

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
            A[i]=rand()%100000;
        }
        for(i=0;i<size;i++)

        {
          printf("%d\n",A[i]);
        }

        clock_t tic = clock();
        clock_t toc = clock();
        printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);




        return 0;
    }

