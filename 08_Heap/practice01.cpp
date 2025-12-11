#include<iostream>
using namespace std;

class MaxHeap {
    int *arr;
    int size;
    int total_size;
    public:
    MaxHeap(int s){
        size = 0;
        arr = new int[s];
        total_size = s;
    }

    //insert into the heap
    void insert(int data){
        if(size == total_size){
            cout<<"Heap overflow!!";
            return;
        }
        arr[size] = data;
        int index = size;
        size++;

        while(index > 0 && arr[(index-1)/2]<arr[index]){
            swap(arr[index], arr[(index-1)/2]);
            index = (index-1)/2;
        }

        cout<<arr[index]<<" is inserted into the heap"<<endl;
    }

    void Heapily(int index){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left < size && arr[left] > arr[largest]) {
            largest = left;
        }
        if(right < size && arr[right] > arr[largest]) {
            largest = right;
        }

        if(largest != index){
            cout<<arr[index]<<" swap to "<<arr[largest]<<endl; // only for understanding
            swap(arr[index], arr[largest]);
            Heapily(largest);
        }
        return;

    }

    void Delete(){
        if(size == 0){
            cout<<"heap is underflow!!";
            return;
        }
        cout<<arr[0]<<" delete from the heap"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size == 0) return;

        Heapily(0);
    }

    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};



int main(){
    MaxHeap hp(6);
    hp.insert(4);
    hp.insert(14);
    hp.insert(11);
    hp.insert(20);
    hp.insert(40);
    hp.display();
    hp.Delete();
    hp.display();
}