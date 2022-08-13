#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
  int a, b, c;
  int medianAnswer;
  
  cin >> a >> b >> c;
  
  medianAnswer = (a + c) /2;

  cout << medianAnswer << endl;
  if (medianAnswer == b)
  {
    cout << "Yes" << endl;
  }
  else 
  {
    cout << "No" << endl;
  }
  
}