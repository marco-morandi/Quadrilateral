// test program


#include <iostream>
#include "CQuadrilateral.h"

int main()
{
	// objects instantiations
	Quadrilateral q1;
	Quadrilateral q2 = q1;

	// doing the dump of the quadrilaterals instantiated
	q1.Dump();
	q2.Dump();

	// printing the perimeter of q1 and q2
	cout << endl << "The perimeter of q1 is: " << q1.GetPerimeter() << endl;
	cout << endl << "The perimeter of q2 is: " << q2.GetPerimeter() << endl;

	return 0;
}