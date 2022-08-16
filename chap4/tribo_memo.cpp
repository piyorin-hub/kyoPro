#include <iostream>
#include <vector>
using namespace std;

long long tribo(int n);

vector<long long> memo;

int main()
{
  int n;
  cin >> n;
  memo.assign(n + 1, -1);

  cout << "第" << n << "項 = " << tribo(n) << endl;
  return 0;
}

long long tribo(int n)
{
  if (n == 0 || n == 1) return 0;
  if (n == 2) return 1;

  // メモをチェック
  if (memo[n] != -1)
  {
    return memo[n];
  }
  else
  {
    return memo[n] = tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
  }
}

