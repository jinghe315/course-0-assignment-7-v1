#include <iostream>
#include <string>
using namespace std;

float GetAbsoluteValue(const float input) {
  if (input < 0) {
    return -1 * input;
  } else (input >= 0) {
    return input;
  }
}

int main() {
  float value = GetUserInput();
  cout << "The absolute value is: " << GetAbsoluteValue(value);
  return 0;
}
