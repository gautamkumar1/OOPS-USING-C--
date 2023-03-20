#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int getArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r;
    int l, b;
    cin >> l >> b;
    r.length = l;
    r.breadth = b;
    cout << "Area of the rectangle is : " << r.getArea() << endl;
    return 0;
}