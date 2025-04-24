// test program


#include <iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"
#include "Rhombus.h"

int main()
{
	// objects instantiations
	Rectangle r1(2., 4.);
	Rhombus rb1(3., 6.);

	// creation of Quadrilateral pointer for polymorphism
	Quadrilateral* Q;

	// doing dump of all objects
	cout << "********* RECTANGLE 1 *********\n";
	r1.Dump();

	cout << "********* RHOMBUS 1 *********\n";
	rb1.Dump();
	
	// test with pointer to r1 and printing r1 area
	Q = &r1;

	cout << "********* RECTANGLE 1 *********\n" << "Area = " << Q->GetArea() << "\n\n";

	// test with pointer to rb1 and printing rb1 area
	cout << "********* RHOMBUS 1 *********\n" << "Area = " << Q->GetArea() << "\n\n";
	
	return 0;
}