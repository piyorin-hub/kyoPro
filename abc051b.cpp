#include <iostream>
using namespace std;

int main()
{
  int k, n, count = 0;
  cin >> k >> n;
  // 計算量O(N^３）
  // for (int x = 0; x <= k; x++)
  // {
  //   for (int y = 0; y <= k; y++)
  //   {
  //     for (int z = 0; z <= k; z++)
  //     {
  //       if (x + y + z == n)
  //       {
  //         count++;
  //       }
  //     }
  //   }
  // }
    for(int x = 0; x <=min(n,k); x++)
    {
      for (int y = 0; y <=min(n, k); y++)
      {
        int z = n - x - y;
        if (z >= 0 && k >= z)
        {
          count++;
        }
      }
    }
  cout << count << endl;
}