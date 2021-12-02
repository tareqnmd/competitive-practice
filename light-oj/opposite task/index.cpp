#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> problemsStored (int a)
{
    vector<int> res;
    if(a>0)
    {
        if(a>10)
        {
            res.push_back(10);
            res.push_back(a-10);
        }
        else
        {
            res.push_back(0);
            res.push_back(a);
        }
    }
    else
    {
        res.push_back(0);
        res.push_back(0);
    }
    return res;
}

int main()
{
    int cases;
    cin>>cases;
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        int a;
        cin>>a;

        vector<int> ans = problemsStored(a);
        cout<<ans[0]<<ans[1]<<endl;
    }
    return 0;
}
