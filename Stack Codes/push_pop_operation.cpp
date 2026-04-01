#include<stdio.h>
#include<stdlib.h>

struct stack  {

   int size ;
   int top ;
   int *arr ;
            };

 // checking whether it is full or not

int isfull ( struct stack *ptr )

    {

     if ( ptr -> top == ptr -> size -1  )

            {
                return 1 ; }

      else {
               return 0 ;

                        }
          }

 // checking whether it is empty or not

   int isempty ( struct stack *ptr )

    {

     if ( ptr -> top == -1  )

            {
                return 1 ; }

      else {
               return 0 ;

                        }
          }

// pushing the elements


    void push ( struct stack *ptr , int val)


     {


      if( isfull ( ptr ) )
            {
                printf(" the stack is full\n");
            }    else   {

                  ptr -> top ++ ;
                  ptr -> arr[ ptr -> top ] = val ;

                   }
     }


 pop ( struct stack * ptr )

     {
          if (isempty(ptr))
               {
                   printf(" the stack is empty\n");
               }


           else {

             int val = ptr -> arr[ ptr -> top ];
             ptr -> top -- ;
             return val ;

                      }

              }


 int peek( struct stack *s , int i )

    {
       
        int arrayind = s -> top - i + 1 ;
        if ( arrayind < 0 )

               {

                  printf("Not a valid position for the stack \n");
                  return -1 ;

                          }
         else
            {
              return s -> arr[arrayind];

                    }

                       }


int main()

{

    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s -> size = 4 ;
    s -> top = -1 ;
    s -> arr = ( int *) malloc ( s -> size * sizeof(int));

    // adding the elements :

      s -> arr[0] = 4 ;
      s -> top ++ ;

      s ->  arr[1] = 4 ;
      s -> top ++ ;

      s -> arr[2] = 4 ;
      s -> top ++ ;


          if( isfull (s) )

       {
           printf("The stack is full\n");

           }
    else
         {
             printf("The stack is not full\n");

                 }


   // pushing the elements
     push (  s , 1000);

   // checking that after pushing whether the stack is full or not
     if( isfull (s) )

       {
           printf("The stack is full\n");

           }
    else
         {
             printf("The stack is not full\n");

         }



   // popping up an element
   printf("popped %d from the stack\n", pop(s));

   // checking whether 1000 is popped up or not

    if( isfull (s) )

       {
           printf("The stack is full\n");

           }
    else
         {
             printf("The stack is not full\n");

                 }

// if it is saying not full that means that element has been popped up successfully

}
