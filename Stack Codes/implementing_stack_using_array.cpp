#include<stdio.h>
#include<stdlib.h>

struct stack  {

   int size ;
   int top ;
   int *arr ;
              };

int isempty (struct stack *ptr )

  {
     if ( ptr -> top == -1 )

            {
                return 1 ; }

      else {
               return 0 ;

                        }

          }



int isfull ( struct stack *ptr )
  {

     if ( ptr -> top == ptr -> size -1  )

            {
                return 1 ; }

      else {
               return 0 ;

                        }
          }


int main()

{
    
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s -> size = 4 ;
    s -> top = -1 ;
    s -> arr = ( int *) malloc ( s -> size * sizeof(int));

    // pushing  elements manually
      s -> arr[0] = 4 ;
      s -> top ++ ;

      s ->  arr[1] = 4 ;
      s -> top ++ ;

      s -> arr[2] = 4 ;
      s -> top ++ ;

      s -> arr[3] = 4 ;
      s -> top ++ ;

   // if you push excess elements here then the elements will overflow ;

      if( isempty (s) )

       {
           printf("The stack is empty\n");

           }
    else
         {
             printf("The stack is not empty\n");

                 }


     if( isfull (s) )

       {
           printf("The stack is full\n");

           }
    else
         {
            
             printf("The stack is not full\n");

                 }

}
