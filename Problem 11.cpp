//*[৫২ সমস্যা বই] গৌণিক / ফ্যাক্টরিয়াল
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
        ll n;cin>>n;
        ll fact = 1;
        for(int i=1;i<=n;i++){
          fact*=i;
        }
        cout<<fact<<"\n";

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
