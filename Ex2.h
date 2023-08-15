#pragma once
#include <iostream>
#include <array>
#include <vector>
#include <forward_list>
#include <list>
#include <algorithm>

void ArrayEx()
{
	std::array<int, 4> myArray{1, 2, 3, 4}; //	= int myArray[4]{1,2,3,4}
	for (const auto& e:myArray)
	{
		std::cout << e << "";
	}
	std::cout << std::endl;
	for (auto itr = myArray.begin(); itr != myArray.end(); ++itr)
	{
		std::cout << *itr << "";
	}
	std::cout << std::endl;

	for (int i=0; i<myArray.size(); i++)
	{
		std::cout << myArray[i] << " ";
	}
	std::cout << std::endl;

	std::sort(myArray.begin(), myArray.end());
	std::min_element(myArray.begin(), myArray.end());
}

void VectorEx()
{
	std::vector<int> v;
	v.push_back(3);
	v.push_back(2);
	v.pop_back();
	v.resize(100);

	std::sort(v.begin(), v.end());
}

void ForwardListEx()
{
	std::forward_list<int>list{10, 11, 1, 2};
	list.push_front(1);
	list.pop_front();
	//std::sort(list.begin(), list.end());
	list.sort();
	for (const auto& e : list)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void ListEx()
{
	std::list<int> list {10, 11, 1, 2};
	list.push_front(1);
	list.push_front(100);
	list.pop_front();
	list.pop_back();

	list.sort();
	for (const auto& e : list)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void Ex2() 
{
	ArrayEx();
	VectorEx();
	ForwardListEx();
	ListEx();
}