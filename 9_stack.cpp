// In stack the Elements are stores in LIFO(Last In First Out) manner

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s,r;
    cout<<"Enter the Size-";
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int n;cin>>n;
        s.push(n);
        r.push(n);
    }
    
    //========================================================
    cout<<"Stack Elements are-"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    // Stack Elements are-
    // 5 4 3 2 1 
    cout<<endl;
    //=========================================================
    
    //size();
    cout<<"size of s stack is-"<<s.size()<<endl;//o/p=0;
    cout<<"Size of r-stack is-"<<r.size()<<endl;//o/p=5;
    
    return 0;
}
