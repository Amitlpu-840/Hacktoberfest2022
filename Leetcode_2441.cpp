#include <bits/stdc++.h>
using namespace std;

int findMaxK(vector<int>& nums) {
    unordered_set<int> s(nums.begin(),nums.end());
    int ans=0;
    for(auto x:s)
    {
        if(x>0)
        {
            if(s.find(-1*x)!=s.end())
            {
                ans=max(ans,x);
            }
        }
    }

    if(ans!=0)
    {
        return ans;
    }
    else{
        return -1;
    }
}

int main()
{
    cout<<"Enter size ::"<<endl;

    int n;
    cin>>n;

    vector<int> v(n);
    cout<<"Enter elements::"<<endl;
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    cout<<findMaxK(v)<<endl;
}
