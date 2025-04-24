// test program


#include <iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"

int main()
{
	// objects instantiations
	Rectangle r1;
	Rectangle r2(2., 4.);
	Rectangle r3 = r2;

	// creation of Quadrilateral pointer for polymorphism
	Quadrilateral* Q;

	// doing dump of all 3 rectangles
	cout << "********* RECTANGLE 1 *********\n";
	r1.Dump();
	
	cout << "********* RECTANGLE 2 *********\n";
	r2.Dump();
	
	cout << "********* RECTANGLE 3 *********\n";
	r3.Dump();
	
	// test with pointer to r1 and printing r1 area
	Q = &r1;

	cout << "********* RECTANGLE 1 *********\n" << "Area = " << Q->GetArea() << "\n\n";

	// test with pointer to r2 and printing r2 area
	Q = &r2;

	cout << "********* RECTANGLE 2 *********\n" << "Area = " << Q->GetArea() << "\n\n";
	
	// test with pointer to r3 and printing r3 area
	Q = &r3;

	cout << "********* RECTANGLE 3 *********\n" << "Area = " << Q->GetArea() << "\n\n";
	
	return 0;
}