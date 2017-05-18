#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include "mat2.hpp"
#include "color.hpp"
#include "window.hpp"

#include <cmath>


class Circle
{
public:

	Circle(float const& r, Vec2 const& cntr, Color const& clr);

	//getter
	float getradius() const;
	Vec2 getcntr() const;
	
	//memberfunktionen
	float umfang() const;

	void draw(Window const& w);
	void draw(Window const& w, Color const& clr);

private:
	float r_;
	Vec2 cntr_;	
	Color clr_;
	
};


#endif
