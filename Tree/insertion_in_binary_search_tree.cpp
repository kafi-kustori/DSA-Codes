#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// To avoid the repetition of node creation

struct node *createnode(int data)  {

    struct node *n = new node();   // creating a node
    n->data = data;              // setting data
    n->left = nullptr;
    n->right = nullptr;
    return n;

}


// Insertion In Binary Search Tree

void insert(node *root , int key){

   struct node * prev = nullptr;
   while(root != nullptr){

     prev = root ;
     if(key == root -> data){

    cout << "Cannot insert the data " << endl ;

     }
 else if(key < root -> data) {

    root = root -> left;


 }

 else
    
    root = root -> right;

   }

   struct node* new1 = createnode(key);
   if(key < prev -> data)
           prev -> left = new1;

   else 
           prev -> right = new1;


}


int main() {
    // Creating the tree
    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // The Tree:
    //        5
    //       / \
    //      3   6
    //     / \
    //    1   4

 insert(p , 6);
 cout << p -> right -> right -> data  << endl  ;


    }


