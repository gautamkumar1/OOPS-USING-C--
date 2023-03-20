#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    public:
    int r,i;
    ComplexNumbers(int real,int img){
        this->r = real;
        this->i = img;
    }
    // plus function
    void plus(ComplexNumbers object){
        int newReal = r+object.r;
        int newImg = i+object.i;
        r = newReal;
        i = newImg; 
    }
    // create the multiply method
    void multiply(ComplexNumbers object){
        int newReal = ((r*object.r)-(i*object.i));
        int newImg = ((r*object.i)+(i*object.r));
        r = newReal;
        i = newImg;
    }
    // print function
    void print(){
        cout << r << " + " << "i" << i << endl;
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}