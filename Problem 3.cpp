//*প্রবলেম 3 - [৫২ সমস্যা বই] অধোগামী সংখ্যা
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
        ll n=1000;
        for(int i=0;i<n;i++){
          cout<<n-i<<"\t";
          if(i%5 == 4) cout<<"\n";
        }

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
