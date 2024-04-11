#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>thv;
    thv.push_back(1);
    thv.push_back(2);
    thv.push_back(3);
    thv.push_back(7);
    thv.push_back(8);
    cout<<"Initial list = "<<endl;
    for(auto v:thv)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    //iterator declaration
    list<int>::iterator me;
    me=thv.begin();
    advance(me,3);
    // here 3 is the 3rd position
    thv.insert(me,2,100);
    cout<<"After entering 100 in 3rd index of List 2 times= "<<endl;
    for(auto v:thv)
    {
        cout<<v<<" ";
    }
    cout<<endl;
}


