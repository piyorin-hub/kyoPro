#include <iostream>
#include <vector>
using namespace std;

/*
部分和問題
a(n)から何個かの整数を取り出し、総和がWとなるか判定
p56 部分和問題を再起関数に用いる全探索でとく
*/
bool func(int i, int w, const vector<int> &a);

int main()
{
  int n, w;
  cin >> n >> w;

  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  if(func(n, w, a)) 
  {
    cout << "Yes" << endl;
  }
  else cout << "No" << endl;
  
}

bool func(int i, int w, const vector<int> &a)
{
  //ベースケース
  if (i == 0)
  {
    if (w == 0)
    {
      return true;
    }
    // wが０にならなかったら->部分和不成立
    else return false;
  }
  // a[i - 1]を選ばない場合
  if (func(i - 1, w, a)) return true;
  // a[i - 1]を選ぶ場合(func(i-1,w-a[i-1],a)がokならok)
  if (func(i - 1, w - a[i - 1], a)) return true;
  return false;
}