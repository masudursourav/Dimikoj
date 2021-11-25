//*[৫২ সমস্যা বই] বিভাজনসাধ্য-২
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll a,b,c;
            cin>>a>>b>>c;
            ll k=a*b/__gcd(a,b);
            for(int i=k;;i+=k){
              if(i <= c){
                cout<<i<<"\n";
              }
              else{
                break;
              }
            }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; cin>>t;
         while(t--){
           slove();
           if(t!=0)
           cout<<"\n";
         }

    return 0;
}
