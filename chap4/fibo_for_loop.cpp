#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<long long> f(50);
  f[0] = 0;
  f[1] = 1;

  for (int i = 2; i < 50; i++)
  {
    f[i] = f[i - 1] + f[i - 2];
    cout << f[i] << endl;
  }
  return 0; 
}