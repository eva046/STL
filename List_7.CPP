#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>thv={1,2,3,7,8,7,7};
    cout<<"Initial list = "<<endl;
    for(auto v:thv) cout<<v<<" ";
    cout<<endl;
    thv.remove(7);
    cout<<"After removing 7 from the List = "<<endl;
    for(auto v:thv) cout<<v<<" ";
    cout<<endl;
    thv.reverse();
    cout<<"After Reversing The List = "<<endl;
    for(auto v:thv) cout<<v<<" ";
    cout<<endl;
}



