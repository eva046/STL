#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>kv,kt;
    kv.emplace(100);//front=0 rear=0 - kv[0]=100
    kv.emplace(200);//front=0 rear=1 - kv[1]=200
    kv.emplace(300);//front=0 rear=2 - kv[2]=300
    kt.emplace(1);//front=0 rear=0 - kt[0]=1
    kt.emplace(2);//front=0 rear=1 - kt[1]=2
    kt.emplace(3);//front=0 rear=2 - kt[2]=3
    cout<<"Before Swapping ="<< endl ;
    cout<<"The kv Queue Is = ";
    queue<int>temp1=kv;
//used temp1 queue to save that old queue to print later
    while(temp1.size()>0)
    {
        cout<<temp1.front()<< " ";
        temp1.pop();
    }
    cout<<endl;
    cout<<"The kt Queue Is = ";
    queue<int>temp2=kt;
    while(temp2.size()>0)
    {
        cout<<temp2.front()<< " ";
        temp2.pop();
    }
    cout<<endl;
    kt.swap(kv);
    cout<<endl<<"After Swapping ="<< endl ;
    cout<<"The kv Queue Is = ";
    while(kv.size()>0)
    {
        cout<<kv.front()<< " ";
        kv.pop();
    }
    cout<<endl;
    cout<<"The kt Queue Is = ";
    while(kt.size()>0)
    {
        cout<<kt.front()<< " ";
        kt.pop();
    }
    cout<<endl;
}





















