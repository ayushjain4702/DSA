#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
//print linked list
void print(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
    }
    cout<<endl;
}

//insert at start
void insertAtHead(int d,Node* &head){
    Node* temp  = new Node(d);
    temp->next = head;
    head = temp;
    
}

//insert at end
void insertAtTail(int d,Node* &tail){
    Node* temp = new Node(d);
    tail->next= temp;
    tail = tail->next;
}

//insert at any position
void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
    int count = 1;
    Node*temp = head;
    if(pos == 1){
        insertAtHead(data,head);
        return;
    }
    while(count<pos-1){
        temp = temp->next;
        count++;
        }
    if(temp->next == NULL){
        insertAtTail(data,tail);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}

//deletion

void deleteNode(Node* &head,int pos){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count<pos){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        delete curr;
    }
}

//detect loop
bool detect(Node* head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp = head;
    while(temp!= NULL){
        
        //if visited
        if(visited[temp]==true){
            cout<<"Loop at: "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

//detect loop using floyd cycle
bool detectCycle(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast!= NULL){
        if(slow==fast){
            return true;
        }
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return false;
}
//find starting node of loop
Node* detectStartingLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* intersection = NULL;
    while(fast!= NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow==fast){
            intersection = fast;
            break;
        }
    }
    slow = head;
    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

//remove loop
void removeLoop(Node* head){
    Node* startOfLoop = detectStartingLoop(head);
    Node* temp = startOfLoop;
    while(temp->next!= startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
  //  print(head);
    insertAtTail(20,tail);
   // print(head);
    insertAtTail(30,tail);
  //  print(head);
    insertAtPosition(head,tail,40,4);
    //print(head);
    insertAtPosition(head,tail,50,5);
    
    tail->next = head->next;
    //print(head);
    if(detectCycle(head)){
        cout<<"Loop is present"<<endl;
    }else{
        cout<<"No loop detected"<<endl;

    }
    Node* st = detectStartingLoop(head);
    cout<<st->data<<endl;
    removeLoop(head);
    print(head);

    return 0;
}