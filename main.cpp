#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int decimal;
  cout << "請輸入一個整數：";
  cin >> decimal;
  if (decimal < 0) {
    cout << "請重新輸入";
    return 0;
  }

  int power;
  for (power = 1; pow(2,power) <= decimal;) {
    power++;
  }

  cout << decimal << "的二進位值為：";

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
