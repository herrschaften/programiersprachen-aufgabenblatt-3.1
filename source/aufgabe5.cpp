#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

bool is_multiple_of_3(unsigned int i)
{
	return i%3==0;
}

bool not_multiple_of_3(unsigned int i)
{
	return i%3!=0;
}

TEST_CASE("filter alle vielfache von drei", "[erase]")
{
	//vector mit zahlen 1-100 füllen
	vector<unsigned int> v(100);
	int n = 1;
	generate(v.begin(), v.end(), [&n] {return n++; });

	//zahlen !%3 entfernen
	v.erase(std::remove_if(v.begin(), v.end(), not_multiple_of_3), v.end());	

	//test
	REQUIRE(std::all_of(v.begin(), v.end(), is_multiple_of_3));
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}