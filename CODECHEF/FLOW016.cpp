#include<iostream>

using namespace std;

long gcd(long a, long b)
{
  if(b == 0)
    return a;
  else
    return gcd(b, a % b);
};

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    long a, b;
    cin >> a >> b;
    long g = gcd(a, b);
    long l = (a / g * b);
    cout << g << " " << l << endl;
  }
}