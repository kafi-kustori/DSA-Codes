#include<stdio.h>
#include<stdlib.h>
struct queue
{
   int size ;
   int f ;
   int r ;
   int *arr ;

       };

// whether the array is empty or not 

int isempty(struct queue *q)
  {

     if( q->r == q-> f)
        {
            printf(" The Queue is empty\n") ;
        }
    
    else {   printf( " The Queue is not empty\n") ; }

       }

// whether the array is full or not

int isfull(struct queue *q)

 {

  if( q -> r == q -> size -1)
     
      {

        printf("The Queue is full\n");

      }

   else { printf (" The Queue is not full\n") ;  }


          }
  
// Enqueue operation or insertion operation

void enqueue(struct queue *q , int val)

 {
          
           q -> r++;
           q -> arr [q -> r] = val ;
              
         }

//dequeue operation or deletion operation 

int dequeue( struct queue *q )
{
   
   int a ;
   q -> f++;
   a = q -> arr[q -> f] ;    
   return a ;

    }


int main()

{   

   struct queue q ;
   q.size = 200;
   q.f = q.r = -1 ;
   q.arr = (int*)malloc(q.size * sizeof(int));

  // checkking whther it is full or not 
   isfull(&q);

  //enqueue few elements
  enqueue(&q ,12);
  enqueue(&q,15);

  //checking whether it is empty or not 
   isempty(&q);
  
  // deueue few elements
   printf(" %d is removed from the Queue\n",dequeue(&q));
   printf(" %d is removed from the Queue\n",dequeue(&q));
 
 printf("We have succesfully made the  FIFO(first in & first out ) application ");


  
        }
