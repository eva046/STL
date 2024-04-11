#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>thv={1,0,5,22,2,100,0};
    cout<<"Initial list = "<<endl;
    for(auto v:thv) cout<<v<<" ";
    cout<<endl;
    thv.sort();
    cout<<"After Sorting The List = "<<endl;
    for(auto v:thv) cout<<v<<" ";
    cout<<endl;
}




