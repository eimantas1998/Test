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
        for(i=0;i<size;i++)

        {
          printf("%d\n",A[i]);
        }

        clock_t tic = clock();
        MergeSort(A,size);
        for(i=0;i<size;i++)

        {
          printf("%d\n",A[i]);
        }

        clock_t toc = clock();
        printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);




        return 0;
    }


// Function to Merge Arrays L and R into A.

// lefCount = number of elements in L

// rightCount = number of elements in R.

void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {

	int i,j,k;



	// i - to mark the index of left sub-array (L)

	// j - to mark the index of right sub-array (R)

	// k - to mark the index of merged sub-array (A)

	i = 0; j = 0; k =0;



	while(i<leftCount && j< rightCount) {

		if(L[i]  < R[j]) A[k++] = L[i++];

		else A[k++] = R[j++];

	}

	while(i < leftCount) A[k++] = L[i++];

	while(j < rightCount) A[k++] = R[j++];

}



// Recursive function to sort an array of integers.

void MergeSort(int *A,int n) {

	int mid,i, *L, *R;

	if(n < 2) return; // base condition. If the array has less than two element, do nothing.

    mid = n/2;  // find the mid index.



	// create left and right subarrays

	// mid elements (from index 0 till mid-1) should be part of left sub-array

	// and (n-mid) elements (from mid to n-1) will be part of right sub-array

	L = (int*)malloc(mid*sizeof(int));

	R = (int*)malloc((n- mid)*sizeof(int));



	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left sub-array

	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right sub-array



	MergeSort(L,mid);  // sorting the left sub-array

	MergeSort(R,n-mid);  // sorting the right sub-array

	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.

        free(L);

        free(R);

}
