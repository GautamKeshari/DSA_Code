#include<bits/stdc++.h>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    //constructor
    heap(){
        arr[0]=-1;
        size=0;
    }

// FOR INSERTION COMPARE WITH PARENT
    // T.C. => O(log n);
    void insert(int element){
        size=size+1;

        int index=size;
        arr[index]=element;

        //here ,when we put 1st element in heap then we dont't compare it with anyone
        while(index > 1){
            int parent=index/2;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
            }else{
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


// FOR DELETION COMPARE WITH CHILD 
    void deletion(){                     // T.C. => O(log n)
        //put last element into firstindex
        arr[1]=arr[size];

        //remove last element
        size--;

        // step3 - take root node to its correct position
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;

            //find index of maximum of leftchild and rightchild by comparing their value.
            int maxIndex=(arr[leftIndex]>arr[rightIndex]) ? leftIndex : rightIndex;

            if(arr[i] < arr[maxIndex] && maxIndex <= size)
            {
                swap(arr[i],arr[maxIndex]);
                i=maxIndex;
            }else{
                return;
            }
            
        }
    }
};

// here we are putting element of heap with correct position. 
void heapify(int arr[],int n, int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;

    if(left<=n && arr[largest] < arr[left] ){
        largest=left;
    }

    // here ,right<=n condition should be written first.
    if(right<=n && arr[largest] < arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    int size=n;

    //run until size become less than or equal to 1
    while(size > 1){
        // step 1
        swap(arr[1],arr[size]);
        // step 2
        size--;
        // step 3
        heapify(arr,size,1);
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.insert(40);
    h.insert(30);

    h.print();

    h.deletion();

    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;

    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    cout<<"Print the array now: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<endl;

    cout<<"Heap Sort is :"<<endl;
    heapSort(arr,n);
    cout<<"Print the array now: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // minheap
    cout<<"Using priority Queue here"<<endl;
    priority_queue<int,vector<int>,greater<int> >minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<minheap.top()<<endl;

}

