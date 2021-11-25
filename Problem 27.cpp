//*[৫২ সমস্যা বই] আর্মস্ট্রং সংখ্যা
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll n;
            cin>>n;
            cout<<n;
            ll a=n/100,b=(n%100)/10,c=n%10;
            if(((a*a*a)+(b*b*b)+(c*c*c))==n){
              cout<<" is an armstrong number!"<<"\n";
            }
            else{
              cout<<" is not an armstrong number!"<<"\n";
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
