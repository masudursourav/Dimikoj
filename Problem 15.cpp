//*Here I go out to sea again
//*The sunshine fills my hair
//*And dreams hang in the air
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            string s;
            cin>>s;
            ll a[26]={0};
            for(int i=0;i<s.size();i++){
              ++a[s[i]-'a'];
            }
            for(int i=0;i<26;i++){
              if(a[i]!=0)
              cout<<(char)('a'+i)<<" = "<<a[i]<<"\n";
            }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; cin>>t;
         while(t--){
           slove();
           if(t!=0) cout<<"\n";
         }

    return 0;
}
