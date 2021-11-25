//*[৫২ সমস্যা বই] ধারার যোগফল - ১
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
void slove(){
            ll n,k;
            cin>>n>>k;
            ll sum=0;
            for(int i=0;i<=k;i++){
              sum+=powl(n,i);
            }
            cout<<"Result = "<<sum<<"\n";

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
