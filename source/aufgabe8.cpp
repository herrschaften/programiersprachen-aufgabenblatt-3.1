#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator> 

#include "circle.hpp"
using namespace std;


TEST_CASE("kreise mit lambda vergleichen, sortieren", "[circle_container]")
{
	//vec c1 & rand() fuellen
	vector<Circle> c1(10);
	for(auto& c : c1){c=rand()%101;}

	sort(c1.begin(), c1.end(), [](Circle const& lh, Circle const& rh)->bool{return(lh<=rh);});

	//cout & test
	for(auto& c : c1){cout<<c.getradius()<<endl;}
	REQUIRE(std::is_sorted(c1.begin(), c1.end()));	
}




int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}