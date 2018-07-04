//Francis Olsson
//CISP 360
//Geometry Calculator assignment

#include <iostream>

using namespace std;

double pi = 3.14159;
double radius; 
double length;
double width;
double area;
double height;
char choice;

int main(){
    cout << "Geometry Calulator\n"<<
    "   1. Calculate the Area of a Circle\n"<<
    "   2. Calculate the Area of a Rectangle\n"<<
    "   3. Calculate the Area of a Triangle\n"<<
    "   4. Quit\n";
    
    cin >> choice;
    
    switch (choice)
    {
           case '1': 
                cout << "Input radius of circle:\n";
                cin >> radius;
                area = pi*radius*radius;
                cout << area << endl;
                break;
           case '2':  
                cout << "Input length and with of rectangle:\n";
                cin >> length >> width;
                area = length*width;
                cout << area << endl;
                break;
           case '3':
                cout << "Input length of triangle's base and height:\n";
                cin >> length >> height;
                area = (length*height)/2;
                cout << area << endl;
                break;
           default: cout << "Invalid Input\n";
           }
    system ("pause");
    return 0;
}
