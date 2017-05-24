#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <vector>
#include "circle.hpp"
using namespace std;

	//copy_if(c1.begin(), c1.end(), c2.begin(), op);



TEST_CASE("funktionstemplate", "[nan]")
{
	vector<Circle> c1{{2.0f}, {4.0f}, {5.0f}, {6.0f}};
	copy_if(c1.begin(), c1.end(), c1.begin(), [](Circle c)->bool{return (c.getradius()>4.0f);} );
	c1.shrink_to_fit();

	

	REQUIRE(all_of(c1.begin(), c1.end(), [](Circle c)->bool{return c.getradius()>4.0f;}));	
}




int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}