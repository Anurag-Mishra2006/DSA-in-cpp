#include <bits/stdc++.h>
using namespace std;

// ------------------ Macros & Typedefs ------------------
#define int long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define pb push_back
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
const int INF = 1e18;
const int MOD = 1e9 + 7;
const int MAXN = 2e5 + 5;

// ------------------ Fast I/O ------------------
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// ------------------ Vector Print ------------------
template <typename T>
void printVec(vector<T> &v) {
    for (auto &x : v) cout << x << " ";
    cout << "\n";
}

// ------------------ Map Print ------------------
template <typename K, typename V>
void printMap(map<K, V> &mp) {
    for (auto &p : mp)
        cout << p.first << ": " << p.second << "\n";
}

// ------------------ Prefix Sum ------------------
vi prefixSum(const vi &a) {
    int n = a.size();
    vi ps(n + 1);
    rep(i, 0, n) ps[i + 1] = ps[i] + a[i];
    return ps;
}

// ------------------ Graph, DFS, BFS ------------------
vi adj[MAXN];
bool visited[MAXN];

void dfs(int node) {
    visited[node] = true;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor])
            dfs(neighbor);
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// ------------------ Sieve of Eratosthenes ------------------
vector<bool> isPrime;
void sieve(int n) {
    isPrime.assign(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
}

// ------------------ Miller-Rabin Primality ------------------
int power(int a, int b, int mod) {
    int res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

bool millerTest(int d, int n) {
    int a = 2 + rand() % (n - 4);
    int x = power(a, d, n);
    if (x == 1 || x == n - 1) return true;
    while (d != n - 1) {
        x = (x * x) % n;
        d *= 2;
        if (x == 1) return false;
        if (x == n - 1) return true;
    }
    return false;
}

bool isPrimeMR(int n, int k = 5) {
    if (n <= 1 || n == 4) return false;
    if (n <= 3) return true;
    int d = n - 1;
    while (d % 2 == 0) d /= 2;
    for (int i = 0; i < k; i++)
        if (!millerTest(d, n))
            return false;
    return true;
}

// ------------------ General Helpers ------------------
template <typename K, typename V>
K getMaxKey(map<K, V> &mp) {
    return max_element(mp.begin(), mp.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    })->first;
}

template <typename K, typename V>
K getMinKey(map<K, V> &mp) {
    return min_element(mp.begin(), mp.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    })->first;
}

map<int, int> getFreq(const vi &v) {
    map<int, int> freq;
    for (auto x : v) freq[x]++;
    return freq;
}

bool cmpByValDesc(const pii &a, const pii &b) {
    return a.second > b.second;
}

void sortStrings(vs &v) {
    sort(all(v));
}

// ------------------ Main Function ------------------
int32_t main() {
    fastIO();


    return 0;
}