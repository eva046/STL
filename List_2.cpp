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
    cout<<"Initially:-"<<endl<<"This Is The List = "<<endl;
    for(auto it:thv) cout<<it<< " ";
    cout<<endl;
    cout<<"Front Value of The List Is = "<<thv.front()<<endl;
    cout<<"Back Value of The List Is = "<<thv.back()<<endl;
    thv.pop_back();
    cout<<"After Applying pop.back(_) = "<<thv.back()<<endl;
    thv.pop_front();
    cout<<"After Applying pop.front(_) = "<<thv.front()<<endl;
}

