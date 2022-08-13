#include <iostream>
using namespace std;

int fibo(int n);

int main()
{
  cout << fibo(15) << endl;
}

/*
フィボナッチ数列
F0 = 0
F1 = 1
Fn = F(n - 1) + F(n - 2)
0, 1, 1, 2, 3, 5, 8, 13...
*/
int fibo(int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;

  return fibo(n - 1) + fibo(n - 2);
}