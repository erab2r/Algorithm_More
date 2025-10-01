#include<bits/stdc++.h>
using namespace std;
string a,b;
int lcs(int i,int j)
{
    if(a[i] == b[j])
    {
        return lcs(i-1,j-1) + 1;
    }
    else
    {
        int op1 = lcs(i-1,j);
        int op2 = lcs(i,j-1);
        return max(op1,op2);
    }
}
int main()
{
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    lcs(n-1,m-1);
    return 0;
}