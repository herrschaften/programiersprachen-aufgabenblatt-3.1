#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator> 

#include "circle.hpp"
using namespace std;


TEST_CASE("sorted_container", "[circle_container]")
{

	vector<Circle> c1(10);

	for(auto& c : c1)
	{
		c=rand()%101;
	}

	vector<Circle> c2(c1.size());
	copy(c1.begin(), c1.end(), c2.begin());
	sort(c2.begin(), c2.end());

	for(auto& c : c2)
	{
		cout<<c.getradius()<<endl;
	}





	REQUIRE(std::is_sorted(c2.begin(), c2.end()));	
}




int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}