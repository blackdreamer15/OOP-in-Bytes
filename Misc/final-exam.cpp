/**
-----------------------------------------
*NAME     : Baki Jessy Justice Julien
*PROGRAM  : Computer Engineering
*INDEX No.: *******
*Ref. No. : ********
-----------------------------------------
*/

#include <iostream>
#include <string>
#include <iomanip> //For setw()
#include <typeinfo> //For typeid().name()
#include <cstdlib> //For exit(0)

using namespace std;

//Abstract base class
class CPolygon {
protected:
    float width;
    float height;

public:
    void setValues() {
        cout << "\t\tEnter the height: "; cin >> height;
        cout << "\t\tEnter the width : "; cin >> width;
    }

    virtual float area() = 0; // Pure virtual function

    void printArea() {
        cout << "\tThe area is: " << setw(5) << this->area() << endl;
    }
};

//This class is publicly derived from the abstract base class CPolygon
class CRectangle : public CPolygon {
public:
    float area() { return width*height; }
};

//This class is publicly derived from the abstract base class CPolygon
class CTriangle : public CPolygon {
public:
    float area() {return 0.5*width*height;}
};

//This class is publicly derived from the abstract base class CPolygon
class CSquare : public CPolygon {
public:
    float area() { return width*height; }
};

int main()
{
    CPolygon* polygons[100];
    int n = 0;
    char input;
    do{
        int choice;
        cout << "\t\tTHE POLYGON AREA CALCULATOR MENU" << endl;
        cout << "\t\t--------------------------------" << endl;
        cout << "\t\tSelect a polygon:\n" << endl;
        cout << "\t\t1. Rectangle" << endl;
        cout << "\t\t2. Triangle" << endl;
        cout << "\t\t3. Square" << endl;
        cout << "\n\t\tEnter your choice: "; cin >> choice;

        /*This switch case considered the user output and create an adequate polygon
          object based on the user's choice.
          After creating the polygon object, it is added to the pointer to object polygonS[100].
          Then, the width and height are set using the member function inherited from the base class, setValues().
          After setting the values, user is asked if he wants to add polygon again or not.
          This will determine the condition for breaking out of the loop.
        */
        switch(choice) {
            case 1:
                system("pause");  //To pause the console
                system("cls");  //To clear the console
                cout << "\t\tTHE RECTANGLE MENU" << endl;
                cout << "\t\t------------------" << endl;
                polygons[n] = new CRectangle();
                polygons[n]->setValues();

                n++;
                cout << "\n\t\tDo you want to add another polygon? (y/n): "; cin >> input;
                system("pause");
                system("cls");  //To clear the console
                break;

            case 2:
                system("pause");  //To pause the console
                system("cls");  //To clear the console
                cout << "\t\tTHE TRIANGLE MENU" << endl;
                cout << "\t\t-----------------" << endl;
                polygons[n] = new CTriangle();
                polygons[n]->setValues();

                n++;
                cout << "\n\t\tDo you want to add another polygon? (y/n): "; cin >> input;
                system("pause");
                system("cls");  //To clear the console
                break;

            case 3:
                system("pause");  //To pause the console
                system("cls");  //To clear the console
                cout << "\t\tTHE SQUARE MENU" << endl;
                cout << "\t\t---------------" << endl;
                polygons[n] = new CSquare();
                polygons[n]->setValues();

                n++;
                cout << "\n\t\tDo you want to add another polygon? (y/n): "; cin >> input;
                system("pause");
                system("cls");  //To clear the console
                break;

            default:
                cout << "\t\tWrong input! The program is shutting down..." << endl;
                exit(0);
                break;
        }


    } while(input == 'y' || input == 'Y');

    /*
        After the loop breaks, we print out the list of all polygon objects in the pointer array polygonS[100]
    */
    cout << "\t\t\tPOLYGON LIST" << endl;
    cout << "\t\t\t------------" << endl;
    cout << "\t\tThese are your polygons' areas:\n" << endl;

    /*The for loop iterates through the polygon object array, polygons[100].
      It checks the name of the class from which the object comes from at runtime using typeid().name()and then
      print the polygon name accordingly.
      ie. if the polygon object belongs to the class rectangle, it will print rectangle and move on to print the
      area of the polygon using the inherited member function, printArea().
      It does this for all polygon objects in the array.
    */
    for(int j=0; j<n; j++) {
        string ObjectClassName = typeid(*polygons[j]).name();
        if(ObjectClassName == "10CRectangle") {
            cout << setw(12) << "\t\tRectangle: ";
                polygons[j]->printArea();
        }
        else if(ObjectClassName == "9CTriangle") {
            cout << setw(12) << "\t\tTriangle: ";
                polygons[j]->printArea();
        }
        else {
            cout << setw(12) << "\t\tSquare: ";
                polygons[j]->printArea();
        }
        cout << endl;
    }

    return 0;
}
