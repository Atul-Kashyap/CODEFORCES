#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
int a[10000];
vector<int> v[10000000];
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 ll n,m;
 string str1,str2;
 for(int i = 0; i < 27; i++)
 v[i].pb(0);
 cin >> n >> str1 >> m;
 for(int i = 0; i < n; i++)
  v[str1[i] - 'a'].pb(i+1);
 while(m--){
  for(int i = 0; i<26; i++)
  a[i] = 0;
  cin >> str2;
  int s = str2.size();
  for(int i = 0; i < s; i++)
   a[str2[i] - 'a']++; 
  int cnt = 0;
  for(int i = 0; i < 26; i++)
   cnt = max(cnt, v[i][a[i]]);
  cout << cnt << endl;
  cnt = 0;
 }
 return 0;
}      

-------------------------------------


    //#pragma GCC optimize("O3")
    //#pragma GCC target("arch=corei7-avx")
    #include <bits/stdc++.h>
    #ifndef ONLINE_JUDGE
    # include <sys/time.h>
    # include <sys/resource.h>
    #endif
     
    /*** TEMPLATE CODE STARTS HERE ***/
     
    #ifndef M_PI
    #define M_PI 3.1415926535897932384626433832795028841971693993751
    #endif
     
    using namespace std;
     
    typedef vector<string> vs;
    typedef long long ll;
    typedef complex<double> pnt;
    typedef vector<int> vi;
    typedef vector<ll> vll;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
     
    #define RA(x) begin(x), end(x)
    #define FE(i, x) for (auto i = begin(x); i != end(x); ++i)
    #define SZ(x) ((ll) (x).size())
     
    template<class T>
    void splitstr(const string &s, vector<T> &out)
    {
        istringstream in(s);
        out.clear();
        copy(istream_iterator<T>(in), istream_iterator<T>(), back_inserter(out));
    }
     
    template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
     
    static void redirect(int argc, const char **argv)
    {
    #ifndef ONLINE_JUDGE
        struct rlimit rlim;
        getrlimit(RLIMIT_STACK, &rlim);
        rlim.rlim_cur = 256 * 1024 * 1024;
        setrlimit(RLIMIT_STACK, &rlim);
    #ifndef __SANITIZE_ADDRESS__
        getrlimit(RLIMIT_DATA, &rlim);
        rlim.rlim_cur = 256 * 1024 * 1024;
        setrlimit(RLIMIT_DATA, &rlim);
    #endif
    #endif
     
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        if (argc > 1)
        {
            static filebuf f;
            f.open(argv[1], ios::in);
            cin.rdbuf(&f);
            if (!cin)
            {
                cerr << "Failed to open '" << argv[1] << "'" << endl;
                exit(1);
            }
        }
     
        if (argc > 2)
        {
            static filebuf f;
            f.open(argv[2], ios::out | ios::trunc);
            cout.rdbuf(&f);
            if (!cout)
            {
                cerr << "Failed to open '" << argv[2] << "'" << endl;
            }
        }
        cin.exceptions(ios::failbit);
    }
     
    /*** TEMPLATE CODE ENDS HERE */
     
    int main(int argc, const char **argv)
    {
        redirect(argc, argv);
        int N, M;
        string s;
        cin >> N >> s >> M;
        array<vi, 26> pos;
        for (int i = 0; i < 26; i++)
            pos[i].push_back(-1);
        for (int i = 0; i < N; i++)
            pos[s[i] - 'a'].push_back(i);
        for (int i = 0; i < M; i++)
        {
            string name;
            cin >> name;
            vi freq(26);
            for (char c : name)
                freq[c - 'a']++;
            int ans = 0;
            for (int i = 0; i < 26; i++)
                ans = max(ans, pos[i][freq[i]] + 1);
            cout << ans << '\n';
        }
     
        return 0;
    }
