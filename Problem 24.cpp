//*[৫২ সমস্যা বই] একান্তর উপাদান
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll n;cin>>n;
            ll space = n/2 - 1;
            for(int i=0;i<n;i++){
              ll input;
              cin>>input;
              if(i%2==0){
                cout<<input;
                if(i+2 < n){
               cout<<" ";
             }
           }
            }
            cout<<"\n";

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
