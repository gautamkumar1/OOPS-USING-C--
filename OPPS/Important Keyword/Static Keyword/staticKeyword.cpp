/*
Definition : Static keyword can be used with the variables and methods but not with the class. Anything declared as static is related to class and not objects.
Static variable: Multiples objects of a class shares the same instance of a static variable.
-------------------------> REAL LIFE EXAMPLE --------------------->
Let's say you work for a company that produces electronic devices, such as smartphones or laptops. You are responsible for developing software that runs on these devices.

You have a function that needs to keep track of how many times it has been called, and you want this count to be retained between calls. To accomplish this, you declare a static variable inside the function.

---------> DIFF B/W Static , local and Golobal variable
Static local variable = class variables
Visibility: class
Lifetime: till termination of program
Default value:0
Storage:heap

Local Variable
Visibility: class
Lifetime: until execution of class
Default value:garbage
Storage:stack

Global variable
Visibility: file
Lifetime: till termination of program
Default value:0
Storage:heap
---------------------------> IMPORTANT POINT OF STATIC KEYWORD -------------------->
1. Retains value between function calls.
2. Shared among class instances.
3. Accessible without instance.
4. Retains value between block invocations.
5. Limits the scope of a variable.
6. Linkage is internal to file.
*/
#include<iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){ // static member function me sirf static data member hi accsess kr skte hai uske elwaa kuch or denge to error dega woh.
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}