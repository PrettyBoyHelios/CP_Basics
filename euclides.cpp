#include <iostream>
#include <stdio.h>

using namespace std;
int mcd(int x , int y){
  int t;
  x = (x < 0) ? -x:x;
  y = (y < 0) ? -y:y;
  t = (x < y) ? x : y;
  while ( (x % t) || (y % t))
    --t;
  return t;
}
int euc(int x,int y){
  return (!y) ? x : euc(y,x%y);
}
int main()
{
  int x,y;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;  
  cout << "MCD: " << mcd(x,y) << endl;
  cout << "MCD (euclides): " << euc(x,y) << endl;
}