#ifndef CIRCLE_HPP
#define CIRCLE_HPP


class Circle
{
public:

	Circle(float const& r);
	Circle();

	//getter
	float getradius() const;
	void setradius(float r); 	

	
private:
	float r_;
	
	
};

bool operator < (Circle const& c1, Circle const& c2);
bool operator ==(Circle const& c1, Circle const& c2);
bool operator >(Circle const& c1, Circle const& c2);
bool operator <=(Circle const& c1, Circle const& c2);


#endif
