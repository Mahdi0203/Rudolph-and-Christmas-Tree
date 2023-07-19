#include<bits/stdc++.h>
using namespace std;
#define Start ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define tc ll t; cin>>t; while(t--)
#define pub(a) push_back(a)
#define sort(a) sort(a.begin(),a.end())
 
void solve()
{
 
    ll n,d,h;
    cin>>n>>d>>h;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    double area = ((d * h) / 2.0);
 
    for(ll i=0; i<n-1; i++){
        if(v[i+1] >= v[i] + h){
            area += ((d * h) / 2.0);
        }
        else{
                long double new_h = (v[i] + h )-v[i+1];
                long double new_d = (d*new_h)/(double)h;
                area += ((d+new_d)/2.0)*(h-new_h);
        }
    }
    printf("%.6lf\n",area);
    //cout<<endl;
}
int main()
{
    Start
 
    tc
    {
        solve();
    }
}
