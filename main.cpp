// test program


#include <iostream>
#include "CQuadrilateral.h"
#include "CRectangle.h"

int main()
{
	// objects instantiations
	Quadrilateral* Q;
	Quadrilateral q;;

	Rectangle r1(12., 3.);
	Rectangle r2 = r1;

	Q = &r2;

	// dump of quadrilateral q
	q.Dump();

	// dump of a rectangle via polymorphism
	Q->Dump();

	r2.Dump();

	return 0;
}