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
            A[i]=rand()%100;
        }
        //for(i=0;i<size;i++)

        //{
          //printf("%d\n",A[i]);
        //}


        clock_t tic = clock();
        Shellsort(A,size);
        clock_t toc = clock();
        printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);




        return 0;
    }

    void Shellsort(int A[],int size)
    {
        int gap,i,j,temp;

        for(gap=size/2;gap>0;gap/=2)
            for(i=gap;i<size;i++)
                for(j=i-gap;j>=0&&A[j]>A[j+gap];j-=gap)
        {
            temp=A[j];
            A[j]=A[j+gap];
            A[j+gap]=temp;
        }

    //for(i=0;i<size;i++)

        //{
          //printf("%d\n",A[i]);
        //}

        printf("\ndone\n");
    }
