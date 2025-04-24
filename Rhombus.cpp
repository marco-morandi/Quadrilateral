/** @file Rhombus.cpp
*	@brief Class Rhombus: implementations of the methods

*/

#include <iostream>
#include <cstring>
#include <cmath>

#include "Rhombus.h"

using namespace std;

/// @brief default constructor
Rhombus::Rhombus() {

	cout << "Rhombus - default constructor" << endl;

	Init();

}

/// @brief constructor
/// @param dh horizontal diagonal of the rhombus
/// @param m_d vertical diagonal of the rhombus
Rhombus::Rhombus(float dh, float dv) {

	cout << "Rhombus - constructor" << endl;

	Init();

	if (dh < 0 || dv < 0) {
		WarningMessage(" constructor: major diagonal and minor diagonal should be > 0");
		SetDiagonals(0, 0);
	}
	else
		SetDiagonals(dh, dv);

}

/// @brief copy constructor
/// @param r reference to the object that should be copied
Rhombus::Rhombus(const Rhombus& r) {

	cout << "Rhombus - copy constructor" << endl;

	Init(r);

}

/// @brief destructor
Rhombus::~Rhombus() {

	cout << "Rhombus - destructor" << endl;

	Reset();

}

/// @brief overload of operator =
/// @param object that is to the right of = operator
/// @return the pointer to itself
Rhombus& Rhombus::operator=(const Rhombus& r) {

	cout << "Rhombus - operator =" << endl;

	Init(r);

	return *this;
}

/// @brief overload of operator ==
/// @param the object to check the equality with
/// @return true if the two object are the same
bool Rhombus::operator==(const Rhombus& r) {

	if (r.hor_diag == hor_diag && r.vert_diag == vert_diag)
		return true;

	return false;
}

/// @brief default initialization of the object
void Rhombus::Init() {

	SetDiagonals(2, 1);

}

/// @brief initialization of the object as a copy of an object
/// @param r reference to the object that should be copied
void Rhombus::Init(const Rhombus& r) {

	Init();
	SetDiagonals(r.hor_diag, r.vert_diag);

}

/// @brief total reset of the object 
void Rhombus::Reset() {

	SetDiagonals(0, 0);

}

/// @brief set horizontal diagonal of the object
/// @param dh horizontal diagonal
void Rhombus::SetHorDiag(float dh) {

	if (dh < 0) {
		WarningMessage("SetHorDiag: horizontal diagonal should be > 0");
		return;
	}

	SetDiagonals(dh,vert_diag);
}

/// @brief set minor diagonal of the object
/// @param dv minor diagonal
void Rhombus::SetVertDiag(float dv) {

	if (dv < 0) {
		WarningMessage("SetVertDiag: vertical diagonal should be > 0");
		return;
	}

	SetDiagonals(hor_diag, dv);
}

/// @brief set both diagonals of the object
/// @param dh horizontal diagonal
/// @param dv vertical diagonal
void Rhombus::SetDiagonals(float dh, float dv) {

	if (dh < 0 || dv < 0) {
		WarningMessage("SetDiagonals: horizontal diagonal and vertical diagonal should be > 0");
		return;
	}

	hor_diag = dh;
	vert_diag = dv;

	float side = sqrt(pow(hor_diag / 2, 2) + pow(vert_diag / 2, 2));
	float angle = (float) round(atan(vert_diag / hor_diag) * 180. / 3.1415);

	SetSides(side, side, side, side);
	SetAngles(2* angle, (360. - 4. * angle) / 2., 2 * angle, (360. - 4. * angle) / 2.);

	return;
}

/// @brief get horizontal diagonal of the object
/// @return horizontal diagonal
float Rhombus::GetHorDiag() {

	return hor_diag;
}

/// @brief get vertical diagonal of the object
/// @return vertical diagonal
float Rhombus::GetVertDiag() {

	return vert_diag;
}

/// @brief get both diagonals of the object
/// @param dh horizontal diagonal
/// @param dv vertical diagonal
void Rhombus::GetDiagonals(float& dh, float& dv) {

	dh = hor_diag;
	dv = vert_diag;

	return;
}

/// @brief get side length of the object
/// @return side_l side length
float Rhombus::GetSideLength() {

	float side = sqrt(pow(hor_diag / 2, 2) + pow(vert_diag / 2, 2));

	return side;
}

/// @brief get the perimeter of the object
/// @return the perimeter
float Rhombus::GetPerimeter() {

	float side_l = GetSideLength();

	return side_l * 4;
}

/// @brief get the are of the object
/// @return the area
float Rhombus::GetArea() {

	return (hor_diag * vert_diag) / 2;
}

/// @brief write an error message
/// @param string message to be printed
void Rhombus::ErrorMessage(const char* string) {

	cout << endl << "ERROR -- Rhombus -- ";
	cout << string << endl;

}

/// @brief write a warning message
/// @param string message to be printed
void Rhombus::WarningMessage(const char* string) {

	cout << endl << "ERROR -- Rhombus --";
	cout << string << endl;

}

/// @brief for debugging: all about the object
void Rhombus::Dump() {

	cout << endl;
	cout << "--- Rhombus ---" << endl;
	cout << endl;

	cout << "Reference point on the grid: (" << gridCoord.x << "," << gridCoord.y << ")\n";
	cout << "Horizontal diagonal = " << hor_diag << "\n";
	cout << "Vertical diagonal = " << vert_diag << "\n";
	cout << "Area = " << GetArea() << "\n";
	cout << "Perimeter = " << GetPerimeter() << "\n";

	Quadrilateral:: Dump();

}