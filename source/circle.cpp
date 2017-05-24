#include "circle.hpp"

Circle::Circle(float const& r):
	r_{r}
	{}

Circle::Circle():
	r_{1}
	{}

	//getter
float Circle::getradius() const
{
	return r_;
}
void Circle::setradius(float r)
{
	r_=r;
} 	

bool operator < (Circle const& c1, Circle const& c2)
{
	return(c1.getradius() < c2.getradius());
}

bool operator ==(Circle const& c1, Circle const& c2)
{
	return(c1.getradius() == c2.getradius());
}

bool operator >(Circle const& c1, Circle const& c2)
{
	return(c1.getradius() > c2.getradius());
}

bool operator <=(Circle const& c1, Circle const& c2)
{
	return(c1.getradius() <= c2.getradius()); 
}