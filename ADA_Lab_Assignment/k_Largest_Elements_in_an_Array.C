/*****************************************************************************************************************
Write an efficient program for printing k largest elements in an array. Elements in the array can be in any order. 
It is given that all array elements are distinct.
******************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//C Function To Sort The Array Elements in Descending Order...[Using Bubble Sort.].!
void Bubble_Sort(int A[],int n)
{
	int temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]<A[j+1])
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main()
{
	int A[10000];
	int i,n;
	int k;
	printf("\nEnter The Size Of The Array : ");
	scanf("%d",&n);
	printf("\nEnter %d Elements : \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	Bubble_Sort(A,n)	;
	printf("\nEnter The K Value : ");
	scanf("%d",&k);
	if(k>n || k<=0)
	{
		printf("\nEnter The K Value Between 1 & %d\n",n);
		exit(0);
	}
	else
	{
		printf("\nThe %d Largest Elements in The Array is : \n",k);
		for(i=0;i<k;i++)
		{
			printf("\t%d",A[i]);
		}
		printf("\n");
	}
	return 0;
}
