#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

// To avoid the repetition of node creation
struct node *createnode(int data) {
    struct node *n = new node(); // creating a node
    n->data = data;              // setting data
    n->left = nullptr;
    n->right = nullptr;
    return n;
}

// Searching in BST
struct node *search(struct node *root, int key) {
    if (root == nullptr) {
        return nullptr; // Element not found
    }

    if (key == root->data) {
        return root; // Element found
    }

    // Recursive search in the left or right subtree
    else if (key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}


// A new method 

struct node * searchIter(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
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

    // Searching for an element in the BST1
    struct node *n = search(p, 7);
    if (n != nullptr) {
        cout << "Found: " << n->data << endl;
    } else {
        cout << "Element not found1" << endl;
    }

    
     // Searching for an element in the BST2
    struct node* t = searchIter(p, 77);
    if(t!=NULL){
    printf("Found: %d", t->data);
    }
    else{
        printf("Element not found2");
    }

}
