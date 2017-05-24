#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator> 
using namespace std;


TEST_CASE("vektoren addieren mit lambda", "[circle_container]")
{
	//vec c1 & rand() fuellen
	std :: vector < int > v1 {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
	std :: vector < int > v2 {9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
	std :: vector < int > v3 (9);

	transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), [](int lh, int rh)->int{return(lh+rh);});
	
	REQUIRE(all_of(v3.begin(), v3.end(), [](int i)->bool{return i==10;}));	
}




int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}