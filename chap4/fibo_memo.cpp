#include <iostream>
#include <vector>
using namespace std;

/*
動的計画法
フィボナッチ数列　
*/

long long fibo(int n);

vector<long long> memo;

int main()
{
  memo.assign(50, -1);
  fibo(49);

  for (int i = 2; i < 50; i++)
  {
    cout << i << "番目" << memo[i] << endl;
  }
}

long long fibo(int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;

  if (memo[n] != -1)
  {
    return memo[n];
  }
  return memo[n] = fibo(n - 1) + fibo(n - 2);
}