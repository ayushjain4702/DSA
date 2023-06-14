#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size;

        Heap(){
            arr[0]=-1;
            size=0;
        }

        void insert(int val){     //T(c) = O(logn)
            size=size+1;
            int index = size;
            arr[index] = val;

            while(index>1){
                int parent = index/2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }else{
                    return ;
                }
            }
        }
        
        void deleteFromHeap(){   //T(C) = O(logn)
            
            if(size==0){
                cout<<"no elm for deletion"<<endl;
            }

            arr[1] = arr[size];
            size = size-1;
            
            int i=1;
            
            while(i<size){
                int leftIndex = 2*i;
                int rightIndex = 2*i+1;

                if(leftIndex<size && arr[i]<arr[leftIndex]){
                    swap(arr[i],arr[leftIndex]);
                    i = leftIndex;
                }
                if(rightIndex<size && arr[i]<arr[rightIndex]){
                    swap(arr[i],arr[rightIndex]);
                    i = rightIndex;
                }
                else{
                    return;
                }
            }

            
        }
        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

};

int main(){
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteFromHeap();
    h.print();
   h.deleteFromHeap();
    h.print();
    return 0;
}