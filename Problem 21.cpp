//*[৫২ সমস্যা বই] উল্টে দেখা
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s<<"\n";

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
