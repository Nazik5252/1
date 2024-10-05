#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 double ro, h, R, S, V, m;
 cout << "ro=";
 cin >> ro;
 cout << "h=";
 cin >> h;
 cout << "R=";
 cin >> R;
 S = 2 * M_PI * R;
 V = M_PI * R * R * h;
 m = ro * V;
 cout.precision(3);
 cout << fixed << "S=" << S << endl << "V=" << V << endl << "m=" << m;
 return 0;
}
