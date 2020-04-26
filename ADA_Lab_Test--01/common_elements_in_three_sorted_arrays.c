/*************************************************************************************************************************************
  Given three arrays sorted in non-decreasing order, print all common elements in these arrays.

  Examples:
          Input:
              ar1[] = {1, 5, 10, 20, 40, 80}
              ar2[] = {6, 7, 20, 80, 100}
              ar3[] = {3, 4, 15, 20, 30, 70, 80, 120}
          Output: 20, 80

*************************************************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void printCommon(int A[],int B[],int C[],int n1,int n2,int n3)
{
    int i,j,k;
    i = j = k = 0;
    while(i<n1 && j<n2 && k<n3)
    {
        if(A[i] == B[j] && B[j] == C[k])
        {
            printf("%d\t",A[i]);
            i++;
            j++;
            k++;
        }
        else if(A[i] < B[j])
            i++;
        else if(B[j] < C[k])
            j++;
        else
            k++;
    }
}

int main()
{
    int A[100];
    int B[100];
    int C[100];
    int i;
    int n1,n2,n3;
    
    printf("Enter The Size Of 3 Arrays : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("Enter %d Elements in Array-1 : \n",n1);
    for(i=0;i<n1;i++)
        scanf("%d",&A[i]);
    printf("Enter %d Elements in Array-2 : \n",n2);
    for(i=0;i<n2;i++)
        scanf("%d",&B[i]);
    printf("Enter %d Elements in Array-3 : \n",n3);
    for(i=0;i<n3;i++)
        scanf("%d",&C[i]);
    printCommon(A,B,C,n1,n2,n3);
}


/*************************************************************************
Output:
*************************************************************************/

Enter The Size Of 3 Arrays :                                                                                                                               
6                                                                                                                                                          
5                                                                                                                                                          
8                                                                                                                                                          
Enter 6 Elements in Array-1 : 
1                                                                                                                            
5                                                                                                                                                          
10                                                                                                                                                         
20                                                                                                                                                         
40                                                                                                                                                         
80                                                                                                                                                         
Enter 5 Elements in Array-2 : 
6                                                                                                                            
7                                                                                                                                                          
20                                                                                                                                                         
80                                                                                                                                                         
100                                                                                                                                                        
Enter 8 Elements in Array-3: 
3                                                                                                                            
4                                                                                                                                                          
15                                                                                                                                                         
20                                                                                                                                                         
30                                                                                                                                                         
70                                                                                                                                                         
80                                                                                                                                                         
120  

20      80
