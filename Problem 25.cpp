//*[৫২ সমস্যা বই] লঘিষ্ঠ সাধারণ গুণিতক
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll a,b;cin>>a>>b;
            cout<<"LCM = "<<(a*b)/__gcd(a,b)<<"\n";

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
