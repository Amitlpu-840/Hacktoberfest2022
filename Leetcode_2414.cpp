#include <bits/stdc++.h>
using namespace std;

int longestContinuousSubstring(string s) {
    int cnt=1, ans=1, n=s.size();

    for(int i=0; i<n-1; i++)
    {
        if(s[i]+1 == s[i+1]) cnt++;
        else cnt=1;
        ans = max(ans, cnt);
    }
    return ans;
}

int main()
{
    cout<<"Enter a string ::"<<endl;
    string s;
    cin>>s;
    cout<<longestContinuousSubstring(s)<<endl;
}
