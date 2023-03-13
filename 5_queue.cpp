
/*
Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q,qq;
    
//=============================================================
    cout<<"Insert Elements in queue-"<<'\n';
    for(int i=0;i<7;i++){
        int n;
        cin>>n;
        q.push(n);
    }
    
    //iterration
    cout<<"queue is="<<'\n';
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    // Insert Elements in queue-
    // 1 2 3 4 5 6 7
    // queue is=
    // 1 2 3 4 5 6 7 
    
//=============================================================
    qq.push(10);
    qq.push(12);
    qq.push(14);
    qq.push(16);
    
    //front()
    cout<<'\n'<<qq.front()<<'\n'; //o/p-10;
    
    //size()
    cout<<qq.size()<<endl; //o/p- 4
    
    //back()
    cout<<qq.back()<<endl; //o/p= 16
    
    //pop()
    qq.pop();
    cout<<qq.front()<<endl;//o/p- 12
    
    //empty()
    cout<<qq.empty()<<endl;//o/p- 0
}
