#include<iostream>
using namespace std;

struct node {

int data;
struct node *left;
struct node*right;

};

// To avoid the repetiton of node cretion 

struct node*createnode(int data){

   struct node*n = new node ();// creating a node
   n -> data = data ; // setting data
   n -> left = nullptr;
   n -> right = nullptr;
   return n ;

}

int main(){
// constructing the fisrt node

/* struct node *p = new struct node ();
p -> data = 2 ;
p -> left = nullptr;
p -> right = nullptr;

// constructing the second node
struct node *p1 = new struct node ();
p1 -> data = 2 ;
p1-> left = nullptr;
p1-> right = nullptr;


// constucting the third node
struct node *p2 = new struct node ();
p2 -> data = 2 ;
p2 -> left = nullptr;
p2 -> right = nullptr;

// Linking the root with right & left node 
p -> left = p1 ;
p -> right = p2 ;

*/


// construucting the root node using function
struct node *p  = createnode(2);
struct node *p1 = createnode(1);
struct node *p2 = createnode(4);

// linking the nodes
p -> left = p1 ;
p -> right = p2 ;


}