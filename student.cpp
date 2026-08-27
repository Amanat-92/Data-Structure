#include<iostream>
using namespace std;
class student
{
public:

string Name;
int Rollno;
float Marks;

void display()
{
cout<<"Name of student is : "<<Name<<endl;
cout<<"Roll no of student is :"<<Rollno<<endl;
cout<<"Marks of student is :"<<Marks<<endl;
}
};

int main()
{
student S1;
S1.Name = "Prajval";
S1.Rollno = 22;
S1.Marks = 205;

S1.display();
return 0;
}
