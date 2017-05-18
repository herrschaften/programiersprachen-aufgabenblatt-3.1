#ifndef MAT2_HPP
#define MAT2_HPP
#include "vec2.hpp"
struct Mat2
{
	float a_, b_, c_, d_;

	Mat2();
	Mat2(float aa, float bb, float cc, float dd);

	Mat2& operator*=(Mat2 const& m);	
	float det() const; 								//funktion muss const wenn in anderer funktion angewandt oder wenn memeber ? 
};

Mat2 operator*(Mat2 const& m1, Mat2 const& m2);	
Vec2 operator*(Mat2 const& m, Vec2 const& v);	
Vec2 operator*(Vec2 const& v, Mat2 const& m);	
Mat2 inverse(Mat2 const& m);
Mat2 transpose(Mat2 const& m);
Mat2 rotate(float phi);


#endif