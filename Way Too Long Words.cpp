#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name1;
    cin>>name1;
    int a=name1.length();
    if(a>10)
    {
        cout<<name1[0];
        cout<<a;
        cout<<name1[a-1];
    }
    else
    {
        cout<<name1;
    }


}