//*[৫২ সমস্যা বই] চিহ্ন পরিচয়
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            char c;
            cin>>c;
            if(c>='A' && c<='Z'){
              cout<<"Uppercase Character"<<"\n";
            }
            else if(c>='a' && c<='z'){
              cout<<"Lowercase Character"<<"\n";
            }
            else if(c>='0' && c<='9'){
              cout<<"Numerical Digit"<<"\n";
            }
            else{
              cout<<"Special Character"<<"\n";
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
