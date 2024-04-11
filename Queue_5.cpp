#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>kv;
    kv.emplace(10);//front=0 rear=0 - kv[0]=10
    kv.emplace(20);//front=0 rear=1 - kv[1]=20
    kv.emplace(30);//front=0 rear=2 - kv[2]=30
    kv.emplace(40);//front=0 rear=3 - kv[3]=40
    kv.emplace(50);//front=0 rear=4 - kv[4]=50
    cout<<"The Queue Is = "<< endl << " ";
    while(kv.size()>0)
    {
        cout<<kv.front()<< " ";
        kv.pop();
    }
    cout<<endl;
}



