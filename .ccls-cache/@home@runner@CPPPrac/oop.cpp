#include <iostream>
using namespace std;

/*Encapsulation:
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.*/

// class Employee {
//   private:
//     // Private attribute
//     int salary;

//   public:
//     // Setter
//     void setSalary(int s) {
//       salary = s;
//     }
//     // Getter
//     int getSalary() {
//       return salary;
//     }
// };

// int main() {
//   Employee myObj;
//   myObj.setSalary(50000);
//   cout << myObj.getSalary();
//   return 0;
// }

/*Inheritance:
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.*/

// Base class
// class Vehicle {
//   public:
//     string brand = "Ford";
//     void honk() {
//       cout << "Tuut, tuut! \n" ;
//     }
// };

// // Derived class
// class Car: public Vehicle {
//   public:
//     string model = "Mustang";
// };

// int main() {
//   Car myCar;
//   myCar.honk();
//   cout << myCar.brand + " " + myCar.model;
//   return 0;
// }

// // Multiple inheritance:
// // Base class
// class MyClass {
//   public:
//     void myFunction() {
//       cout << "Some content in parent class." ;
//     }
// };

// // Another base class
// class MyOtherClass {
//   public:
//     void myOtherFunction() {
//       cout << "Some content in another class." ;
//     }
// };

// // Derived class
// class MyChildClass: public MyClass, public MyOtherClass {
// };

// int main() {
//   MyChildClass myObj;
//   myObj.myFunction();
//   myObj.myOtherFunction();
//   return 0;
// }

// // Private vs protected access specifier

// // Base class
// class Employee {
//   protected: // Protected access specifier
//     int salary;
// };

// // Derived class
// class Programmer: public Employee {
//   public:
//     int bonus;
//     void setSalary(int s) {
//       salary = s;
//     }
//     int getSalary() {
//       return salary;
//     }
// };

// int main() {
//   Programmer myObj;
//   myObj.setSalary(50000);
//   myObj.bonus = 15000;
//   cout << "Salary: " << myObj.getSalary() << "\n";
//   cout << "Bonus: " << myObj.bonus << "\n";
//   return 0;
// }

// // Polymorphisim:
// // Base class
// class Animal {
//   public:
//     void animalSound() {
//     cout << "The animal makes a sound \n" ;
//   }
// };

// // Derived class
// class Pig : public Animal {
//   public:
//     void animalSound() {
//     cout << "The pig says: wee wee \n" ;
//    }
// };

// // Derived class
// class Dog : public Animal {
//   public:
//     void animalSound() {
//     cout << "The dog says: bow wow \n" ;
//   }
// };

// int main() {
//   Animal myAnimal;
//   Pig myPig;
//   Dog myDog;

//   myAnimal.animalSound();
//   myPig.animalSound();
//   myDog.animalSound();
//   return 0;
// }

