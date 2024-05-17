#include<stdio.h>
void printArray ( int a[], int n)/*This function if called will print array */
{ int i;
  for (i=0;i<n;i++)
    printf(" %d", a[i]);
  printf("\n"); }
  
void countingSort( int A[], int B[], int n, int k)/*This is a sorting function */
{ int C[k+1], i;
  for ( i = 0 ; i < k+1 ; i++)
    C[i]=0;
  for ( i = 0 ; i < n ; i++)
    C[A[i]]=C[A[i]]+1;
  for ( i = 1 ; i < k+1 ; i++)
    C[i]=C[i]+C[i-1];
  for ( i = n-1 ; i >= 0 ; i--)
  {  B[C[A[i]]-1]=A[i]; /* As for no 'i' C[A[i]] = 0, so we have to reduce the values*/
     C[A[i]]=C[A[i]]-1;}}
     
 void main()/*driver code*/
 { int n, k, i;
   printf(" Welcome to CountingSort programme!\n\n");
   printf (" please enter the size of your array:\n");
   scanf("%d", &n);
   int A[n], B[n];
   printf(" please enter the upper bound ( the maximum integer any input can attain ) of your inputs:\n");
   scanf("%d", &k);
   printf(" please enter the elements :\n");
   for ( i=0;i<n;i++)
     scanf("%d", &A[i]);
   printf ( " your array looks like :\n");
   printArray(A, n);
   countingSort(A, B, n, k);
   printf(" The sorted array looks like :\n");
   printArray(B, n);}
   
  