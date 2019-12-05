#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int decimal;
  do {
  cout << "Please enter a positive integer：";
  cin >> decimal; 
  } while (decimal < 0);

  int power;
  for (power = 1; pow(2,power) <= decimal;) {
    power++;
  }

  cout << decimal << " in binary is：";

  for (power = power - 1; power >= 0;) {
    if (decimal - pow(2,power) >= 0) {
      decimal = decimal - pow(2,power);
      cout << "1";
      power--;
    } else {
      cout << "0";
      power--;
    }
  }

  return 0;
}
