#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<long long> h(n);
  for (int i = 0; i < n; i++) cin >> h[i];
  // dp（コスト)の定義
  vector<long long> dp(n, INF);
  dp[0] = 0;
  for (int i = 0; i < n; i++)
  {
    if (i == 1)
    {
      dp[i] = abs(h[i] - h[i - 1]);
    }
    else
    {
      dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }

  cout << dp[n - 1] << endl;
  return 0;
}
