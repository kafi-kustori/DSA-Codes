#include <iostream>
using namespace std;

struct node

{

    int data;
    struct node *left;
    struct node *right;
};

// To avoid the repetiton of node cretion

struct node *createnode(int data)

{

    struct node *n = new node(); // creating a node
    n->data = data;              // setting data
    n->left = nullptr;
    n->right = nullptr;
    return n;
     
     };


void Inorder(struct node *root)

{

    if (root != nullptr)
    {

        Inorder(root->left);
        cout << root->data;
        Inorder(root->right);
    }
   
   }

// Checking whether the tree is binary search tree or not 
// Watch Apna College

bool isBST(struct node *root, struct node *min = nullptr , struct node *max = nullptr ) {
    if (root == nullptr) {
        return true;
    }

    if (min != nullptr && root->data <= min->data) {
        return false;
    }

    if (max != nullptr && root->data >= max->data) {
        return false;
    }

    return isBST(root->left, min, root) && isBST(root->right, root, max);

}

int main()

{

    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // the Tree ;
    //        5
    //       / \
//          3   6
    //     / \
//        1   4

    cout <<"For In order :" << endl ;
    Inorder(p);// 5 1 2 4 6
    cout <<" "<< endl ; 

       if (isBST(p)) {
        cout << "The tree is a BST." << endl;
    } else {
        cout << "The tree is not a BST." << endl;
    }

    return 0;

  }