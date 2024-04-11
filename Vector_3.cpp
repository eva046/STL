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
    for(i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    if(v.empty()) cout<<endl<< "Before-- " <<"It's Empty"<<endl;
    else cout<<endl<< "Before-- " <<"It's NOT Empty"<<endl;
    v.clear();
    if(v.empty()) cout<<endl<< "After Clearing-- " <<"It's Empty"<<endl;
    else cout<<endl<< "After Clearing-- " <<"It's NOT Empty"<<endl;
}

