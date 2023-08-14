#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

////{1,2,3,4}
std::ostream& operator<<(std::ostream& os, std::vector<int> v)
{
std::cout << "{";
for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		std::cout << *it;
		if (it != v.end() - 1)
		{
			std::cout << ",";
		}
	}
	std::cout << "}";
	return os;
}

bool Compare(int x, int y)
{
	return x > y;
}

int main()
{
	std::vector<int> numbers{5, 2, 3, 4, 1};
	/*
	int x = 5, y = 3;

	std::cout << std::min(x, y) << std::endl;
	std::cout << std::min({ 1,2,3,4, }) << std::endl;


	std::vector<int>::iterator result= std::min_element(numbers.begin(), numbers.end());
	std::cout << *result << std::endl;*/

	//function + object = functor
	struct ComparreObject
	{
		bool operator()(int x, int y)
		{
			return x > y;
		}
	};
	ComparreObject c;

	// std::sort(numbers.begin(), numbers.end(), c); // functor
	//std::sort(numbers.begin(), numbers.end(), Compare); //function

	//predicate
	//std::sort(numbers.begin(), numbers.end(), std::less<int>());
	std::sort(numbers.begin(), numbers.end(), [](int x, int y)
		{
			return x > y;
		}); // lambda 

	//인덱스 기반
	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << std::endl; // 인덱스 기반
	}
	//이터레이터
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cout << numbers << std::endl;// 오름차순

	// for_each
	std::for_each(numbers.begin(), numbers.end(), [](const int& val)
		{
			std::cout << val << std::endl;
		});
	//range -based : 범위 기반
	for (const auto& e : numbers)
	{
		std::cout << e << std::endl;
	}

}
/*
f(int x) call by value
f(const int x) const
f(int& x) call by reference
f(const int& x) const 
*/



