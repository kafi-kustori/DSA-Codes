#include<stdio.h>
#include<stdlib.h>
struct circularqueue

{
   int size ;
   int f ;
   int r ;
   int *arr ;

       };

// whether the array is empty or not 

int isempty(struct circularqueue *q)
  {

     if( q->r == q-> f)
        {  
           // printf(" The Queue is empty\n") ;
           return 1 ;
        }
  }

// whether the array is full or not

int isfull(struct circularqueue *q)

 {

  if( (q-> r+1) % (q -> size )==  q -> f)
     
      {

           //  printf("The Queue is full\n");
           return 1 ;

      }
 }

// Encircularqueue operation or insertion operation

void enqueue(struct circularqueue *q , int val )

 {
      if(isfull(q))

          {
              printf("The Queue is Full\n");
          }
   
     else {
     
     q -> r =  (q -> r+1) % q -> size ;
     q -> arr [ q -> r ] =  val ; 
     printf("Enqueued %d element\n",val);

     }

         }

//decircularqueue operation or deletion operation 

int dequeue( struct circularqueue *q )

{
   
   int a = -1 ;
   if(isempty(q))
    {
        printf("The Queue is Empty\n");
    }


else {
     
    q -> f = (q -> f+1) % q -> size;
    a = q-> arr[ q -> f];
     return a ;
  
  }
    }


int main()

{   
   struct circularqueue q ;
   q.size = 4;
   q.f = q.r = 0 ;
   q.arr = (int*)malloc(q.size * sizeof(int));

//enqueue few elements
enqueue(&q ,12);
enqueue(&q,15);
enqueue(&q,17);

if(isfull(&q))
    
    {
     printf("The Queue is full now\n");
        }

else {printf("The Queue is not full\n");}
        

// dequeue few elements 
printf("%d is removed from the Queue\n",dequeue(&q));
printf("%d is removed from the Queue\n",dequeue(&q));
if(isfull(&q))
    
    {
     printf("The Queue is full now\n");
        }

else {printf("The Queue is not full\n");}
        



        }
