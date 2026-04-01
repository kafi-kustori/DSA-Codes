#include<stdio.h>
#include<stdlib.h>

  struct node {

       int data ;
       struct node *next ;

           } ;

  linkedlist_traversal ( node *ptr ) // for traversing

  {

     while ( ptr != nullptr)
      {

       printf("the element is %d \n", ptr -> data  );
       ptr = ptr -> next ;

      }

  }

  // for  deleting the first node
      struct node * deleteatfirst ( node * head )

    {

       // struct node * ptr = (struct node* )  malloc ( sizeof (struct node));
       // the commented above line can be applied when new node is created
       //must remeber for insertion or new node creation


        struct  node * ptr = head ;
        head = head -> next ;
          free( ptr ) ;
        return head ;

             }

   // now for deleting a node between
   struct node *delete_between_node ( node* head , int index ) {

        struct node *p = head ;
        int i = 1 ;

          while( i != index -1 )

             {
                 p = p -> next ;
                 i++ ;

             }


            struct node *q = p -> next ;
            p -> next = q -> next ;
             free(q);
           return head ;

                 } ;

// deleting the last node

     struct node *delete_lastnode(node *head)
      {

           struct node *p = head ;
           struct node *q = head -> next ;
           while  ( q -> next  != nullptr)

               {

                   p = p -> next ;
                   q = q -> next ;

               }

                p -> next   = nullptr ;
               free(q);
              return head ;

      };

// deleting the node with a value
   struct node *delete_after_nodevalue( node * head  , int value )
      {
             struct node *p = head ;
             struct node *q = head -> next ;

          while ( q -> data != value && q -> next != nullptr )
             {

                 p = p -> next ;
                 q = q -> next ;

             }

           if ( q -> data == value )
            {

               p -> next = q -> next ;
               free (q);

           }


            return head ;

               };




int main() {

     struct node *head  ;
     struct node *second ;
     struct node *third ;
     struct node *fourth ;

     struct node * fifth  ;
     struct node *sixth ;
     struct node *seventh ;
     struct node *eighth ;


    head = (struct node *)malloc (sizeof(struct node )) ;
    second  = (struct node *)malloc (sizeof(struct node )) ;
    third  = (struct node *)malloc (sizeof(struct node )) ;
    fourth  = (struct node *)malloc (sizeof(struct node )) ;

    fifth = (struct node *)malloc (sizeof(struct node )) ;
    sixth  = (struct node *)malloc (sizeof(struct node )) ;
    seventh = (struct node *)malloc (sizeof(struct node )) ;
    eighth  = (struct node *)malloc (sizeof(struct node )) ;


    // remember one thing  " -> " means  -> = &


     head -> data = 7 ;
     head -> next = second ;


     second -> data = 8 ;
     second  -> next = third  ;


     third  -> data = 9 ;
     third  -> next = fourth  ;



     fourth  -> data = 10  ;
     fourth  -> next = fifth ;

      fifth -> data = 11 ;
     fifth -> next = sixth ;


     sixth -> data = 12 ;
     sixth  -> next = seventh  ;


     seventh  -> data = 13 ;
     seventh  -> next = eighth ;



     eighth  -> data = 14 ;
     eighth  -> next = nullptr ;






    printf(" Traversing the elements : \n");
    linkedlist_traversal( head ) ;

// case - 01 : deleting the first node
    printf("after deleting the first node : \n");
      head = deleteatfirst(head);
    linkedlist_traversal(head);

// case -02 : deleting a node between
    printf("after deleting a node between : \n") ;
    head = delete_between_node ( head , 3 );
    linkedlist_traversal(head );

// case -03 : deleting the last node
    printf("after deleting the last node : \n");
    head = delete_lastnode( head );
    linkedlist_traversal(head);

// case - 04 : delete a node with a given value
   printf(" after deleting the node with a given value : \n");
   head = delete_after_nodevalue(head , 13 );
   linkedlist_traversal(head);


        }
