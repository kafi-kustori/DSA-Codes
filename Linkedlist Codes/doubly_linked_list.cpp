#include<stdio.h>
#include <stdlib.h>

struct node {

    int data ;
    struct node *prev ;
    struct node *next ;

          };


void linkedlist_traversal( node *ptr )

 {
    while( ptr != nullptr )

    {

    printf("element:%d\n", ptr -> data );
    ptr = ptr -> next ;

    }

}


int main()

    {

     struct node *n1 = (struct node*) malloc (sizeof(struct node));
     struct node *n2 = (struct node*) malloc (sizeof(struct node));
     struct node *n3 = (struct node*) malloc (sizeof(struct node));
     struct node *n4 = (struct node*) malloc (sizeof(struct node));


     n1 -> data = 7 ;
     n1 -> next = n2 ;
     n1 -> prev = nullptr ;


     n2 -> data = 8 ;
     n2 -> next = n3 ;
     n2 -> prev = n1 -> next ;

     n3 -> data = 9 ;
     n3 -> next = n4 ;
     n3 -> prev = n2 -> next ;

     n4 -> data = 10 ;
     n4 -> next = nullptr ;
     n4 -> prev = n3 -> next ;



      printf(" In order list:\n");
      linkedlist_traversal( n1 );

      printf(" In reverse list:\n");
      linkedlist_traversal( n4 );




          }
