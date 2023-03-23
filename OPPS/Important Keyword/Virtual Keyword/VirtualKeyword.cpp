/*
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
*/