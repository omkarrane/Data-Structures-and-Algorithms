#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int c, k, w;
    cin >> c >> k >> w;

    if(c <= (k / w))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

  return 0;
}