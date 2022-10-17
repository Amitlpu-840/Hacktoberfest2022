#include <bits/stdc++.h>
using namespace std;

int longestNiceSubarray(vector<int>& nums) {

    int num=0;
    int j=0;
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        while( (num & nums[i]) != 0)
        {
            num^=nums[j++];
        }
        num|=nums[i];
        ans=max(ans,i-j+1);
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
    cout<<longestNiceSubarray(v)<<endl;
}
