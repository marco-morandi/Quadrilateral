/** @file Rhombus.h
*	@brief Declaration of the class Rhombus
*/

#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "CQuadrilateral.h"

/// @class Rhombus
/// @brief Class created to manage objects with a diamond shape

class Rhombus : public Quadrilateral
{
private: 
	float hor_diag;
	float vert_diag;

public:
	/// @name CONSTRUCTORS / DESTRUCTOR
	/// @{
	Rhombus();
	Rhombus(float dh, float dv); // M_d: major diagonal; m_d: minor diagonal
	Rhombus(const Rhombus& r);

	~Rhombus();
	/// @}

	/// @name OPERATORS OVERLOADING
	/// @{
	Rhombus& operator=(const Rhombus& r);
	bool operator==(const Rhombus& r);
	/// @}

	/// @name INIT / RESET
	/// @{
	void Init();
	void Init(const Rhombus& r);

	void Reset();
	/// @}

	/// @name GETTERS / SETTERS
	/// @{
	void SetHorDiag(float dh);
	void SetVertDiag(float dv);
	void SetDiagonals(float dh, float dv);

	float GetHorDiag();
	float GetVertDiag();
	void GetDiagonals(float& dh, float& dv);

	float GetSideLength();

	float GetPerimeter();
	float GetArea();
	/// @}

	/// @name DEBUG / SERIALIZATION
	/// @{
	void ErrorMessage(const char* string);
	void WarningMessage(const char* string);
	void Dump();
	///@}
	
};

#endif