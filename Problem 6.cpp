//*[৫২ সমস্যা বই] যোগফল নির্ণয়
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
      ll n;cin>>n;
      cout<<(n/10000) +(n%10)<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; cin>>t;
         while(t--){
           cout<<"Sum = ";
           slove();
         }

    return 0;
}
