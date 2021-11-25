//*[৫২ সমস্যা বই] বৃত্তের বাইরে
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

void input(){freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}

void slove(){
            double x,y,r,xi,yi;
            cin>>x>>y>>r>>xi>>yi;
            double dis = sqrt((x-xi)*(x-xi) + (y-yi)*(y-yi));
            if(dis>r){
              cout<<"The point is not inside the circle"<<"\n";
            }
            else{
              cout<<"The point is inside the circle"<<"\n";
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
