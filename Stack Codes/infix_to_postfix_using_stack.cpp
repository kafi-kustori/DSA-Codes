#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack  {

   int size ;
   int top ;
    char  *arr ;

            };

 // checking whether it is full or not

 int  isfull ( struct stack * ptr )

    {

     if ( ptr -> top == ptr -> size -1  )

            {
                return 1 ; }

      else {
               return 0 ;

                        }
          }

 // checking whether it is empty or not

    int  isempty ( struct stack *ptr )

    {

     if ( ptr -> top == -1  )

            {
                return 1 ; }

      else {
               return 0 ;

                        }
          }

// pushing the elements

    void push ( struct stack *ptr ,  char val )
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

                   printf(" the stack is empty\n");

               }


           else {

             int val = ptr -> arr[ ptr -> top ];
             ptr -> top -- ;
             return val ;


                      }

              }



// Stack top
         char  stacktop( struct stack *s)
      {
            return s -> arr[ s -> top ] ;

                       }

 // operator function

 int isoperator(char ch )
    {
        if ( ch == '+' || ch == '-' || ch == '*' || ch == '/'  )

                return 1 ;

         else
                return 0 ;


                       }

// precedence function
int precedence(char ch )
    {
        if ( ch == '*' || ch == '/')
            return 3 ;

        else if ( ch == '+' || ch == '-')
            return 2 ;

         else return 0 ;

       }



// infix to postfix function checking

 char *infixtopostfix( char *infix )

   {

       struct stack *sp = (struct stack*)malloc(sizeof(struct stack ) );
       sp -> size = 100 ;
       sp -> top = -1 ;
       sp -> arr = (char*)malloc(sp ->size * sizeof(char) );
       char *postfix = (char* ) malloc ( ( strlen (infix) +1 ) * sizeof(char));
       int i = 0 ;
       int j = 0 ;

      while( infix [i] != '\0')

       {

         if( !isoperator (infix[i]) )

         {

           postfix[j] = infix[i];
           j++ ;
           i++;

            }

          else {

            if ( precedence( infix[i]) > precedence (stacktop(sp)))

                  {

                    push(sp , infix[i]);
                    i++ ;

                  }

            else  {

                postfix[j] = pop(sp);
                j++;    }

                }

        }

   while( !isempty(sp))

        {
           postfix[j] = pop(sp);
           j++;

        }

        postfix[j] = '\0';
        return postfix;

          }



int main()

{

    char str[100];
    printf("enter your infix :");
    gets(str);
    printf("you entered : %s",str);

    char * infix = str ;
    printf("\npostfix is %s",infixtopostfix(infix));


}

