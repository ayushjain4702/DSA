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

Node* insertIntoBST(Node* root,int d){
    //base case
    if(root == NULL){                       //Time complexity for insertion in BST is O(logn)
        root = new Node(d);
        return root;
    }

    if(d > root->data){
        root->right = insertIntoBST(root->right,d);
    }else{
        root->left = insertIntoBST(root->left,d);
    }

    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);                    
    
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
void inorder(Node* root){  //LNR
    //base case
    if(root== NULL){                //Inorder traversal of BST is always sorted
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

//Search in BST
bool searchInBST(Node* root,int x){
    
    //recursive approach
   /* if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }

    if(root->data > x){
        return searchInBST(root->left,x);
    }else{
        return searchInBST(root->right,x);
    } */

    //iterative approach

    Node* temp = root;

    while(temp!= NULL){
        if(temp->data == x){
            return true;
        }

        if(temp->data > x){
            temp = temp->left;
        }else{
            temp = temp->right;
        }
    }
    return false;
}

Node* minVal(Node* root){
    Node* temp = root;
    
    while(temp->left!= NULL){
        temp = temp->left;
    }
    return temp;
}


Node* maxVal(Node* root){
    Node* temp = root;
    
    while(temp->right!= NULL){
        temp = temp->right;
    }
    return temp;
}

//inorder successor

Node* inorderSuccessor(Node* root,int d){
    Node* successor = NULL;
    Node* temp = root;

    while(temp!=NULL){
        if(temp->data <= d){
            temp = temp->right;
        }else{
            successor = temp;
            temp = temp->left;
        }

    }
    
    return successor;
}

//inorder Predecessor
Node* inorderPredecessor(Node* root,int d){
    Node* predecessor = NULL;
    Node* temp = root;

    while(temp!=NULL){

        if(temp->data>= d){
            temp = temp->left;
        }else{
            predecessor = temp;
            temp = temp->right;
        }
    }
    
    
    return predecessor;
}

//deletion  T(C) = O(H)
Node* deletion(Node* root,int x){
    //base case
    if(root == NULL){
        return root;
    }

    if(root->data == x){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child  
        //left child
        if(root->left !=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left ==NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left!=NULL && root->right!=NULL){
            int min = minVal(root->right)->data;
            root->data = min;
            root->right = deletion(root->right,min);

            return root;
        }
    }
    else if(root->data > x){
        root->left = deletion(root->left,x);
        return root;
    }else{
        root->right = deletion(root->right,x);
        return root;
    }
    return root;
}


int main(){

    Node* root = NULL;
    takeInput(root);
    cout<<"Printing BST "<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder Traversal: ";
    inorder(root);

    cout<<endl<<"Preorder Traversal: ";
    preorder(root);

    cout<<endl<<"Postorder Traversal: ";
    postorder(root);

    cout<<endl<<"Searching in BST :";
    if(searchInBST(root,70)){
        cout<<"True"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    cout<<"Min val of BST is: "<<minVal(root)->data<<endl;
    cout<<"Max val of BST is: "<<maxVal(root)->data<<endl;
    cout<<"Inorder Successor is : "<<inorderSuccessor(root,50)->data<<endl;
    cout<<"Inorder Predecessor is : "<<inorderPredecessor(root,50)->data<<endl;

    cout<<"Deletion : "<<endl;
    root = deletion(root,50);

    cout<<"Printing BST "<<endl;
    levelOrderTraversal(root);
    cout<<"Inorder Traversal: ";
    inorder(root);

   
    
    return 0;
}

//50 30 20 40 70 60 80 -1
//50 20 70 10 30 90 110 -1