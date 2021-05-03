//Julian Pabon
//cis 1202.501
//may 2, 2021

#include <iostream>
using namespace std;
#include <typeinfo>
//define template
template <class T>
//function defenition
T half(T value);

int main()
{
	//define variables	
	double a = 7.0;
	float b = 5.0f;
	int c = 3;
	//output and call functions
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
}

template<class T>
T half(T value)
{
	//test for type double or float
	if (typeid(value).name() == "double" || typeid(value).name() == "float");
	{
		return (value / 2);
	}
	//if not double or float, convert into int
	return static_cast<int>(round((value / 2.0)));
}