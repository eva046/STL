#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>thv={1,2,3,7,8};
    cout<<"Initial list = "<<endl;
    for(auto v:thv)
    {
        cout<<v<<" ";
    }
    cout<<endl;
    //iterator declaration
    list<int>::iterator me,me1;
    me1=thv.begin();
    advance(me1,3);
    me=thv.begin();
    // here 3 is the 3rd position
    thv.erase(me,me1);
    //erasing 3 elements from the front
    cout<<"After erasing the 1st 3 Values of List= "<<endl;
    for(auto v:thv)
    {
        cout<<v<<" ";
    }
    cout<<endl;
}


