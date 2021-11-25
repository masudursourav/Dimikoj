//*[৫২ সমস্যা বই] জোড়-বিজোড়-২
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
  string s;
  cin>>s;
  ((s[s.size()-1]-'0') % 2) ? cout<<"odd\n":cout<<"even\n";

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
