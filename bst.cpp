// bst.cpp

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node* left;
    node* right;
};

node* newNode(int val){
    node* temp = new node;
    temp->value = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void inOrd(node* node){
    if(node->left != NULL)
        inOrd(node->left);
    cout << node->value << " ";
    if(node->right != NULL)
        inOrd(node->right);
}

void insert(int val, node* root){
    node* temp = newNode(val);
    node* cur;
    node* parent = root;
    if(root->value < val)
            cur = root->right;
        else
            cur = root->left;

    while(cur != NULL){
        parent = cur;
        if(cur->value < val){
            cur = cur->right;
        }

        else{
            cur = cur->left;
        }
    }
    if(parent->value < val)
            parent->right = temp;
        else
            parent->left = temp;
}

int minLeft(node* root){
    node* parent = root;
    node* cur = root;
    if(cur->left == NULL){
        return NULL; 
    }
    while(cur->left != NULL){
        parent = cur;
        cur = cur->left;
    }
    parent->left = NULL;
    return cur->value; 
}

int drop(int key, node* root){
    // node* temp = newNode(val);
    node* parent = root;
    if(root-> value == key){
        if(root->right == NULL){
            root = root->left;
        }
        else{
            int newVal = minLeft(root->right);
            if(newVal == NULL){
                (root->right)->left = root->left;
                root = root->left;
            }
            else{
                root->value = newVal;
            }
        }
    }
    else{
        node* cur = root;
        while(cur->value != key){
            parent = cur;
            if(cur->value < key)
                cur = cur->right;
            else
                cur = cur->left;
        }
        // cout << "P=" << parent->value << endl;

        if(cur->right == NULL){
            if(parent->left == cur)
                parent->left = cur->left;
            else
                parent->right = cur->left;
        }
        else{
            int newVal = minLeft(cur->right);
            if(newVal == NULL){
                cur = cur->left;
                // root = root->left;
            }
            else{
                cur->value = newVal;
            }
        }

    }
}

int main(){
    node* n10 = newNode(10);
    node* n9 = newNode(9);
    node* n19 = newNode(19);
    node* n7 = newNode(7);
    node* n5 = newNode(5);
    node* n8 = newNode(8);
    node* n3 = newNode(3);
    node* n6 = newNode(6);
    node* n100 = newNode(100);
    node* n12 = newNode(12);
    node* n30 = newNode(30);
    node* n11 = newNode(11);
    node* n17 = newNode(17);
    node* n23 = newNode(23);

    n10->left = n9;
    n9->left = n7;
    n7->left = n5;
    n5->left = n3;
    n19->left = n12;
    n12->left = n11;
    n30->left = n23;

    n10->right = n19;
    n19->right = n30;
    n30->right = n100;
    n7->right = n8;
    n5->right = n6;
    n12->right = n17;
    node* root = n10;

    cout << "ITEMS: ";
    // inOrd(n10);
    // cout << endl;
    // insert(77, root);
    // insert(777, root);
    // insert(99, root);
    // insert(22, root);

    inOrd(root);
    drop(19, root);
    cout << endl;
    inOrd(root);
    drop(100, root);
    cout << endl;
    inOrd(root);
    drop(10, root);    
    cout << endl;
    inOrd(root);
}