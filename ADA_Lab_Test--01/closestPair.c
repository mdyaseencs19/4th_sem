/**********************************************************************************************************************
	Given two sorted arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.We are given two arrays ar1[0…m-1] and ar2[0..n-1] and a number x, we need to find the pair ar1[i] + ar2[j] such that absolute value of (ar1[i] + ar2[j] – x) is minimum.

  Example:
      Input:  ar1[] = {1, 4, 5, 7};
              ar2[] = {10, 20, 30, 40};
              x = 32      
      Output:  1 and 30

      Input:  ar1[] = {1, 4, 5, 7};
              ar2[] = {10, 20, 30, 40};
              x = 50      
      Output:  7 and 40

**********************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int printClosestSum(int A[],int B[],int n1,int n2,int x)
{
    int left = 0;
    int right = n2-1;
    int r1,r2;
    int diff = 9999999;
    while(left < n1 && right >= 0)
    {
        if(abs(A[left]+B[right] - x) < diff)
        {
            r1 = left;
            r2 = right;
            diff = abs(A[left]+B[right] - x);
        }
        if(A[left] + B[right] > x)
            right--;
        else
            left++;
    }
    printf("The Closest Pair is : [%d, %d]",A[r1],B[r2]);
}

int main()
{
    int A[10000];
    int B[10000];
    int i,x;
    int n1,n2;
    printf("Enter The Size of Both Arrays : \n");
    scanf("%d%d",&n1,&n2);
    printf("Enter %d Elements in Array-01 : \n",n1);  
    for(i=0;i<n1;i++) 
        scanf("%d",&A[i]);        
    printf("Enter %d Elements in Array-02 : \n",n2);  
    for(i=0;i<n2;i++) 
        scanf("%d",&B[i]);
    printf("Enter The Value of X : ");
    scanf("%d",&x);
    printClosestSum(A,B,n1,n2,x);    
    return 0;
}

/****************************************************************************************************
Output:
****************************************************************************************************/
Enter The Size of Both Arrays :                                                                                                                          
4                                                                                                                                                        
4                                                                                                                                                        
Enter 4 Elements in Array-01 :                                                                                                                           
1                                                                                                                                                        
4                                                                                                                                                        
5                                                                                                                                                        
7                                                                                                                                                        
Enter 4 Elements in Array-02 :                                                                                                                           
10                                                                                                                                                       
20                                                                                                                                                       
30                                                                                                                                                       
40                                                                                                                                                       
Enter The Value of X : 38                                                                                                                                
The Closest Pair is : [7, 30]
