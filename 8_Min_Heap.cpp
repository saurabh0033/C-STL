
//in min heap, elements are stored in non-decreasing order;
// hence it is known as min Heap

#include<bits/stdc++.h>
using namespace std;
class cmp{
    public:
    bool operator()(int &x, int &y){
        return x>y;
    }
};

// 1 2 = 1>2 return false; 2 1;

int main(){
    priority_queue<int,vector<int>,cmp>p;
    //   OR
    //priority_queue<int,vector<int>,greater<int>>p;
    int size;
    cout<<"Enter the size-";
    cin>>size;
    for(int i=0;i<size;i++){
        int n;cin>>n;
        p.push(n);
    }
    
    //===============================================================
    cout<<"Elements in min Heap"<<endl;
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    // Elements in min Heap
    // 1 2 3 4 5 
    return 0; 
}
