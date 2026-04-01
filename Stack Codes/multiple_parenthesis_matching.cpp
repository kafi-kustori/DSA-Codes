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


char  pop ( struct stack * ptr)

     {
          if (isempty(ptr))
               {
                   printf (" the stack is empty\n");
               }


           else {

             char  val = ptr -> arr[ ptr -> top ];
             ptr -> top -- ;
             return val ;


                      }

              }

int match( char a , char b)

    {

        if(  a == '{' && b == '}')
                  {
                      return 1 ;
                  }


         if(  a == '(' && b == ')')
                  {
                      return 1 ; }


           if(  a == '[' && b == ']')
                  {
                      return 1 ; }


              return 0 ;

              }



int parenthesismatch( char * exp )

    {

       struct stack *sp = ( struct stack *)malloc( sp -> size * sizeof(stack)) ;
       sp -> size = 100 ;
       sp -> top = -1 ;
       sp -> arr = ( char * ) malloc ( sp -> size *sizeof (char) );


       for( int i = 0 ; exp [i] != '\0' ; i++)

       {
          if ( exp[i]== '(' || exp[i]==  '{' || exp[i]== '[')

               {
                   push ( sp , exp[i] ) ;

               }

          else if  ( exp [i] == ')' || exp[i]==  '}' || exp[i]==  ']')

                {
                      if ( isempty(sp))

                      {

                          return 0 ;

                              }


               char  popped_ch = pop(sp);
               if( ! match( popped_ch , exp[i]))

                     {

                     return 0 ;

                     }


                        }
                     }



       if ( isempty(sp))

          {

            return 1 ;


                }

        else { return 0 ; }


          }


int main()

{

    char * exp = "     (324)   }     ";

    if( parenthesismatch(exp))
    {

        printf("the parenthesis is matching ");

    }

    else {

         printf("the parenthesis is not matching ");

    }


}

