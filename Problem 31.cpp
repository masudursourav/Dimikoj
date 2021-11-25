//*[৫২ সমস্যা বই] যোগ্য সংখ্যা - ২
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll n;
            cin>>n;
            ll a[] = {6, 28, 496, 8128, 33550336};
            for(int i=0;i<5;i++){
              if(a[i]<n){
                cout<<a[i]<<"\n";
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
           if(t!=0){
             cout<<"\n";
           }
         }

    return 0;
}
