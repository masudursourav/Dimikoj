//*[৫২ সমস্যা বই] হীরক রাজ্য
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll a,b;
            cin>>a>>b;
            for(int i=0;i<a;i++){
              for(int j=0;j<=i;j++){
                cout<<b;
                if(j!=i) cout<<" ";
              }
              cout<<"\n";
            }
            for(int i=a-1;i>0;i--){
              for(int j=1;j<=i;j++){
                cout<<b;
                if(j!=i) cout<<" ";
              }
              cout<<"\n";
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
