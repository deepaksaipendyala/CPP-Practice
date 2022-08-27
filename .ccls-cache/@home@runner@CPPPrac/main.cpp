#include <iostream>
using namespace std;

int main() {
  // std::cout << "Hello World!\n"; // If we use namespace std no usde of std::
  // cout<<"hello world!\nHello world 2.0!"<<endl; // lik dis
  // string Name="Deepak";
  // int Age=19;
  // cout<<"Hello, My name is "<<Name<<" and I'm "<<Age<< " Years Old."<<endl;
  // int x,y,z;
  // cin>>x;
  // cin>>y;
  // cin>>z;
  // cout<<x+y+z<<endl;
  // const int a=1;
  // cout<<x+y+z+a;
//   float f1 = 35e2;
// double d1 = 12E4;
// cout << f1<<endl;
// cout << d1<<endl;
  // string name="LOLOLO";
  // cout<<name<<endl;
  // getline(cin,name); // Takes space also as input
  //   cout<<name;
  // int x=20;
  // string greet=(x<18)?"Good Afternoon!":"Good night";
  // cout<<greet;
//   string food = "Pizza";
//   string &meal = food;

// cout << food << "\n";  // Outputs Pizza
// cout << meal << "\n";  // Outputs Pizza

  string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";
}