#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int i;
    v.push_back(3); //v[0]
    v.push_back(0); //v[1]
    v.push_back(8); //v[2]
    v.push_back(9); //v[3]
    v.push_back(5); //v[4]
    cout<<"Initial Vector = ";
    for(i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After Using pop_back(_) = ";
    for(i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}





