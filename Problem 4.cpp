//*[৫২ সমস্যা বই] ভাজক
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
 ll n;
 cin>>n;
 for(int i=1;i<=n;i++){
   if(n%i == 0){ cout<<i;
   if(i!=n) cout<<" ";
 }
 }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1,i=0; cin>>t;
         while(t--){
           cout<<"Case "<<++i<<": ";
           slove();
           cout<<"\n";
         }

    return 0;
}
