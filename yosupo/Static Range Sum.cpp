/*                                          ........:::::::::::::::::..........
                                       ..::::::::::::::::::::::::::::::....
                               .......:::::::::::::::::::::::::----------::....
                            .......::::::::::::::::::::::::::::-------------:.....
                            .....:::::::::::::::::::::::::::::-----------------...
                        .......:::::::::::::::::::::::::::::::-------------------.....
                        .....::::=+#=::::::-+#*%-:::::::::::--------------------:...
                        ....::::+:.+=:::::=*:..-#:::::::::::----------------------.....
                        ...::::#..=+:::::=#-...**:::::::::::------------------==---....
                     ....:::::#%=*%=::::-%%-..*@-::::::::---------------------===---...
                     ...:::::+@@@@*:::::+@@@@@@%:::::::----------------------====---..
                     ..:::::-%@@@#-::::-@@@@@@@-:::::------------------------=====---.....
                     ..:::::=#%%%=:::::-@@@@@@*::::--------------------------=====---:....
                     .::::::+###+::::::-%%%%%*:::----------------------------======---....
                     .:------%%=:::::::-%##%+--------------------------------======---:...
   ............ ....::-----:::::::::::::=*+--------------------------------==========---...
   ............ ....:::---::::::::::::::::::------=---=--------------------==========---..
....-++******-.......:::::::::::*##%###=:::--------=======--------------=============---...
...-*******######:...::::::::---=#******+:------------------------------===============---...
...=*++******#####%#+--:---::::--+=++=:-------------------------------==-========---------..
...-*********#####%%%+-------::::-------------------------+*********+-=========------------..
   -***+******#####%%#=-------------------------------=***+++++******#+====---------------....
   .=**********####%%%+----------------------=+*+++++++************===----------------...
   .:+**********####%%#--------------------------=+***+++***************#*===-------------==:..
   ..-************####%%*----------------------==+++++******************##*==-------------=-=..
   ...-************####%%+--------------------==**+*********************##+===-----------===-.
   ....-**********####%%%+--------------=====+************************###**====----------==-=.
   .....:+*********####%%#+=================+************************####**+====----------===:....
       ...+*********####%%#+===============+************************#####*+=====---------==--....
       ....-*********####%%%*===================++************************#######*+=====---------===-......
          ..:+*******####%%%#============+************************#######*+=====-------=====-......
          ....-*******#####%%%%*=========++*********************#########*+=======------====-:......
          ......=******#########-----====+************************#########*==================--.......
              ...:=****########======---==*********************#########*=-===============--......
              ......-***#####+========---=+*********************#######**=----===========--:......
              ........:-=+==-----:::::::--+*********************########*========++=====--::......
                 .......................:::=******************#########+=============---::........
                     .........-************#########*+=====--------::::.......
                                  .............=#****##########*+-----:::::::::.............
                                       ..........:-=+******+=-::::........................
                                         .. ...........:....................... ...
                                              ....................
                                                    ..                           */
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iterator>
#include <new>
#include <numbers>
#include <numeric>
#include <queue>
#include <set>
#include <tuple>
#include <type_traits>
#include <utility>
#include <vector>
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <climits>
#include <codecvt>
using namespace std;
typedef long long ll;
typedef long long int lli ;
typedef unsigned long long  ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii>  vii;
//int memo[100];
//int n = 0;
//vi memo(n,-1);
//memset(memo, -1, sizeof memo);
int arr[10];
//memset(arr, 0, sizeof arr);
const int INF =1e9;
const ll LLINF = 4e18;
const double ESP = 1e-19;
//++i;
int a,b,c,val, d;
//ans =a ? b : c;
//ans+=val;
//index = (index + 1)%n;
//index = (index +n-1)%n;
int ans =(int)((double)d+0.5);
//ans = min(ans, new_computation);

const int MAX = 10e6;
#define tie ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define all(x) (x).begin(), (x).end()
/*vector<ll> adj[200010];
bool vis[200010];
ll n,total=0;
bool cc[200010];
void dfs(ll s,unsigned long long  sum){
    if(vis[s])
        return;

    vis[s]=1;

    if(cc[s])
        sum++;
    else
        sum=0;

    if(sum>total){
        total = sum;
    }
    for(int i=0;i<adj[s].size();i++){
        dfs(adj[s][i],sum);
    }
}*/
ll const MOD=1e9+7;
ll inverso(ll x){
    ll res=1;
    ll expo= MOD-2;
    while(expo > 0){
        if(expo&1){
            res=(res*x)%MOD;
        }
        x=(x*x)%MOD;
        expo>>=1;
    }
    return res;
}
//primos?
bool prim(ll n) {
    if(n <= 1) return 0;
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

// PRIMOS CRIBA
vector<ll> primos;
bitset<(ll)2e5> stt;
unsigned long long cont=0;
void criba(){
    for(ll i=2; i*i<=(ll)2e5; i++){
        if(primos.size()>(ll)2e5) return;
        if(stt[i]) continue;
        primos.pb(i);
        for(ll j=i+i; j*j<=(ll)2e5; j+=i){
            if(j>(ll)1e5) return;
            stt[j]=1;
        }
    }
}

vector<int> p(int limit){
    vector<char> prime(limit+1, true);
    prime[0]=prime[1]=false;
    for(int p=2;p*p<=limit;++p) if(prime[p])
        for(int q=p*p;q<=limit;q+=p) prime[q]=false;
    vector<int> primes;
    for(int i=2;i<=limit;++i) if(prime[i]) primes.pb(i);
    return primes;
}

int pf(ll n, const vector<int>& primes){
    if(n<=1) return 0;
    int cont = 0;
    for(int p: primes){
        ll pp = (ll)p * p;
        if(pp > n) break;
        if(n % p == 0){
            cont++;
            while(n % p == 0) n /= p;
        }
    }
    if(n > 1) cont++; 
    return cont++;
}
int n,k;
vector<ll> vc;
bool CP(ll lim){
    int lines =1;
    ll c=0;
    ll cn=0;
    for(int i =0; i< n; i++){
        if(cn==0){
            c=vc[i];
            cn=1;
        }else{
            if(c+1+vc[i]<=lim){
                c=c+1+vc[i];
                cn++;
            }else{
                lines++;
                c=vc[i];
                cn=1;
            }
        }
        if(lines>k) return false;
    }
    return true;
}


int bfs(long long x, long long y) {
    if (x == y) return 0;
    
    unordered_map<long long,int> dist;
    queue<long long> q;
    dist[y] = 0;
    q.push(y);

    while (!q.empty()) {
        long long cur = q.front(); q.pop();

        vector<long long> nexts;
        nexts.push_back(cur + 1);
        if (cur % 2 == 0)
            nexts.push_back(cur / 2);

        for (long long nxt : nexts) {
            if (nxt < 0) continue;
            if (dist.count(nxt)) continue;
            dist[nxt] = dist[cur] + 1;
            if (nxt == x) return dist[nxt];
            q.push(nxt);
        }
    }
    return -1;
}


void solve() {
   int n, m; cin >>n>>m;
   vector<unsigned long long> v(n);
   long long x;
   for(int i =0; i <n; i++){
        cin >> x;
        if(i>0){
            v[i]=v[i-1]+x;
        }else{
            v[i]=x;
        }
        //cout<<v[i]<<"\n";
   }
   int l, r;
   for(int i =0; i <m; i++){
        cin >> l >>r;
        if(l > 0) cout<<v[r-1]-v[l-1]<<"\n";
        else cout<<v[r-1]<<"\n";
   }
   
}

int main() {ios::sync_with_stdio(false);cin.tie(nullptr);
    int t=1; //cin>>t;
    while(t--){
        solve();
    }  
    return 0;
}