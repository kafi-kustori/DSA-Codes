#include<stdio.h>
#include <stdlib.h>

struct node {

      int data ;
      struct node * next ;

       };

// traversing the circular linked list

 void linkedlist_traversal( node * head ){

      node *ptr = head ;

    do {

        printf("the element is %d \n",ptr -> data );
        ptr = ptr -> next ;

          }  while ( ptr != head ) ;

                   }

// insertion at first at circular linked list

 struct node * linkedlist_insertatfirst( node *head , int data )

   {

       struct node *ptr = (struct node *) malloc (sizeof(struct node ));
       ptr -> data = data ;


       struct  node *p = head -> next ;
       while ( p-> next != head )

       {

           p = p -> next ;

       }


        p -> next = ptr  ;
        // not right ptr = p -> next ;
       ptr -> next = head ;
       head = ptr ;
       return head ;

                   };

// inserting at the end
 struct node * linkedlist_insertatend ( node *head , int data )

  {

      struct node * ptr = ( struct node *) malloc (sizeof( struct node ));
      ptr -> data = data ;

      struct node *p = head -> next ;

      while ( p -> next != head )
        {
         
         p = p -> next ;

            }

        p  -> next = ptr  ;
        ptr -> next = head ;
        return head ;

  }  ;


  // inserting after a node

  struct node *  linkedlist_insert_afternode( node *head , int index , int data)

 {

    struct node * ptr = (struct node *) malloc (sizeof(struct node));
    ptr -> data = data ;


    struct node *p = head -> next ;
    int i = 0 ;

    while( i != index -1 )
    {

        p = p -> next ;
        i++ ;

    }

      ptr-> next = p -> next ;
      p -> next = ptr  ;
     return head ;

            } ;


int main() {

      struct node *head ;
      struct node *second ;
      struct node *third ;
      struct node *fourth ;


  head = (struct node *)malloc (sizeof (struct node ));
  second  = (struct node *)malloc (sizeof (struct node ));
  third  = (struct node *)malloc (sizeof (struct node ));
  fourth = (struct node *)malloc (sizeof (struct node ));


  head -> data = 7 ;
  head -> next = second ;

  second  -> data = 8 ;
  second  -> next = third  ;

  third  -> data = 9 ;
  third  -> next = fourth ;

  fourth  -> data = 10 ;
  fourth  -> next = head  ; // see the circular linked list done ...

  printf(" traversing the elements :\n");
  linkedlist_traversal(head);


  // case - 01 :
  printf("after insertion at first  :\n");
  head = linkedlist_insertatfirst( head , 56 ) ;
  linkedlist_traversal(head );

  // case - 02 :
  printf(" after insertion at the end : \n");
  head = linkedlist_insertatend( head , 60);
  linkedlist_traversal(head);


 // case - 03 :
  printf(" insertion between node :\n");
  head = linkedlist_insert_afternode( head , 2 , 1000);
  linkedlist_traversal(head);




        }
