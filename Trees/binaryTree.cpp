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

//Level order search
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);                       // It act as a  breadth first search
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }  
    }
}


void reverseLevelOrderTraversal(Node* root){
    queue<Node*> q;
    stack<Node*> s;

    q.push(root);
    q.push(NULL);                       
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        s.push(temp);
        

        if(temp==NULL){
           
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            

            if(temp->right){
                q.push(temp->right);    //For reverse we will enqueue right side data first
            }

            if(temp->left){
                q.push(temp->left);
            }

            
        }
        
    }
    s.pop();  // To remove the last NULL element
    while(!s.empty()){
        root = s.top();
        s.pop();
        if(root == NULL){  //If we got NUll ,go to next level
            cout<<endl;
        }else{
            cout<<root->data<<" ";
        }
    }
    
}
//Depth oder Traversal: 
//1. Inorder Traversal 
void inorder(Node* root){  //LNR
    //base case
    if(root== NULL){
        return;
    }    
    inorder(root->left); //L
    cout<<root->data<<" "; //N
    inorder(root->right); //R
}

//2. Preoder Traversal
void preorder(Node* root){ //NLR
    //base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" "; //N  
    preorder(root->left); // L
    preorder(root->right); // R
}

//3. Postorder Traversal
void postorder(Node* root){ //LRN
    //base case
    if(root == NULL){
        return;
    }
    postorder(root->left); //L
    postorder(root->right);// R
    cout<<root->data<<" "; // N
}

int main(){
    
    Node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout<<"Level order Traversal :"<<endl;
    levelOrderTraversal(root);
    cout<<"Reverse Level order Traversal :"<<endl;
    reverseLevelOrderTraversal(root);
    cout<<endl;
    cout<<"Inorder  Traversal:  ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder  Traversal:  ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder  Traversal:  ";
    postorder(root);
    cout<<endl;
    return 0;
}