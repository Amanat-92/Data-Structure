#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout <<"Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout <<"After swapping: "<<endl;
    cout<<"first number: " << a <<endl;
    cout<<"second number: " << b;
    return 0;
}
