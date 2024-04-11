#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>th;
    int i;
    th.push(7);//top=0--th[0]=7
    th.push(15);//top=1--th[1]=15
    th.push(13);//top=2--th[2]=13
    th.push(3);//top=3--th[3]=3
    th.push(8);//top=4--th[4]=8
    cout<<"The Stack is = " << endl<<" ";
    while (!th.empty())
    {
        cout << th.top() << " ";
        th.pop();
    }
    /*th.empty=True top=4 th[4]=8 th.pop top=3
    th.empty=True top=3 th[3]=3 th.pop top=2
    th.empty=True top=2 th[2]=13 th.pop top=1
    th.empty=True top=1 th[1]=15 th.pop top=0
    th.empty=True top=0 th[0]=7 th.pop top=-1
    Means stack Empty th.empty=False*/
    cout<<endl;
}





