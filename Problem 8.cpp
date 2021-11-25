//*[৫২ সমস্যা বই] ছোট থেকে বড়
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
  ll a[3];
  cin>>a[0]>>a[1]>>a[2];
  sort(a,a+3);
  cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1,i=0; cin>>t;
         while(t--){
           cout<<"Case "<<++i<<": ";
           slove();
         }

    return 0;
}
