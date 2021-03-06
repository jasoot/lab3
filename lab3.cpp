#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
  float result;
  int n;

  cout << "Input variable: ";
  cin >> n;

  switch (n){
    case 1:{
      double a = 0.4 , b = 12, x = 0.5, z;

      while (x <= 10) {
        z = exp(x);

        if (x < 3.5*a)
        {
          result = a*b*x*pow(cos(z*x),2);
          cout << "X: " << x << " If Number: 1, and result: " << result << endl;
        }
        else if ((3.5*a<= x) && (x <= b))
        {
          result = (a+b*x)-log(z*x);
          cout << "X: " << x << " If Number: 2, and result: " << result << endl;
        }
        else if (x > b)
        {
          result = sqrt(a+b*x-z*pow(x, 2));
          cout << "X: " << x << " If Number: 3, and result: " << result << endl;
        }
        x += 0.2;
      }

      cout << "Completed" << endl;
      break;
    }
    case 2: {
      double a = 2.3, b = 12, z, x = 4.4;

      do{
        z = exp(2*a);

        if (x < 3.5*a)
        {
          result = a*b*x*cos(z*x);
          cout << "X: " << x << " If Number: 1, and result: " << result << endl;
        }
        else if ((3.5*a <= x) && (x <= b))
        {
          result = (a+b*x)-log(z*x);
          cout << "X: " << x << " If Number: 2, and result: " << result << endl;
        }
        else if (x > b)
        {
          result = sqrt(a+b*x-z*pow(x, 2));
          cout << "X: " << x << " If Number: 3, and result: " << result << endl;
        }
        x += 0.2;
      } while (x <= 6.4);

      cout << "Completed" << endl;
      break;
    }
    case 3: {
      double a = 4.2, b = 12, z, x;

      for (x = 6; x <= 8.6; x += 0.2) {
        z = exp(3*b);
        if (x < 3,5*a)
        {
          result = a*b*x*cos(z*x);
          cout << "X: " << x << " If Number: 1, and result: " << result << endl;
        }
        else if ((3,5*a <= x) && (x <= b))
        {
          result = (a+b*x)-log(z*x);
          cout << "X: " << x << " If Number: 2, and result: " << result << endl;
        }
        else if (x > b)
        {
          result = sqrt(a+b*x-z*pow(x, 2));
          cout << "X: " << x << " If Number: 3, and result: " << result << endl;
        }
      }

      cout << "Completed" << endl;
      break;
    }
    default:
      cout << "Not supported variable, try more.";
      break;
  }
  return 0;
}
