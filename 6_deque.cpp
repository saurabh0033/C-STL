#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int>d1,d2;
    cout<<"Enter Elements in deque- "<<endl;
    for(int i=0;i<7;i++){
        int n;cin>>n;
        d1.push_back(n);
        d2.push_front(n);
    }
    
    //=================================================================
    
    cout<<"Deque After Push_Back Elements-"<<endl;
    deque<int>::iterator itr;
    for(itr=d1.begin(); itr!=d1.end(); itr++){
        cout<<*itr<<" ";
    }
    // Deque After Push_Back Elements-
    // 1 2 3 4 5 6 7 
    
    //===================================================================
    
    cout<<'\n'<<"---------------------------------------------"<<endl;
    cout<<"Deque After push_front Elements-"<<endl;
    deque<int>::iterator it;
    for(it=d2.begin(); it!=d2.end(); it++){
        cout<<*it<<" ";
    }
    // Deque After push_front Elements-
    // 7 6 5 4 3 2 1 
    
    //=====================================================================
    
    cout<<endl;
    //front()-
    cout<<d1.front()<<endl; // o/p=1
    //=====================================================================
     
    //back()-
    cout<<d1.back()<<endl; //o/p=7
    //=====================================================================
     
    //pop_front()-
    d1.pop_front();
    //=====================================================================
    //pop_back()-
    d1.pop_back();
    //=====================================================================
    
    cout<<d1.front()<<endl;//o/p=2
    cout<<d1.back()<<endl;//o/p=6
    
    //=====================================================================
    //size()-
    cout<<d1.size()<<endl;//o/p-5
    cout<<d2.size()<<endl;//o/p-7
    
     //=====================================================================
    //empty()-
    cout<<d1.empty()<<endl;//o/p-0
    
     //=====================================================================
    //swap()
    d1.swap(d2);
    cout<<"Deque1 After swap-"<<endl;
    deque<int>::iterator it1;
    for(it1=d1.begin(); it1!=d1.end(); it1++){
        cout<<*it1<<" ";
    }
    // Deque1 After swap-
    // 7 6 5 4 3 2 1 
    
    //===================================================================
    
    cout<<'\n'<<"---------------------------------------------"<<endl;
    cout<<"Deque2 After swap-"<<endl;
    deque<int>::iterator it2;
    for(it2=d2.begin(); it2!=d2.end(); it2++){
        cout<<*it2<<" ";
    }
    // Deque2 After swap-
    // 2 3 4 5 6 
    
    return 0;
}
