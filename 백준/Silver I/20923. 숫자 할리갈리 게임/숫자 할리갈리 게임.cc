#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define xx first
#define yy second
#define all(v) (v).begin(), (v).end()

int n, m;
deque<int> d[2], g[2];

int chk() {
    //0이 이길 조건 : 5가 있음
    for (int i = 0; i <= 1; ++i)
        if (!g[i].empty() && g[i].front() == 5) 
            return 0;

    //1이 이길 조건 : 수의 합이 5
    if (!g[0].empty() && !g[1].empty() && g[0].front() + g[1].front() == 5) 
        return 1;

    return -1;
}

int main() {

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        d[0].push_front(a);
        d[1].push_front(b);
    }

    int t = 0;
    while (m--) {
        //        cout << "******" << endl;
        //        cout << "* "; for(int i : d[0]) cout << i << ' '; cout << endl;
        //        cout << "* "; for(int i : g[0]) cout << i << ' '; cout << endl;
        //        cout << "* "; for(int i : d[1]) cout << i << ' '; cout << endl;
        //        cout << "* "; for(int i : g[1]) cout << i << ' '; cout << endl;

                //t가 d에서 g로 뒤집는다.
        g[t].push_front(d[t].front());
        d[t].pop_front();

        //x의 패가 다 떨어졌으면 게임 끝
        if (d[t].empty()) 
            break;

        //결과 확인
        int win = chk();
        if (win != -1) {
            int lose = !win;
            for (int i : {lose, win})
                while (!g[i].empty()) {
                    d[win].push_back(g[i].back());
                    g[i].pop_back();
                }
        }

        t ^= 1;
    }

    if (d[0].size() > d[1].size()) cout << "do";

    else if (d[0].size() < d[1].size()) cout << "su";
    
    else cout << "dosu";
}