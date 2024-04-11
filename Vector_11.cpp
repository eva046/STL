#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int i;
    v.push_back(3); //v[0]
    v.push_back(0); //v[1]
    v.push_back(9); //v[2]
    v.push_back(8); //v[3]
    v.push_back(5); //v[4]
    vector<int>::iterator vit;
    vit=v.begin()+2;
    //keeping v[2]=9 in vit iterator
    cout<<"  "<<*vit<<endl;
}



