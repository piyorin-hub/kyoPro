#include <iostream>
using namespace std;

int gcd(int m, int n);

int main()
{
  cout << gcd(51, 15) << endl;
}

int gcd(int m, int n)
{
  // ベースケース
  if (n == 0) return m;

  // m = n*a + r, r = m % n
  // GCD(m, n) = GCD(n, r)
  return gcd(n, m % n);
}