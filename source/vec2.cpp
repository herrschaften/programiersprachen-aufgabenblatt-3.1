#include "vec2.hpp"

Vec2::Vec2():
	x_(0),
	y_(0)
	{}

Vec2::Vec2(float xx,float yy):
	x_(xx),
	y_(yy)
	{}


Vec2& Vec2::operator+=(Vec2 const& v)
{
	x_+=v.x_;
	y_+=v.y_;

	return *this;	
}

Vec2& Vec2::operator-=(Vec2 const& v)
{
	x_-=v.x_;
	y_-=v.y_;

	return *this;	
}

Vec2& Vec2::operator*=(float s)
{
	x_*=s;
	y_*=s;

	return *this;
}

Vec2& Vec2::operator/=(float s)
{
	x_/=s;
	y_/=s;

	return *this;
}

Vec2 operator+(Vec2 const& u, Vec2 const& v)
{
	Vec2 temp{u};
	temp+=v;
	return temp;
}

Vec2 operator-(Vec2 const& u, Vec2 const& v)
{
	Vec2 temp{u};
	temp-=v;
	return temp;	
}

Vec2 operator*(Vec2 const& u, float s)
{
	Vec2 temp{u};
	temp*=s;
	return temp;
}

Vec2 operator/(Vec2 const& u, float s)
{
	Vec2 temp{u};
	temp/=s;
	return temp;
}