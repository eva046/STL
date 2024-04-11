#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1,v2;
    int i;
    v1.push_back(1); //v1[0]
    v1.push_back(2); //v1[1]
    v1.push_back(3); //v1[2]
    v2.push_back(100); //v2[0]
    v2.push_back(200); //v2[1]
    v2.push_back(300); //v2[2]
    cout<<"Before Swapping = "<<endl<<"v1 = ";
    for(i=0; i<v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl<<"v2 = ";
    for(i=0; i<v2.size(); i++)
    {
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;
    swap(v1,v2);
    cout<<"After Swapping = "<<endl<<"v1 = ";
     for(i=0; i<v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl<<"v2 = ";
    for(i=0; i<v2.size(); i++)
    {
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;
}


