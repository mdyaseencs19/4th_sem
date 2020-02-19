/*******************************************************************************************************************
Sort a given set of N integer elements using Selection Sort technique and compute its time taken. Run the program for different values of N and record the time taken to sort.
*******************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*C Function To Sort The Given Array Using Selection Sort.*/
void Selection_Sort(int A[],int n)
{
	int i,j;
	int min,temp;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(A[min]>A[j])
			min = j;
		}
		temp = A[min];
		A[min] = A[i];
		A[i] = temp;
	}
}

int main()
{
	int A[1000000];
	int i,n;
	clock_t start,end;
	double time_required;
	printf("\nEnter The Size Of The Array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		A[i] = rand() % 100000+1;
	}
	start = clock();
		Selection_Sort(A,n);
	end = clock();	
	time_required = ((double)(end-start))/CLOCKS_PER_SEC;
	/*
	printf("\nSorted Array Using Selction Sort is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	*/
	printf("\nTime Required To Sort %d Elements is : %f\n",n,time_required);
	return 0;
}
