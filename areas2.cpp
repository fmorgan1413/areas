// Lab 5 areas2.cpp 
// menu driven program that calculates the area of shapes
// Faith Morgan.
#include <iostream>
using namespace std;

int main()
{  
    const double PI = 3.14159;

    const int SQUARE_CHOICE = 1;
    const int CIRCLE_CHOICE = 2;
    const int TRIANGLE_CHOICE = 3;
    const int QUIT_CHOICE = 4;
   
    int choice;
    double radius; // Radius of a circle
    double side; // Side of a square
    double base; // Base of a triangle
    double height; // Height of a triangle
    double area; // Area of the selected shape

    do
    {
    cout << "Program to calculate areas of different objects\n\n";
    cout << "1 -- square\n";
    cout << "2 -- circle\n";
    cout << "3 -- right triangle\n";
    cout << "4 -- quit\n\n";
    cout << "Enter your choice (1-4): ";
   
    cin >> choice;
   
    
        switch (choice)
        {
        case SQUARE_CHOICE:
            cout << "\nEnter the square's side: ";
            cin >> side;
            if (side < 0)
            {
                cout << "\nOnly enter positive values for "
                    << "length and width.\n";
            }
            else
            {
                area = side * side;
                cout << "\nArea =  " << area << endl << endl;
            }
            break;

        case CIRCLE_CHOICE:
            cout << "\nEnter the circle's radius: ";
            cin >> radius;
            if (radius < 0)
                cout << "\nThe radius can not be less than zero.\n";
            else
            {
                area = PI * (radius * radius);
                cout << "\nArea =  " << area << endl << endl;
            }
            break;

        case TRIANGLE_CHOICE:
            cout << "Enter the length of the base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            cin >> height;
            if (base < 0 || height < 0)
            {
                cout << "\nOnly enter positive values for "
                    << "base and height.\n";
            }
            else
            {
                area = (base * height) / 2;
                cout << "\nArea =  " << area << endl << endl;
            }
            break;
        
            
        } 

        if (choice > 4 || choice < 1)
            cout << "The valid choices are 1 through 4. Run the \n"
            << "program again and select one of those.\n";

    } while (choice != 4);

    cout << "Program ending.\n";
      
   return 0;
}