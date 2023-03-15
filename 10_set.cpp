#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>s;
    vector<int>v={10,5,144,12,166,20000,14,2,1,0};
    
    //inserting in set;
    for(int i=0; i<v.size();i++){
        s.insert(v[i]);
    }

    //=========================================================

    //printing elements from set;
    cout<<"Set Elements is-"<<endl;
    set<int>::iterator itr;
    for(itr=s.begin(); itr!=s.end(); itr++){
        cout<<*itr<<" ";
    }
    // Set Elements is-
    // 0 1 2 5 10 12 14 144 166 20000 
    //=========================================================
    //size();
    cout<<'\n'<<s.size()<<endl; // o.p=10
    //=========================================================
    
    //lowerbound();
    int L=*s.lower_bound(13);// o.p- 14
    cout<<L<<endl;
    //=========================================================
    
    //Upper_Bound();
    int U=*s.upper_bound(14);
    cout<<U<<endl;
    
    
    return 0;
}
