#ifndef BOX_HPP
#define BOX_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"


class Box
{
public:

	Box(Vec2 const& min, Vec2 const& max, Color const& clr);

	//getter
	Vec2 getmin() const;
	Vec2 getmax() const;
	
	//memberfunktionen
	float umfang() const;

	void draw(Window const& w);
	void draw(Window const& w, Color const& clr);

private:
	Vec2 min_;
	Vec2 max_;	
	Color clr_;
	
};


#endif
