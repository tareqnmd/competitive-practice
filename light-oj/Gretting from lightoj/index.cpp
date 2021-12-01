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
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        int a,b;
        cin>>a>>b;
        cout<<"Case "<<caseno<<": "<<sum(a, b)<<endl;
    }
    return 0;
}
