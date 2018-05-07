// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// Junya Zhao

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.

class Square
{
private:
    double side;
public:
    void setSide(float length);
    float findArea();
    float findPerimeter();
    Square(float);	// Constructor
	Square(); // default constructor
    ~Square();  //  destructor declaration
};
int main()
{
	Square box;	// box is defined as an object of the Square class


	float size;	// size contains the length of a side of the square
    // FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
	// SIDE OF THE SQUARE. (This is stored in size)
    cout << "Please input the length of the side of Square: "<<endl;
    cin >> size;
	// FILL IN THE CODE THAT CALLS SetSide.
    box.setSide(size);
	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN.
    cout <<"The area of the square is :";
    cout << box.findArea() << endl;
	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
    cout <<" The perimeter of the Square is :";
    cout << box.findPerimeter() << endl;

    //Exercise2
    Square box1(9); //declare another object box1
    cout <<"The area of box1 is :";
    //box1.Square();
    cout << box1.findArea() << endl;
	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
    cout <<" The perimeter of box1 is :";
    cout << box1.findPerimeter() << endl;

	return 0;
}

// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

void Square::setSide(float length)
{
	side = length;
}

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea()
{
	return side * side;
}

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter()
{
	return 4 * side;
}

//constructor
Square::Square()
{
    side = 1;
}

//constructor
Square::Square(float r)
{
    side = r;
}
// Exercise 2: destructor to the code. Square class for each object that is destroyed.
Square::~Square(void)
{
    cout << " object is destroyed";
}
