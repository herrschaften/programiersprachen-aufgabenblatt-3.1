#include "box.hpp"


//KONSTRUKTOR
//Box::Box(Vec2 min,Vec2 max, Color clr):
Box::Box(Vec2 const& min, Vec2 const& max, Color const& clr):
	min_(min),
	max_(max),
	clr_(clr)
	{}

//GETTER
Vec2 Box::getmin() const
{
	return(min_);
}

Vec2 Box::getmax() const
{
	return(max_);
}

//MEMBERFUNKTIONEN
float Box::umfang() const	//const weil...
{
	float h, b;
	h= max_.y_-min_.y_;
	b= max_.x_-min_.x_;

	return 2*(h+b);
}

void Box::draw(Window const& w, Color const& clr)
{
	//links
	w.draw_line(min_.x_, min_.y_, min_.x_, max_.y_, clr.r_, clr.g_, clr.b_);
	//oben
	w.draw_line(min_.x_, max_.y_, max_.x_, max_.y_, clr.r_, clr.g_, clr.b_);
	//rechts
	w.draw_line(max_.x_, max_.y_, max_.x_, min_.y_, clr.r_, clr.g_, clr.b_);
	//unten	
	w.draw_line(max_.x_, min_.y_, min_.x_, min_.y_, clr.r_, clr.g_, clr.b_);
}

void Box::draw(Window const& w)
{
	draw(w, clr_);
}

