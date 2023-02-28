#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>ans;
    for(int i=0;i<5;i++){
        ans.insert(ans.end(),3,string(2,'a'+i));
        //insert STL provides us where to insert the element , it present 3 argument 1 where to insert , 2nd one is how many time i.e. count of element and last one is element;
    }
    
    for(auto x:ans)cout<<x<<" ";
    return 0;
}

//O/P- aa aa aa bb bb bb cc cc cc dd dd dd ee ee ee 
