#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int myNum;
    string myString;
    float perc;
  } myStructure;

  myStructure.myNum = 92;
  myStructure.myString = "Hello World!";
  myStructure.perc = 92.2;

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  cout << myStructure.perc << "\n";
  
  return 0;
}
