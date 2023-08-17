#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>


class Student
{
public:
	int mNumber;
	std::string mName;
	int mScore;
public:
	void Print()
	{
		std::cout << "[" << mNumber << "]" <<
			mName << " : " << mScore << std::endl;
	}
};

void AddStudent(std::vector<Student>& v)
{

	std::cout << "번호 이름 점수 :";
	Student newStudent{};
	if (std::cin >> newStudent.mNumber >> newStudent.mName >> newStudent.mScore)
	{
		/*for (const auto& e : v)
		{
			if (e.mNumber == newStudent.mNumber)
			{
				std::cout << "중복된 번호입니다." << std::endl;
				return;
			}
		}*/
		std::find_if(v.begin(), v.end(), [&](const auto& e) {return e.mNumber == newStudent.mNumber; });
		if (itr != v.end())
		{
			
		}
		v.push_back(newStudent);
	}
	else
	{
		std::cout << "잘못된 입력입니다" << std::endl;
	}

}

void RemoveStudent(std::vector<Student>& v)
{
	std::cout << "삭제할 번호" << std::endl;
	int number;
	if (std::cin>>number)
	{
	/*	for (auto itr = v.begin(); itr != v.end();itr++)
		{
			if (itr->mNumber == number)
			{
				v.erase(itr);
				break;
			}
		}*/
	}
	else
	{
		std::cout << "번호를 입력해 주세요" << std::endl;
	}
}

void PrintStudent(std::vector<Student>& v)
{
	for (const auto& e : v)
	{
		e.Print();
	}
}

void PrintAverage(std::vector<Student>& v)
{
	int total{};
	for (const auto& e:v)
	{
		total += e.mScore;
	}
	std::cout << "총점" << total << "평균" << total / v.size() << std::endl;
}

void PrintOverAverage(std::vector<Student>& v)
{
	int total{};
	for (const auto& e : v)
	{
		total += e.mScore;
	}
	std::cout << "총점" << total << "평균" << total / v.size() << std::endl;
	int average = total / static_cast(v.size());
	for (const auto& e : v)
	{
		if (e.mScore >= average)
		{
			total += e.mScore;
		}
	}
}

void Ex4()
{
	std::vector<Student>Student_v
	{
		{1, "Doggy", 100 },
		{ 2,"Kitty", 50 },
		{ 3,"Piggy", 90 },
		{ 4,"Bunny", 20 }
	};

	//{번호 이름 점수}
	// 1. 추가
	// 2. 제거
	// 3. 출력
	// 4. 평균 , 총점
	// 5. 평균 이상의 학생 목록
	// 6. 종료
	bool isQuit{ false };
	while (!isQuit)
	{
		std::cout << "1.학생 추가" << std::endl;
		std::cout << "2.학생 제거" << std::endl;
		std::cout << "3.학생 출력" << std::endl;
		std::cout << "4.학생 평균 및 총점" << std::endl;
		std::cout << "5.평균 이상 학생 목록" << std::endl;
		std::cout << "6.종료" << std::endl;
	}

	int command{};
	std::cin >> command;

	switch (command)
	{
	case 1:
		AddStudent(Student_v);
		break;
	case 2:
		RemoveStudent(Student_v);
		break;
	case 3:
		PrintStudent(Student_v);
		break;
	case 4:
		PrintAverage(Student_v);
		break;
	case 5:
		PrintOverAverage(Student_v);
		break;
	case 6:
		isQuit = true;
		break;
	default:
		std::cerr << "잘못된 명령어 입니다." << std::endl;
		break;
	}
}