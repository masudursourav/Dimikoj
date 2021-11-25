//*[৫২ সমস্যা বই] শব্দ সাজানো
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
void slove(){
            ll n;cin>>n;
            string a[n];
            for(int i=0;i<n;i++) cin>>a[i];
            sort(a,a+n);
            for(int i=0;i<n;i++) cout<<a[i]<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; //cin>>t;
         while(t--){
           slove();
         }

    return 0;
}
