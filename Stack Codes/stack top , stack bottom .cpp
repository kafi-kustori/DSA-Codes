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


 pop ( struct stack * ptr)

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

  // applying the peek operation

 int peek ( struct stack *s ,int i )
       {

           // to manage the LIFO = last in first out

           int arrayindia = s -> top - i +1 ;
           if ( arrayindia < 0 )

           {

              printf (" not a valid position for the stack ");
                 return -1 ;

                }

           else
                 {

                     return s -> arr[arrayindia];

                          }

          }


int stacktop( struct stack *s)
    {
            return s -> arr[ s -> top ] ;

                       }

int stackbottom( struct stack * s)

    {
                return s -> arr[0];
                                       }


int main()

{

    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s -> size = 10 ;
    s -> top = -1 ;
    s -> arr = ( int *) malloc ( s -> size * sizeof(int));

printf("the stack has been created successfully\n");



   // pushing the elements
     push (  s ,  61 );
     push (  s , 62);
     push (  s , 63);
     push (  s , 64 );
     push (  s , 65);
     push (  s , 66);
     push (  s , 67 );
     push (  s , 68 );
     push (  s , 69);

/*  for ( int j = 1 ; j <= s -> top + 1  ; j++)
     {

        printf("the value at position %d is %d\n", j , peek( s , j ));


         }

         */
printf("the top most value of this stack is %d\n",stacktop(s));
printf("the bottom most value of this stack is %d\n",stackbottom(s));








}
