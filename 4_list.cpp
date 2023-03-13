/*
Lists are sequence containers that allow non-contiguous memory allocation. As compared to the vector, 
the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time).
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l1,l2;
    
    //============================================================
    // push_front();
    for(int i=0;i<10;i++){
        l1.push_front(i*2);
    }
    
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    // O/p = 18	16	14	12	10	8	6	4	2	0
    //============================================================
    
    //push_back();
    
     for(int i=0;i<10;i++){
        l2.push_back(i*3);
    }
    
    list<int>::iterator itr;
    for(itr=l2.begin();itr!=l2.end();itr++){
        cout<<*itr<<'\t';
    }
    cout<<endl;
    //o/p = 0	3	6	9	12	15	18	21	24	27
    //=============================================================
    
    //front()- returns 1st element 
    cout<<l1.front()<<endl; //18
    
    //back()- return last element
    cout<<l2.back()<<endl;// 27
    
    l1.pop_front();// pop front element
    l2.pop_back();// pop back element
    cout<<l1.front()<<endl;// 16
    cout<<l2.back()<<endl;// 24
    
    l1.merge(l2); //merge two list
    l1.sort(); // sort in ascending order
    l1.reverse(); // reverse list
    for(auto x:l1)cout<<x<<'\t';
    //o/p = 24	21	18	16	15	14	12	12	10	9	8	6	6	4	3	2	0	0	
    return 0;
}
