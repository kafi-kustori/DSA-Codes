  #include<stdio.h>
  #include<stdlib.h>
  struct queue
  {
    int size ;
    int f ;
    int r ;
    int *arr ;

        };

  // whether the array is full or not 

  int isfull(struct queue *q)
  {
  
    if( q -> r == q-> size -1)
        {
          return 1;
        }
    

        }

  //  whether the array is empty  or not 
  int isempty( struct queue *q )
      
       {
   
      if(q-> r == q->f)
        {
 
           printf("The Queue is Empty");
         
             }
     }



  // Enqueue operation or insertion operation 
  void enqueue(struct queue *q , int val )
  {
            
    if(isfull(q))
            {

            printf("This Queue is full");

                  }

     


    else {
            q -> r++;
            q -> arr[q-> r] = val ;

                  }
  } 


  int main()

  {
    struct queue q ;
    q.size = 100;
    q.f = q.r = -1 ;
    q.arr = (int*)malloc(q.size * sizeof(int));

   
   isempty(q);
       
    // enquueue few elements 
    enqueue(&q ,12);
    enqueue(&q,15);
    

      
          }