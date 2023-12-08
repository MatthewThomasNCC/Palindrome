#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string str) {
  int length = str.length();
  for (int i = 0; i < length; i++) 
    if (str[i] != str[length - i - 1])
      return false;
  return true;
}
int main() {
  string str;

  cout << "Enter a string: " << endl;
  cin >> str;

  if (isPalindrome(str)) {
    cout << "This is a palindrome" << endl;
  }
  else  {
    cout << "This is not a palindrome" << endl;
  }
}
