//*[৫২ সমস্যা বই] যোগ্য সংখ্যা - ১
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll n;
            cin>>n;
            ll sum=0;
            for(int i=1;i<=sqrtl(n);i++){
              if(n%i == 0){
                if((n/i) == i){
                  sum+=i;
                }
                else{
                  sum+=i;
                  sum+=(n/i);
                }
              }
            }
            sum-=n;
            if(sum == n){
              cout<<"YES, "<<n<<" is a perfect number!"<<"\n";
            }
            else{
              cout<<"NO, "<<n<<" is not a perfect number!"<<"\n";
            }

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
