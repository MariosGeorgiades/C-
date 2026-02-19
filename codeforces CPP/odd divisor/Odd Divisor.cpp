#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n & 1){
            cout<<"YES"<<endl;
        }
        else{
            bool ok = false;
            ll div = n;
            while(div > 2){
                div /= 2;
                if(div & 1){
                    if(n % div == 0){
                        ok = true;
                        break;
                    }
                }
            }
            if(ok){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
