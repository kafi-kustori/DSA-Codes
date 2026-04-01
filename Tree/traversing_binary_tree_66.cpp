#include <iostream>
using namespace std ;

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

// Traversing in preorder
void Preorder(struct node *root)
{

    if (root != nullptr)
    {

        cout << root->data;
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Postorder(struct node *root)
{

    if (root != nullptr)
    {

        Postorder(root->left);
        Postorder(root->right);
        cout << root->data;
    }
}



void Inorder(struct node *root)
{

    if (root != nullptr)
    {

        Inorder(root->left);
        cout << root->data;
        Inorder(root->right);
    }
}

int main()
{

    struct node *p = createnode(4);
    struct node *p1 = createnode(1);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(5);
    struct node *p4 = createnode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // the Tree ;
    //        4
    //       / \
//          1   6
    //     / \
//        5   2

    cout << "For preorder :" << endl;
    Preorder(p); // 4 1 5 2 6
    cout << endl;
    cout << "For Post order :" << endl;
    Postorder(p); // 5 2 1 6 4
    cout << endl;
    cout <<"For In order :" << endl ;
    Inorder(p);// 5 1 2 4 6
    
}