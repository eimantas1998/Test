    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    void quickSort(int A[ ], int left, int right);
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
        quicksort(A,0, size-1);
        //for(i=0;i<size;i++)

        //{
          //printf("%d\n",A[i]);
        //}

        clock_t toc = clock();
        printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);




        return 0;
    }

void quicksort(int *arr, int low, int high)

{

  int pivot, i, j, temp;

  if(low < high) {

    pivot = low; // select a pivot element

    i = low;

    j = high;

    while(i < j) {

      // increment i till you get a number greater than the pivot element

      while(arr[i] <= arr[pivot] && i <= high)

        i++;

      // decrement j till you get a number less than the pivot element

      while(arr[j] > arr[pivot] && j >= low)

        j--;

      // if i < j swap the elements in locations i and j

      if(i < j) {

        temp = arr[i];

        arr[i] = arr[j];

        arr[j] = temp;

      }

    }



    // when i >= j it means the j-th position is the correct position

    // of the pivot element, hence swap the pivot element with the

    // element in the j-th position

    temp = arr[j];

    arr[j] = arr[pivot];

    arr[pivot] = temp;

    // Repeat quicksort for the two sub-arrays, one to the left of j

    // and one to the right of j

    quicksort(arr, low, j-1);

    quicksort(arr, j+1, high);

  }

}
