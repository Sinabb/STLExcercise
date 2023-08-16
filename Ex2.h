#pragma once
#include <iostream>
#include <array>
#include <vector>
#include <forward_list>
#include <list>
#include <set>
#include <map>
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

void SetEX()
{
	std::set<int> s;
}

void MapEx()
{
	std::map<std::string, std::string> MyMap;
	MyMap.insert({ "+","더하기연산자이면서 이항연산자입니다." });
	MyMap.insert({ ">>","비트 시프트 연산자입니다.." });
	MyMap.insert({ "new","동적 메모리 할당 연산자입니다.delet 주의하세요" });

	std::cout << MyMap["+"] << std::endl;
	MyMap["-"] = "빼기 연산자입니다.";
	for (auto e :MyMap)
	{

	}
}


void Ex2() 
{
	ArrayEx();
	VectorEx();
	ForwardListEx();
	ListEx();
	SetEX();  
	MapEx();

	std::pair<int, int> pt1;
	pt1.first = 1;
	pt1.second = 1;
	pt1 = { 2,2 };
	pt1 = std::make_pair<int, int>(3, 3);

	std::tuple<int, int, std::string> st1;
	st1 = { 1, 100, "kitty"};
	st1 = std::make_tuple<int, int, std::string>(2, 50, "Doggy");

	for (int i = 0; i < std::tuple_size<std::tuple<int, int, std::string>>::value; i++)
	{

	}
		std::cout << std::get<0>(st1) << std::endl;
}