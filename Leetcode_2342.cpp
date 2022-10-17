#include <bits/stdc++.h>
using namespace std;

int sumOfdigit(int x)
{
    int ans=0;
    while(x)
    {
        ans+=(x%10);
        x/=10;
    }
    return ans;
}

int maximumSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    map<int,vector<int>> m;
    for(int i=0;i<nums.size();i++)
    {
        int getsum=sumOfdigit(nums[i]);
        m[getsum].push_back(nums[i]);
    }
    int ans=-1;
    for(auto x:m)
    {
        if(x.second.size()>=2)
        {
            int temp=x.second.size();
            ans=max(ans,x.second[temp-1]+ x.second[temp-2]);
        }
    }
    return ans;
}

int main()
{
    cout<<"Enter size::"<<endl;
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elemets::";
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    cout<<maximumSum(v)<<endl;
}
