#include<stdio.h>
#include<stdlib.h>

struct node {

  int data ;
  struct node *next ; // pointing another node here

};

// traversing the linked list here

void linkedlist_traversal( node *ptr )

{
    while( ptr != nullptr )

    {

    printf("element:%d\n", ptr -> data );
    ptr = ptr -> next ;

    }

}


// inserting at first
 struct node * insertatfirst( node * head , int data)

    {

      struct  node * ptr = (struct node*) malloc(sizeof(struct node));
       ptr -> next = head ;
       ptr -> data = data ;
       return ptr ;

                };


// inserting between node
    struct node * insertindex( node*head , int data , int index)

    {

      struct  node * ptr = (struct node*) malloc(sizeof(struct node));
      struct node *p = head ;
      int i = 0 ;
        while(i != index -1 )
           {

             p = p -> next ;
             i++ ;
                    }

         ptr -> data = data ; // setting the data of the new node taken from int main
         ptr -> next = p -> next  ;
         p -> next = ptr ;
         return head ;

             };

// inserting at the end
          struct node * insertend ( node * head , int data)

    {

      struct  node * ptr = (struct node*) malloc(sizeof(struct node));
      ptr -> data = data ;
      struct node *p = head ;


    while ( p -> next != nullptr )

         {

             p = p -> next ;

                    }

//    ptr = p -> next ;
  //p -> next = nullptr ;

     p -> next = ptr ;
     ptr -> next = nullptr ;
     return head ;


                };

// inserting after a node
struct node *insertnode ( node * head , struct node *prevnode ,  int data )
         {
//      struct  node * ptr = (struct node*) malloc(sizeof(struct node));

   struct node  *ptr = (struct node * ) malloc (sizeof (struct node ) ) ;
            ptr ->  data = data ;
        // struct node *p = head ;

       /*   while ( p != node*prevnode )
            {
               p  = p -> next ;

                }
                        no need of while looop
                           */


             ptr -> next =  prevnode  -> next ;
              prevnode -> next   = ptr ;
             return head ;

         };


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
   printf("traversing  elements \n" ) ;
   linkedlist_traversal( head );

   // successfully linked up head + second + third + fourth  then null

   //  inserting at the beginning

   printf("inserting at the beginning 56 \n") ;
             head = insertatfirst(head , 56 );
            linkedlist_traversal(head ) ;

   // inserting between node
       printf("inserting between node 2 , the number 5\n") ;
        head = insertindex(head , 5 , 2 );
        linkedlist_traversal( head ) ;

   // inserting at the end
       printf("inserting at the end\n") ;
         head = insertend(head,60) ;
        linkedlist_traversal( head ) ;

   // inserting after a node
   printf("inserting after a node \n" ) ;
   head = insertnode(head , second , 14 ) ;
   linkedlist_traversal (head);

   return 0 ;


    }
