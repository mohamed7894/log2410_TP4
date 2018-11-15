///////////////////////////////////////////////////////////
//  Torus.cpp
//  Implementation of the Class Torus
//  Created on:      07-nov.-2018 10:58:38
//  Original author: 1899088 1824366
///////////////////////////////////////////////////////////

#include "Torus.h"




Torus::Torus(const Point3D & pt, float rTube, float rCercle)
	: PrimitiveAbs(pt)
{
	if (rTube < 0.0 || rCercle < 0.0)
		throw std::range_error("Invalid dimension value for torus. Must be larger than 0");
	// A Completer...
	// Fait
	m_dimensions[0] = rTube;
	m_dimensions[1] = rCercle;
}

Torus::~Torus() {
}

Torus* Torus::clone() const
{
	// A Completer...
	// Fait
	return new Torus(m_center, m_dimensions[0], m_dimensions[1]);
}

size_t Torus::getNbParameters() const {

	// A Completer...
	// Fait
	return 2;
}

PrimitiveParams Torus::getParameters() const
{
	// A Completer...
	// Fait
	PrimitiveParams vecteurParams;

	for (int i = 0; i < 2; i++)
	{
		vecteurParams.push_back(m_dimensions[i]);
	}
	return vecteurParams;
}

void Torus::setParameter(size_t pIndex, float pValue) {
	if (pIndex < 0 || pIndex > 1)
		throw std::range_error("Invalid parameter index for torus. Must be between 0 and 1");

	if (pValue<0.0)
		throw std::range_error("Invalid dimension value for torus. Must be larger than 0");

	// A Completer...
	// Fait
	m_dimensions[pIndex] = pValue;
}

std::ostream & Torus::toStream(std::ostream & o) const
{
	return o << "Torus:      center = " << m_center
		<< "; rTube = " << m_dimensions[0]
		<< "; rCercle = " << m_dimensions[1] << ";";
}
