//*[৫২ সমস্যা বই] এলোমেলো অ্যারে
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll n;
            cin>>n;
            bool as=true,dis=true;
            vector<ll>a(n);
            for(int i=0;i<n;i++){
              cin>>a[i];
            }
            for(int i=1;i<n;i++){
              if(a[i-1] > a[i]){
                as =false;
                break;
              }
            }
            for(int i=1;i<n;i++){
              if(a[i-1] < a[i]){
                dis = false;
                break;
              }
            }
            if(as || dis)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";

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
