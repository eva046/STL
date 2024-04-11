#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>thv1={50,60,70,80,90};
    list<int>thv2={5000,6000,7000,8000,9000};
    cout<<"Initially :- "<<endl<<"thv1 = ";
    for(auto v:thv1) cout<<v<<" ";
    cout<<endl<<"thv2 = ";
    for(auto v:thv2) cout<<v<<" ";
    cout<<endl;
    thv1.swap(thv2);
    cout<<"After :- "<<endl<<"thv1 = ";
    for(auto v:thv1) cout<<v<<" ";
    cout<<endl<<"thv2 = ";
    for(auto v:thv2) cout<<v<<" ";
    cout<<endl;
}





