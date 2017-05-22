#include <cstdlib>
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main()
{
	//zwei listen erstellen
	list<unsigned int> l0(100);
	list<unsigned int> l1(100);
	
	//l0 mit rand() füllen
	for(auto& l : l0)
	{
		l=rand()%101;
	}
	//l1 mit 1-100 fuellen
	int n = 1;
	generate(begin(l1), end(l1), [&n] {return n++; });

	//liste in vektor kopieren
	vector<unsigned int> v0(l0.size());
	copy(begin(l0), end(l0), begin(v0));


	//set mit liste ini
	set<unsigned int> s(l0.begin(), l0.end());

	//verschiedene zahlen in liste/set
	unsigned int diffnumbrs = s.size();

	//zahlen zwischen 1-100 die nicht vorkommen
	for(auto it=s.begin(); it != s.end(); it++)
	{
		for(auto it1=l1.begin(); it1 != l1.end();)
		{
			if (*it1==*it)
			{
				it1 = l1.erase(it1);
			}	
			else
				++it1;
		}
	}

	map<unsigned int, unsigned int> rate;
	for(auto& key : s)
	{
		unsigned int count = 0;
		for(auto& l : l0)
		{
			if(key == l)
			{
				count++;
			}
		}
		rate[key] = count;
	}

	cout<<"Key : Frequency"<<endl;
	for(auto& it : rate)
		cout<< it.first << " : "<< it.second <<endl;


	
	cout<<"Anzahl verschiedener Zahlen: "<<diffnumbrs<<endl;
	cout<<"Zahlen zwischen 1-100 die nicht vorkommen: "<<endl;
	copy(s.begin(), s.end(), ostream_iterator<int>(cout, ", "));

	

	return 0;
}