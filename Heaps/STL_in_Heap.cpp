#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = 0; i < n; i++)
#define ff first
#define ss second
#define srtBits(x) builtin popcount(x)

signed main()
{
    priority_queue<int, vector<int>> pq;
    pq.push(2); //O(log(n))
    pq.push(3);
    pq.push(1);

    cout << pq.top() << endl;
    pq.pop(); //O(log(n))
    cout << pq.top() << endl;
    cout << endl;
    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(2);
    pqm.push(3);
    pqm.push(1);

    cout << pqm.top() << endl;
    pqm.pop();
    cout << pqm.top() << endl; // O(1)

    return 0;
}
