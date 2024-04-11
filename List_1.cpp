#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>thv;
    thv.push_back(1);
    thv.push_back(2);
    thv.push_back(3);
    thv.push_front(7);
    thv.push_front(8);
    thv.push_front(9);
    list<int>::iterator it;
    cout<<"This Is The List = "<<endl;
    /*for(it=thv.begin();it!=thv.end();it++)
    {
        cout<<*it<<" ";
    }*/
    for(auto it:thv)
    {
        cout<<it<< " ";
    }
    cout<<endl;
}
