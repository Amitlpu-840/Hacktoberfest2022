#include <bits/stdc++.h>
using namespace std;

int countDistinctIntegers(vector<int>& nums) {

    vector<int> rev;
    unordered_set<int> s(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        int temp=0;

        while(nums[i])
        {
            temp=temp*10+nums[i]%10;
            nums[i]/=10;
        }
        rev.push_back(temp);
    }

    for(auto x:rev)
    {
        s.insert(x);
    }
    return s.size();
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
    cout<<countDistinctIntegers(v)<<endl;
}
