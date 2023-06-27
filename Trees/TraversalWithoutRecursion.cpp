#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in the left: "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in the right: "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

//Iterative approach for traversal

//1. Inorder traversal  //LNR
void inorder(Node* root){
    stack<Node*> s;
    Node* temp = root;
    while(temp!= NULL){
        s.push(temp);
        temp = temp->left;
    }
    while(!s.empty()){
        temp = s.top();
        s.pop();
        cout<<temp->data<<" ";
        temp = temp->right;
        while(temp!=NULL){
            s.push(temp);
            temp = temp->left;
        }
    }
}

//2. Preorder traversal //NLR
void preorder(Node* root){
    stack<Node*> s;
    Node* temp = root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        s.push(temp);
        temp= temp->left;
    }

    while(!s.empty()){
        temp = s.top();
        s.pop();
        temp =temp->right;
        while(temp!=NULL){
            s.push(temp);
            cout<<temp->data<<" ";
            temp =temp->left;
        }
    }
}

//3. Postorder traversal //LRN
void postorder(Node* root){
    stack<Node*> s1,s2;
    Node* temp = root;
    s1.push(temp);

    while(!s1.empty()){
        temp = s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left != NULL){
            s1.push(temp->left);
        }
        if(temp->right != NULL){
            s1.push(temp->right);
        }
    }

    while(!s2.empty()){
        temp = s2.top();
        s2.pop();
        cout<<temp->data<<" ";
    }
}

int main(){
    
    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout<<endl<<"Inorder Traversal: ";
    inorder(root);
    cout<<endl<<"Preorder Traversal: ";
    preorder(root);
     cout<<endl<<"Postorder Traversal: ";
    postorder(root);
    
    return 0;
}