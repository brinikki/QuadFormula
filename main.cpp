#include <iostream>
using namespace std;
#include <cmath>

int main()
{
  float a;
  float b;
  float c;

  float x1;
  float x2;

  cout << endl;
 
  cout << "What is the value of a?: ";
  cin >> a;
  cout << endl;

  cout << "What is the value of b?: ";
  cin >> b;
  cout << endl;

  cout << "What is the value of c?: ";
  cin >> c;
  cout << endl;

  x1 = (-b + sqrt(pow(b , 2) - (4 * a * c))) / (2 * a);
  x2 = (-b - sqrt(pow(b , 2) - (4 * a * c))) / (2 * a);

  cout << "x = " << x1 << endl;
  cout << "x = " << x2 << endl;

  cout << endl;
 
  return 0;
}
