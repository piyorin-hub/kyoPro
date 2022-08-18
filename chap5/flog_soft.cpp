#include <iostream>
#include <vector>
using namespace std;

// テンプレート関数　　引数に様々な型をとる
template<class T> void chmin(T& a, T b)
{
  if (a > b)
  {
    a = b;
  }
}

const long long INF = 1LL << 60;

int main()
{
  cout << INF << endl; 
  int n;
  cin >> n;
  vector<long long> h(n);
  
  for (int i = 0; i < n; i++) cin >> h[i];

  vector<long long> dp(n, INF);
  dp[0] = 0;

  for (int i = 0; i < n; i++)
  {
    chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
    if(i > 1)
    {
      chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
  }

  cout << dp[n - 1] << endl;
}