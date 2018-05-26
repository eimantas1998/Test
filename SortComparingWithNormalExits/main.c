#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
        int *A;
        int size;
        int i;
        int numbers;
        double time_spent;
        int choice;
        int done;

        printf("\nEnter the size of the array: ");
        scanf("%d",&size);
        A=(int*)malloc(size * sizeof(int));
        printf("\nEnter the size of numbers: ");
        scanf("%d",&numbers);
        for (i=0;i<size;i++)
        {
            A[i]=rand()%(numbers)+1;
        }
        printf("The numbers are: ");
        for(i=0;i<size;i++)

        {
          printf("%d ",A[i]);
        }
    printf("\n---------------------------------\n");
    printf("To Test BubbleSort press 1\n");
    printf("To Test InsertionSort press 2\n");
    printf("To Test SelectionSort press 3\n");
    printf("To Test ShellSort  press 4\n");
    scanf("%d", &choice);
    while (choice != 0){
        switch(choice){
            case 1:{
                    printf("\nYou are testing BubbleSort\n");
                    clock_t toc = clock();
                    bubbleSort(A,size);
                    clock_t tic = clock();
                    printf("Sorted array; \n");
                    printArray(A, size);
                    printf("\n Elapsed: %f seconds\n", (double)(tic-toc) / CLOCKS_PER_SEC);
                    printf("\n---------------------------------\n");
                    printf("Do you want to exit? 1-Yes,2-No\n");
                    scanf("%d",&done);
                    if(done==1)
                    {
                        exit(0);
                    }
                    printf("\nEnter the size of the array: ");
                    scanf("%d",&size);
                    A=(int*)malloc(size * sizeof(int));
                    printf("\nEnter the size of numbers: ");
                    scanf("%d",&numbers);
                    for (i=0;i<size;i++)
                    {
                        A[i]=rand()%(numbers)+1;
                    }
                    printf("The numbers are: ");
                    for(i=0;i<size;i++)

                    {
                        printf("%d ",A[i]);
                    }
                    printf("\n---------------------------------\n");
                    printf("\nTo Test BubbleSort press 1\n");
                    printf("To Test InsertionSort press 2\n");
                    printf("To Test SelectionSort press 3\n");
                    printf("To Test ShellSort  press 4\n");
                    scanf("%d", &choice);
                    break;
            }
            case 2:{
                    printf("\nYou are testing InsertionSort\n");
                    clock_t tic = clock();
                    inserrtsion_sort(A, size);
                    clock_t toc = clock();
                    printf("Sorted array; \n");
                    printArray(A, size);
                    printf("\nElapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
                    printf("\n---------------------------------\n");
                     printf("Do you want to exit? 1-Yes,2-No\n");
                    scanf("%d",&done);
                    if(done==1)
                    {
                        exit(0);
                    }
                    printf("\nEnter the size of the array: ");
                    scanf("%d",&size);
                    A=(int*)malloc(size * sizeof(int));
                    printf("\nEnter the size of numbers: ");
                    scanf("%d",&numbers);
                    for (i=0;i<size;i++)
                    {
                        A[i]=rand()%(numbers)+1;
                    }
                    printf("The numbers are: ");
                    for(i=0;i<size;i++)

                    {
                        printf("%d ",A[i]);
                    }
                    printf("\n---------------------------------\n");
                    printf("\nTo Test BubbleSort press 1\n");
                    printf("To Test InsertionSort press 2\n");
                    printf("To Test SelectionSort press 3\n");
                    printf("To Test ShellSort  press 4\n");
                    scanf("%d", &choice);
                    break;
            }
            case 3:{
                    printf("\nYou are testing SelectionSort\n");
                    clock_t tic = clock();
                    selection_sort(A,size);
                    clock_t toc = clock();
                    printf("Sorted array; \n");
                    printArray(A, size);
                    printf("\nElapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
                    printf("\n---------------------------------\n");
                     printf("Do you want to exit? 1-Yes,2-No\n");
                    scanf("%d",&done);
                    if(done==1)
                    {
                        exit(0);
                    }
                    printf("\nEnter the size of the array: ");
                    scanf("%d",&size);
                    A=(int*)malloc(size * sizeof(int));
                    printf("\nEnter the size of numbers: ");
                    scanf("%d",&numbers);
                    for (i=0;i<size;i++)
                    {
                        A[i]=rand()%(numbers)+1;
                    }
                    printf("The numbers are: ");
                    for(i=0;i<size;i++)

                    {
                        printf("%d ",A[i]);
                    }
                    printf("\n---------------------------------\n");
                    printf("\nTo Test BubbleSort press 1\n");
                    printf("To Test InsertionSort press 2\n");
                    printf("To Test SelectionSort press 3\n");
                    printf("To Test ShellSort  press 4\n");
                    scanf("%d", &choice);
                    break;
            }
            case 4:{
                    printf("\nYou are testing ShellSort\n");
                    clock_t tic = clock();
                    Shellsort(A,size);
                    clock_t toc = clock();
                    printf("Sorted array; \n");
                    printArray(A, size);
                    printf("\nElapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
                    printf("\n---------------------------------\n");
                     printf("Do you want to exit? 1-Yes,2-No\n");
                    scanf("%d",&done);
                    if(done==1)
                    {
                        exit(0);
                    }
                    printf("\nEnter the size of the array: ");
                    scanf("%d",&size);
                    A=(int*)malloc(size * sizeof(int));
                    printf("\nEnter the size of numbers: ");
                    scanf("%d",&numbers);
                    for (i=0;i<size;i++)
                    {
                        A[i]=rand()%(numbers)+1;
                    }
                    printf("The numbers are: ");
                    for(i=0;i<size;i++)

                    {
                        printf("%d ",A[i]);
                    }
                    printf("\n---------------------------------\n");
                    printf("\nTo Test BubbleSort press 1\n");
                    printf("To Test InsertionSort press 2\n");
                    printf("To Test SelectionSort press 3\n");
                    printf("To Test ShellSort  press 4\n");
                    scanf("%d", &choice);
                    break;
            }

            default:
                break;
        }
    }
    return 0;
}


void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
              printf("\ndone\n");
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
        printf("\ndone\n");
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
        printf("\ndone\n");
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

        printf("\ndone\n");
    }

