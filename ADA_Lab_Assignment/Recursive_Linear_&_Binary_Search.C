/*****************************************************************************************************************************
Write a Program to Implement Recursive Binary search and Linear search and determine the time required to search an element. 
Repeat the experiment for different values of N  and plot a graph of the time taken versus N.
*****************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//C Function For Recursive Linear Search..!!
int Linear_Search(int A[],int l,int r,int key)
{
	if (r < l) 
		return -1; 
	if (A[l] == key) 
		return l; 
	if (A[r] == key) 
		return r; 
	return Linear_Search(A, l+1, r-1, key); 	
}

//C Function For Binary Search..!!
int Bin_Search(int A[],int l,int r,int key)
{
	if (r >= l) 
    { 
        int mid = l + (r - l)/2; 
        if (A[mid] == key)  return mid; 
        if (A[mid] > key) return Bin_Search(A, l, mid-1, key); 
        return Bin_Search(A, mid+1, r, key); 
    } 
    return -1; 
}

int main()
{
	int A[1000000],k;
	int n,i;
	int choice;
	clock_t start,end;
	double time_required;
	printf("\nThe Choices Are : \n1.Linear Search.\n2.Binary Search.\nEnter Your Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : 	printf("\nEnter The Size Of Array : ");
					scanf("%d",&n);
					printf("\nEnter %d Elements : ",n);
					for(i=0;i<n;i++)
				    	{
  		  			    A[i] = rand() % 100000+1;
  	  				}
  	  				printf("\nRandomly Generate Array is : \n");
					for(i=0;i<n;i++)
					{
					    printf("%d\n",A[i]);
					}
    					printf("\nEnter The Key To Be Searched : ");
					scanf("%d",&k);
					start = clock();
                    			int flag = Linear_Search(A,0,n-1,k);
                    			end = clock();
                    			time_required  = ((double)(end - start))/CLOCKS_PER_SEC;
					if(flag != -1)
                    			{
                        			printf("\nElement %d Found At A[%d] Index...!",k,flag);
                        			printf("\nTime Required to Search %d Element is %f.\n",k,time_required);
					}
					else
					{
					printf("\nElement %d Not Found..!",k);
					}
					break;
				
		case 2 :	printf("\nEnter The Size Of Array : ");
		    		scanf("%d",&n);
				printf("\nEnter %d Elements : ",n);
				for(i=0;i<n;i++)
				{
					A[i] = rand() % 100000+1;
				}
				printf("\nRandomly Generate Array is : \n");
				for(i=0;i<n;i++)
				{
				    printf("%d\n",A[i]);
				}
				printf("\nEnter The Key To Be Searched : ");
				scanf("%d",&k);
				start = clock();
					flag = Bin_Search(A,0,n-1,k);
				end = clock();
				time_required = ((double)(end - start))/CLOCKS_PER_SEC;
				if(flag == -1)
				{
				    printf("\nELement %d Not Found..!",k);
				}
				else
				{
				    printf("\nElement %d Found At A[%d] Index...!",k,flag);
				    printf("\nTime Required to Search %d Element is %f.\n",k,time_required);
                    		}
				break;
					
		default :	printf("\nInvalid Choice...!");			
      				exit(0);		
	}
	return 0;
}
