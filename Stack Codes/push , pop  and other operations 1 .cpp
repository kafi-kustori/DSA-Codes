#include<stdio.h>
#include<stdlib.h>

struct stack  {

   int size ;
   int top ;
    char  *arr ;

            };

 // checking whether it is full or not

 char isfull ( struct stack * ptr )

    {

     if ( ptr -> top == ptr -> size -1  )

            {
                return 1 ; }

      else {
               return 0 ;

                        }
          }

 // checking whether it is empty or not

    char  isempty ( struct stack *ptr )

    {

     if ( ptr -> top == -1  )

            {
                return 1 ; }

      else {
               return 0 ;

                        }
          }

// pushing the elements


    void push ( struct stack *ptr ,  char val)
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

  // applying the peek operation/

 int   peek ( struct stack *s ,int  i )
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



int parenthesismatch( char * exp )

    {

       struct stack *sp ;
       sp -> size = 100 ;
       sp -> top = -1 ;
       sp -> arr = ( char * )malloc ( sp -> size *sizeof(char));


       for( int i = 0 ; exp [i] != '\0' ; i++)

       {
          if(exp[i]=='(')

               {
                   push ( sp , '(') ;

               }

          else if  ( exp [i] == ')')

                {
                      if ( isempty(sp))

                      {

                          return 0 ;


                              }

                        else {

                            pop(sp );



                        }



                     }




                }



          }




int main()

{

    char * exp = "    (666))       ";

    if( parenthesismatch(exp))
    {

        printf("the parenthesis is matching ");

    }

    // else {

         printf("the parenthesis is not matching ");

    }



 /* for ( int j = 1 ; j <= s -> top + 1  ; j++)

     {

        printf("the value at position %d is %C\n", j , peek( s , j ));


         }

         */

}
