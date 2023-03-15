
//in max heap, elements are stored in decreasing order;
// hence it is known as Max Heap

#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>p;
    int size;
    cout<<"Enter the size-";
    cin>>size;
    for(int i=0;i<size;i++){
        int n;cin>>n;
        p.push(n);
    }
    
    //===============================================================
    cout<<"Elements in max Heap"<<endl;
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    // Elements in max Heap
    // 5 4 3 2 1 
    return 0;
}
