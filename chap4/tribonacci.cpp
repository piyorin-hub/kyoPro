#include <iostream>
#include <vector>
using namespace std;

int tribo(int n);

int main()
{
  int n;
  cout << "第何項を求めたいですか？" << endl;
  cin >> n;
  
  cout << n << "項 = " << tribo(n) << endl; 
}

int tribo(int n)
{
  if (n == 0 || n == 1) return 0;
  if (n == 2) return 1;

  return tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
}
