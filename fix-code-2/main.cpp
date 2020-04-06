#include <iostream>
#include <string>
using namespace std;

int main() {
  char letter = GetLetterFromUser();

  else if (letter == 'a') {
    cout << "The letter is the first letter in the alphabet.";
  } if (IsVowel(letter)) {
    cout << "The letter is a vowel.";
  } else {
    cout << "The letter is not a.";
  }
  return 0;
}
