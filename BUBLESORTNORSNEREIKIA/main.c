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


        clock_t toc = clock();
        bubbleSort(A,size);
        printf("Sorted array; \n");
        printArray(A, size);
        clock_t tic = clock();
        printf("\n Elapsed: %f seconds\n", (double)(tic-toc) / CLOCKS_PER_SEC);




        return 0;
    }

  void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}
