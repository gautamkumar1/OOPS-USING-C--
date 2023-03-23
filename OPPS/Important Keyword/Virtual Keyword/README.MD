DEFINITION : The "virtual" keyword in C++ is used to declare a function in a base class that can be overridden by a function with the same name in a derived class. This enables runtime polymorphism and dynamic binding, allowing the appropriate function implementation to be selected based on the actual type of the object at runtime.
Virtual Base Class in C++
The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances. For example: suppose we created a class “A” and two classes “B” and “C”, are being derived from class “A”. But once we create a class “D” which is being derived from class “B” and “C” as shown in figure 1.
As shown in figure 1,

1. Class “A” is a parent class of two classes “B” and “C”

2. And both “B” and “C” classes are the parent of class “D”
The main thing to note here is that the data members and member functions of class “A” will be inherited twice in class “D” because class “B” and “C” are the parent classes of class “D” and they both are being derived from class “A”.

So when the class “D” will try to access the data member or member function of class “A” it will cause ambiguity for the compiler and the compiler will throw an error. To solve this ambiguity we will make class “A” as a virtual base class. To make a virtual base class “virtual” keyword is used.

When one class is made virtual then only one copy of its data member and member function is passed to the classes inheriting it. So in our example when we will make class “A” a virtual class then only one copy of the data member and member function will be passed to the classes “B” and “C” which will be shared between all classes. This will help to solve the ambiguity.

image.png
Figure 1: Virtual Base Class Example Diagram


The syntax of the virtual base class is shown in the code snippet below :

#include <iostream> 
using namespace std; 
class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C { 
}; 

--------------------------> REAL LIFE EXAMPLE ----------------->
A real-life example of virtual functions can be found in a banking application that provides different types of accounts, such as savings accounts, checking accounts, and investment accounts. Each type of account may have different interest rates, fees, and transaction limits.

In this scenario, we can define a base class called Account that contains common functionality, such as depositing and withdrawing funds. We can also define a virtual method called calculateInterest() in the Account class, which calculates the interest earned on the account balance.

Next, we can create derived classes for each type of account, such as SavingsAccount, CheckingAccount, and InvestmentAccount. Each of these classes can override the calculateInterest() method to implement their specific interest calculation formula.

When a customer accesses their account information, the application can use a pointer or reference to the base Account class to handle all account types polymorphically. When the calculateInterest() method is called, the correct implementation will be selected based on the actual type of the account object, which is determined at runtime.

This allows the banking application to handle different account types with a common interface, while still allowing for customized behavior for each type of account.
---------------------------------------------------------------------------------------------------------------------------------------
--------------------------> IMPORTANT OF VIRTUAL KEYWORD ---------------------->
1. Enables Polymorphism
2. Allows Dynamic Binding
3. Facilitates Runtime Binding
4. Enables Method Overriding
5. Supports Inheritance Hierarchy
6. Provides Extensibility and Flexibility

1. Enables Runtime Polymorphism : Allows a derived class to override a base class method to provide a specific implementation at runtime. Example: A Shape class with a virtual method area() that is overridden in the Circle and Square derived classes to calculate the area of a circle and square respectively.

2. Supports Dynamic Binding: The method to be called is determined at runtime based on the actual type of the object, rather than the type of the pointer or reference used to make the call. Example: A Vehicle class with a virtual method drive() that is overridden in the Car and Truck classes to provide different driving behaviors.

3. Facilitates Method Overriding: Allows a derived class to provide its own implementation of a method defined in the base class. Example: A Fruit class with a virtual method color() that is overridden in the Apple and Orange derived classes to provide the specific color of each fruit.

4. Enables Inheritance Hierarchy: Allows for the creation of a hierarchy of classes with shared behavior and properties. Example: A Person class with a virtual method speak() that is overridden in the Student and Teacher classes to provide different speech behaviors.

5. Provides Extensibility and Flexibility: Allows for the addition of new functionality to a class hierarchy without modifying the existing code. Example: A Musician class with a virtual method play() that is overridden in the Guitarist and Pianist classes to provide different instrument playing behaviors.
