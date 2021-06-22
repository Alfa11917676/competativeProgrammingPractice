#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#include <functional>
#include <list>
#include <cstring>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <limits>
#include <cfloat>
#include <iomanip>
#include <random>

using namespace std;

const int MaxN = 6e3 + 6;

bool isUsed[MaxN][MaxN];
int w, h;

struct House
{
    int y;
    int l, c;

    bool operator<(const House &oth) const
    {
        return y < oth.y;
    }
};
vector<House> houses[MaxN];

struct Antena
{
    int num, range, con;

    bool operator<(const Antena &oth) const
    {
        return con * (1 + range) > oth.con * (1 + oth.range);
    }
};

vector<Antena> antenas;

bool isValid(int x, int y)
{
    return x >= 0 && x < w && y >= 0 && y < h;
}

long long GetProfit(int x, int y, int range, int con)
{
    long long sum = 0;
    for (int xx = x - range; xx <= x + range; ++xx)
    {
        if (xx < 0 || xx >= w)
        {
            continue;
        }
        int dif = range - abs(x - xx);
        int ly = y - dif;
        int ry = y + dif;

        auto it = lower_bound(houses[xx].begin(), houses[xx].end(), House{ly, 0, 0});

        while (it != houses[xx].end() && it->y <= ry)
        {
            if (it->c != -1)
            {
                sum += con * it->c - (abs(x - xx) + abs(y - it->y)) * it->l;
            }
            ++it;
        }
    }

    return sum;
}

struct AnsItem
{
    int x, y, id;
};

vector<AnsItem> ans;

void PlaceAntena(int x, int y, const Antena &a)
{
    ans.push_back({x, y, a.num});

    for (int xx = x - a.range; xx <= x + a.range; ++xx)
    {
        if (xx < 0 || xx >= w)
        {
            continue;
        }
        int dif = a.range - abs(x - xx);
        int ly = y - dif;
        int ry = y + dif;

        auto it = lower_bound(houses[xx].begin(), houses[xx].end(), House{ly, 0, 0});

        while (it != houses[xx].end() && it->y <= ry)
        {
            it->c = it->l = -1;
            ++it;
        }
    }

    isUsed[x][y] = true;
}

int main()
{
    freopen("b.in", "r", stdin);
    freopen("b.out", "w", stdout);

    srand(time(NULL));

    cin >> w >> h;

    int n, m, r;
    cin >> n >> m >> r;

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        int l, c;
        cin >> l >> c;
        houses[x].push_back({y, l, c});
    }

    for (int i = 0; i < w; ++i)
    {
        sort(houses[i].begin(), houses[i].end());
    }

    for (int i = 0; i < m; ++i)
    {
        int range, con;
        cin >> range >> con;
        antenas.push_back({i, range, con});
    }

    sort(begin(antenas), end(antenas));

    int iteration = 0;

    for (const auto &a : antenas)
    {
        int ax, ay;
        long long aScore = -1e18;

        // for (int i = 0; i < w; ++i)
        // {
        //     for (int j = 0; j < h; ++j)
        //     {
        //         if (!isUsed[i][j])
        //         {
        //             long long curScore = GetProfit(i, j, a.range, a.con);
        //             if (curScore > aScore)
        //             {
        //                 aScore = curScore;
        //                 ax = i;
        //                 ay = j;
        //             }
        //         }
        //     }
        // }

        const int T = 10000;

#pragma omp parallel for
        for (int tt = 0; tt < T; ++tt)
        {
            while (true)
            {
                int i = rand() % w;
                int j = rand() % h;
                if (isUsed[i][j])
                {
                    continue;
                }

                long long curScore = GetProfit(i, j, a.range, a.con);
                if (curScore > aScore)
                {
                    aScore = curScore;
                    ax = i;
                    ay = j;
                }

                break;
            }
        }

        if (aScore > 0)
        {
            PlaceAntena(ax, ay, a);
        }
        cerr << ++iteration << " / " << antenas.size() << '\n';
    }

    cout << ans.size() << '\n';
    for (const auto &t : ans)
    {
        cout << t.id << ' ' << t.x << ' ' << t.y << '\n';
    }

    return 0;
}