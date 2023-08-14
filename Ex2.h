#pragma once
#include <iostream>
#include <array>

void Ex2()
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
}