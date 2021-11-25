//*[৫২ সমস্যা বই] বিভাজনসাধ্য-১
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            ll a,b,c;
            cin>>a>>b>>c;
            if(a%c == 0){
              a=a/c;
            }
            else{
              a= (a/c)+1;
            }
            for(int i=a;;i++){
              if(i*c <= b){
                cout<<i*c<<"\n";
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
           cout<<"\n";
         }

    return 0;
}
