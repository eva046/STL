#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>kv;
    kv.push(10);//front=0 rear=0 - kv[0]=10
    kv.push(20);//front=0 rear=1 - kv[1]=20
    kv.push(30);//front=0 rear=2 - kv[2]=30
    kv.push(40);//front=0 rear=3 - kv[3]=40
    kv.push(50);//front=0 rear=4 - kv[4]=50
    cout<<" The Front Of The Queue Is = "<<kv.front()<<endl;
    cout<<" The Back Of The Queue Is = "<<kv.back()<<endl;
}

