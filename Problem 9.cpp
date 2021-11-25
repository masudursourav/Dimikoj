//*[৫২ সমস্যা বই] পূর্ণবর্গ সংখ্যা
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
        ll n;
        cin>>n;
        ll ns= sqrtl(n);
        if(ns*ns == n){
          cout<<"YES"<<"\n";
        }
        else{
          cout<<"NO"<<"\n";
        }

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
