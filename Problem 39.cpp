//*[৫২ সমস্যা বই] প্যালিনড্রোম
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            string s,r;
            cin>>s;
            r=s;
            reverse(s.begin(),s.end());
            if(s==r){
              cout<<"Yes! It is Palindrome!"<<"\n";
            }
            else{
              cout<<"Sorry! It is not Palindrome!"<<"\n";
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
