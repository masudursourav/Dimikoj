//*[৫২ সমস্যা বই] X এর গুণিতক
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll x,n;
            cin>>x>>n;
            if(x>n){
              cout<<"Invalid!"<<"\n";
              return;
            }
            for(int i=x;i<=n;i+=x){
                cout<<i<<"\n";
            }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; cin>>t;
         while(t--){
           slove();
             cout<<"\n";
         }

    return 0;
}
