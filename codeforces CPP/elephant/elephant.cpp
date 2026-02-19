#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int ans=0;
    int v[]={5,4,3,2,1};
    cin>>n;

    for(int i=0; i<5; i++)
    {
        ans+=n/v[i];
        n=n%v[i];
    }
    cout<<ans<<endl;
    return 0;
}
