#include "color.hpp"

Color::Color():
	r_(255.0f),
	g_(105.0f),
	b_(180.0f)
	{}

Color::Color(float def):
	r_(def),
	g_(def),
	b_(def)
	{}	

Color::Color(float rr, float gg, float bb):
	r_(rr),
	g_(gg),
	b_(bb)
	{}	
