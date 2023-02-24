#include<bits/stdc++.h>
using namespace std;

int main(){
    //this is the Array STL in C++ Where we have to must call the size of the array that we have to created.
    // Array STL have provide the different inbuilt function in cpp
    //front()- returns the 1st element of the array;
    //back() - return last element of the array;
    //sort()- sort the element in array;
    //at()- it returns the index data in array;
    array<int,9>a={1,2,100,2,4,5,3,4,5};
    
    // Back()-
    cout<<a.back()<<endl; //o/p-5

    // Front()-
    cout<<a.front()<<endl; //O/P-1
    
    //at()- 
    cout<<a.at(2)<<endl;// O/P-100
    
    //Sort()-
    sort(a.begin(),a.end()); // O/P- 1 2 2 3 4 4 5 5 100 
    sort(a.begin(),a.end(),greater<int>()); // deacreasing order.
    //iteration;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
