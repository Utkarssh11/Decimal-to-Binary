#include <iostream>
using namespace std;

int main() {
  unsigned long long DecimalNum;

  cout << "Enter decimal number ( 0 - 1048575 )" << endl;
  cin >> DecimalNum;

  if (DecimalNum >= 0 && DecimalNum <= 1048575) {
    bool firstIsZero = true;
    unsigned long long zeros = 1;
    // Convert Decimal number to Binary number
    unsigned long long ReversedBinary = 0;
    while (DecimalNum > 0) {
      if (firstIsZero) {
        (DecimalNum % 2 == 0) ? zeros *= 10 : firstIsZero = false;
      }
      ReversedBinary *= 10;
      ReversedBinary += (DecimalNum % 2);
      DecimalNum /= 2;
    }

    // Reversed the binary digits to get correct sequence
    unsigned long long BinaryNum = 0;
    while (ReversedBinary > 0) {
      BinaryNum *= 10;
      BinaryNum += (ReversedBinary % 10);
      ReversedBinary /= 10;
    }
    BinaryNum *= zeros;
    cout << "Binary number = " << BinaryNum << endl;
  }
  else {
    cerr << "Error! Invalid Input." << endl;
    cerr << "Enter number between 0 & 1048575" << endl;
  }
  return 0;
}