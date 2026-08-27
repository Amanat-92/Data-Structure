#include<iostream>
using namespace std;
class box
{
public:
int length;
int breadth;
int height;

void area()
{
int a;
a = length*breadth*height;
cout<<"AREA OF BOX IS"<<a;
}
};

int main()
{
box b1;
b1.length = 5;
b1.breadth = 6;
b1.height = 7;

b1.area();
return 0;
}
