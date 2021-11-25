//*[৫২ সমস্যা বই] এলিয়েন গুপী
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            double n;
            cin>>n;
            ll ans=0;
            while(n>1){
              n/=2;
              ++ans;
            }
            cout<<ans<<" days"<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
