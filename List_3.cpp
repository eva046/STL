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
    cout<<"This Is The List = "<<endl;
    for(auto it:thv) cout<<it<< " ";
    cout<<endl;
    cout<< "Initially, The Size Of The List Is = "<<thv.size()<<endl;
    thv.clear();
    cout<< "After Clearing The List The Size Of It = "<<thv.size()<<endl;
}


