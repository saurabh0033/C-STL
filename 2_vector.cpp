#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //vector is Very useful STL in C++;
    // In vector we does not call the size of int array,which store the same data type of the elements;
    // it provides different inuilt function that ussfull in code;
    
    //push_back()- insert the element in vector;
    //front()- returns the 1st element from vector array;
    //back()- returns the last element from vector array;
    //at()- it takes index and returns the element present on it;
    //reverse()- it reverse the whole vector array in reverse order;
    //sort()- it sort the array in increasing and decreasing order;
    
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(300);
    v.push_back(5);
    v.push_back(-400);
    
    //front():-
    cout<<v.front()<<endl;//O/P- 1;
    
    //back():-
    cout<<v.back()<<endl; //O/P- -400;
    
    //at()-
    cout<<v.at(4)<<endl;// O/P- 300;
    
    //Reverse()-
    reverse(v.begin(),v.end()); //O/P- -400 5 300 4 3 2 1 
    
    //Sort()-
    sort(v.begin(),v.end()); //O/P- -400 1 2 3 4 5 300
    sort(v.rbegin(),v.rend()); //O/P-300 5 4 3 2 1 -400 
    
    for(int i=0; i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}
