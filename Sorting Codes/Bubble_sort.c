#include<stdio.h>
void printarray(int *A, int n ){
for (int i = 0; i < n ; i++)
{
    printf("%d\n",A[i]);
}

}


void bubblesort(int *A , int n){

   int temp ;
   for (int i = 0; i < n-1 ; i++)
   {
    
    for (int j = 0; j < n-1-i; j++)
    
    {
        
    if(A[j] < A [j+1]){
        
          temp = A[j];
          A[j] = A[j+1];
          A[j+1]= temp;

                }

           }
    
      }

   }
   


int main(){

printf("It is time for bubble  sort algorithm");
int A[] = {23,21,44,32,55,67,11,788,68,78,100};
int n = 11;
printarray(A,n);
bubblesort(A,n);
printf("After applying bubble sort ascending form ");
printarray(A,n);

}
