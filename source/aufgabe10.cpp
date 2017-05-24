#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <vector>
using namespace std;


template<typename Container, typename Operate> Container filter(Container const& c1, Operate op)
	{
		Container c2 (c1.size());
		copy_if(c1.begin(), c1.end(), c2.begin(), op);
		c2.shrink_to_fit();
		return c2;
	}

	bool is_even(int n) 
	{
		return(n%2 == 0);
	}

TEST_CASE("funktionstemplate", "[nan]")
{
	vector<int> v{1,2,3,4,5,6};
	vector<int> v2=filter(v, is_even);

	REQUIRE(all_of(v2.begin(), v2.end(), [](int i)->bool{return i%2==0;}));	
}




int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}