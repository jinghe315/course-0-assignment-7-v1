#include <iostream>
#include <string>
using namespace std;

char GetLetterFromUser() {
  std::cout << "Enter a letter: ";
  char letter; 
  cin >> letter; 
  return letter; 
}

bool IsVowel(char input){
  if ((input == 'a') || (input == 'e') || (input == 'i') || (input == 'o') || (input == 'u')){
    return true;
  }
  else{
    return false;
  }
}

int main() {
  char letter = GetLetterFromUser();

  if (letter == 'a') {
    cout << "The letter is the first letter in the alphabet.";
  } 
  if (IsVowel(letter)) {
    cout << "The letter is a vowel.";
  } 
  else {
    cout << "The letter is not a vowel.";
  }
  return 0;
}
