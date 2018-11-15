///////////////////////////////////////////////////////////
//  Torus.h
//  Implementation of the Class Torus
//  Created on:      04-nov.-2018 10:50:62
//  Original author: 1899088 1824366
///////////////////////////////////////////////////////////
#if !defined(EA_8099F38C_C8A3_47d0_948F_F38A0B83FFB3__INCLUDED_)
#define EA_8099F38C_C8A3_47d0_948F_F38A0B83FFB3__INCLUDED_

#include "PrimitiveAbs.h"

class Torus : public PrimitiveAbs
{

public:
	Torus(const Point3D& pt, float rTube, float rCercle);
	virtual ~Torus();
	virtual Torus* clone() const;

	virtual std::size_t getNbParameters() const;
	virtual PrimitiveParams getParameters() const;
	virtual void setParameter(std::size_t pIndex, float pValue);

private:
	virtual std::ostream& toStream(std::ostream& o) const;
	float m_dimensions[2];
	
};
#endif // !defined(EA_8099F38C_C8A3_47d0_948F_F38A0B83FFB3__INCLUDED_)