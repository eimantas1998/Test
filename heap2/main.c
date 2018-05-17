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
            A[i]=rand()%10000;
        }

        clock_t tic = clock();
        heap_sort(A, size);
        clock_t toc = clock();
        printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);




        return 0;
    }

    void heap(int *a, int n){
	int i, temp;
	for (i=n/2; i>=0; i--){
		if (a[(2*i)+1]<a[(2*i)+2]&&(2*i+1)<=n&&(2*i+2)<=n){
			temp=a[(2*i)+1];
			a[(2*i)+1]=a[(2*i)+2];
			a[(2*i)+2]=temp;
		}
		if (a[(2*i)+1]>a[i]&&(2*i+1)<=n&&i<=n){
			temp=a[(2*i)+1];
			a[(2*i)+1]=a[i];
			a[i]=temp;
		}

	}
}

void heap_sort(int array[], int n){
	int i, temp;
	heap(array, n);
	for (i=n-1; i>0; i--){
		temp=array[i];
		array[i]=array[0];
		array[0]=temp;
		heap(array, i-1);
	}
}
