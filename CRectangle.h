/*! \file CRectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/


#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "CQuadrilateral.h"

using namespace std;

/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle : public Quadrilateral
{
protected:
	

public:
	
	/// @name CONSTRUCTORS/DESTRUCTOR
	/// @{
	Rectangle();
	Rectangle(float w, float l);
	Rectangle(const Rectangle &r);
	
	~Rectangle();
	/// @}
	
	/// @name OPERATORS
	/// @{
	Rectangle& operator=(const Rectangle &r); 
	bool operator==(const Rectangle &r);
	/// @}
	
	/// @name BASIC HANDLING
	/// @{
	void Init();												
	void Init(const Rectangle &r);							
	void Reset();												
	/// @}
	
	
	/// @name GETTERS / SETTERS
	/// @{
	void SetHeight(float h);
	void SetWidth(float w);
	void SetDim(float w, float h);
	
	void GetDim(float &w, float &h);
	float GetHeight();
	float GetWidth(); 
	
	float GetArea();
	/// @}
	
	
	/// @name DEBUG and SERIALIZATION 
	/// @{
	void Dump();
	/// @}
		
};

#endif