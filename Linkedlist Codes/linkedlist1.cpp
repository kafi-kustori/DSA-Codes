#include<stdio.h>
#include<stdlib.h>
int main()
{

    // use of malloc
    int *ptr ;
    int n ;
    printf("enter the size of array you want to create : ");
    scanf("%d",& n );
    ptr = (int *)malloc( n * sizeof(int));

    for (int i = 0 ; i < n ; i++)
    {
        printf("enter the value ");
        scanf("%d",&ptr[i]);
    }

    for (int i = 0 ; i < n ; i++)
    {
        printf(" %d\n ", ptr[i]);
    }


    return 0 ;

}

