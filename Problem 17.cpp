//*[৫২ সমস্যা বই] স্বরবর্ণ গণনা
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
  string s; ll  ans=0;
  getline(cin,s);
  for(int i=0;i<s.size();i++){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
       s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
         ++ans;
       }
  }
  cout<<"Number of vowels = "<<ans<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

         ll t=1; cin>>t;
         cin.ignore();
         while(t--){
           slove();
         }

    return 0;
}
