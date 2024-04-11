#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>thv={5,6,9,9,8,8,8,7,2,1,9,9,9,9};
    cout<<"Initial list = "<<endl;
    for(auto v:thv) cout<<v<<" ";
    cout<<endl;
    thv.unique();
    cout<<"After applying unique() to The List = "<<endl;
    for(auto v:thv) cout<<v<<" ";
    cout<<endl;
}





