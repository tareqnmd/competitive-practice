#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int cases;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<"Case "<<i+1<<": "<<sum(a, b)<<endl;
    }
    return 0;
}
