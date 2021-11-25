//*[৫২ সমস্যা বই] বাক্স-১
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
        ll n;
        cin>>n;
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            cout<<"*";
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
           if(t!=0)
           cout<<"\n";
         }

    return 0;
}
