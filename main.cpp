// test program


#include <iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"

int main()
{
	// objects instantiations
	Quadrilateral q1;
	Quadrilateral q2 = q1;

	Rectangle r1(12., 3.);
	Rectangle r2 = r1;

	// doing the dump of the quadrilaterals instantiated
	q1.Dump();
	q2.Dump();

	// printing the perimeter of q1 and q2
	cout << endl << "The perimeter of q1 is: " << q1.GetPerimeter() << endl;
	cout << endl << "The perimeter of q2 is: " << q2.GetPerimeter() << endl;

	// doing dumps of r1 and r2
	cout << endl << "--- Rectangle 1 ---" << endl;
	r1.Dump();

	cout << endl << "--- Rectangle 2 ---" << endl;
	r2.Dump();

	// changing dimensions of r2 and checking if it works
	r2.SetDim(3.4, 4.5);
	cout << "The dimensions of rectangle 2 now are: width = " << r2.GetWidth() << "; heigth = " << r2.GetHeight() << endl;

	// testing overload of operator assignment
	r1 = r2;

	cout << endl << "--- Rectangle 1 --- " << endl;
	r1.Dump();

	cout << endl << "--- Rectangle 2 --- " << endl;
	r2.Dump();

	return 0;
}