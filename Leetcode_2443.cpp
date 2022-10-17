#include <bits/stdc++.h>
using namespace std;

bool sumOfNumberAndReverse(int num) {
    bool ans=false;

    for(int i=0;i<=num;i++)
    {
        int temp=num-i;
        int temp1=temp;
        int rev=0;
        while(temp)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }

        if(rev==i)
        {
            ans=true;
            break;
        }
    }
    return ans;
}
int main()
{
    cout<<"Enter a number ::"<<endl;
    int n;
    cin>>n;
    cout<<n<<" can be expressed as the sum of any non-negative integer and its reverse::"<<endl;
    if(sumOfNumberAndReverse(n))
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
