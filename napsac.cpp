#include <iostream>
#include <vector>

using namespace std;

template<class T> void chmax(T& a, T b)
{
  if (a < b) 
  {
    a = b;
  }
}

int main()
{
  int n, w;
  cin >> n >> w;
  vector<long long> weight(n); value(n);
  for (int i = 0; i < n; i++)
  {
    cin >> weight[i] >> value[i];
  }
}
