/* LINKEDLIST  creation and traversing */

#include<stdio.h>
#include<stdlib.h>

struct node {

  int data ;
  struct node *next ; // pointing another node here

};

// traversing the linkedlist here

void linkedlist_traversal( node *ptr )

{
    while( ptr != nullptr )

    {

    printf("element:%d\n", ptr -> data );
    ptr = ptr -> next ;

    }

}

int main(){

   struct node *head ;
   struct node *second  ;
   struct node *third  ;
   struct node *fourth ;

   // allocate memory for nodes in the linked list in heap
   head = (struct node *)malloc(sizeof (struct node ));
   second  = (struct node *)malloc(sizeof (struct node ));
   third  = (struct node *)malloc(sizeof (struct node ));
   fourth   = (struct node *)malloc(sizeof (struct node ));



  // here   " -> "  means to access that data in the structure
    head -> data = 7 ;
   head -> next = second ;


   second  ->  data = 8 ;
   second  -> next = third  ;


   third  -> data = 9 ;
   third  -> next = fourth  ;


   fourth -> data = 10 ;
   fourth -> next = nullptr;


  // calling the function
   linkedlist_traversal( head );

   // successfully linked up head + second + third + fourth  then null

   return 0 ;

    }
