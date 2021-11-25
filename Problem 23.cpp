//*[৫২ সমস্যা বই] বর্ণমালা থেকে সংখ্যা
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            string s;
            cin>>s;
            for(int i=0;i<s.size();i++){
              cout<<(s[i]-'A')+1;
            }
            cout<<"\n";

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
