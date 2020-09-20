#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *left, *right;
};

node* newNode(int num){
    node* temp = new node();
    temp->data = num;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void bft(node* root){
    queue <node*> q;
    node* cur;
    q.push(root);
    cout << "BFT ";
    while(!q.empty()){
        cur = q.front();
        q.pop();
        if(cur->left != NULL){
            q.push(cur->left);
        }
        if(cur->right != NULL){
            q.push(cur->right);
        }
        cout << cur->data << " ";
    }
    cout << endl;
}

int bfs(node* root, int key){
    queue <node*> q;
    queue <int> level;
    node* cur;
    int curLevel;
    q.push(root);
    level.push(1);
    while(!q.empty()){
        cur = q.front();
        q.pop();
        curLevel = level.front();
        level.pop();
        if(cur->data == key){
            return curLevel;
        }

        if(cur->left != NULL){
            q.push(cur->left);
            level.push(curLevel + 1);
        }
        if(cur->right != NULL){
            q.push(cur->right);
            level.push(curLevel + 1);
        }
    }
    return -1;
}

void dftPreO(node* root){
    cout << root->data << " ";
    if(root->left != NULL)
        dftPreO(root->left);
    if(root->right != NULL)
        dftPreO(root->right);
}

void dftInO(node* root){
    if(root->left != NULL)
        dftInO(root->left);
    cout << root->data << " ";
    if(root->right != NULL)
        dftInO(root->right);
}

void dftPostO(node* root){
    if(root->left != NULL)
        dftPostO(root->left);
    if(root->right != NULL)
        dftPostO(root->right);
    cout << root->data << " ";
}

int main(){
    node* n1 = newNode(1);
    node* n2 = newNode(2);
    node* n3 = newNode(3);
    node* n4 = newNode(4);
    node* n5 = newNode(5);
    // node* n6 = newNode(6);
    // node* n7 = newNode(7);
    // node* n8 = newNode(8);
    // node* n99 = newNode(99);
    // node* n11 = newNode(11);
    // node* n77 = newNode(77);


    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    // n3->left = n6;
    n2->right = n5;
    // n6->left = n7;
    // n4->left = n99;
    // n5->right = n11;
    // n6->right = n8;
    // n7->right = n77;


    cout << "DFT: "<< endl;
    cout << "Inorder: ";
    dftInO(n1);
    cout << endl;
    cout << "Preorder: ";
    dftPreO(n1);
    cout << endl;
    cout << "Postorder: ";
    dftPostO(n1);
    cout << endl;

    // cout << bfs(n1, 0)<<endl;


    return 0;
}