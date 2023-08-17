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

	std::cout << "��ȣ �̸� ���� :";
	Student newStudent{};
	if (std::cin >> newStudent.mNumber >> newStudent.mName >> newStudent.mScore)
	{
		/*for (const auto& e : v)
		{
			if (e.mNumber == newStudent.mNumber)
			{
				std::cout << "�ߺ��� ��ȣ�Դϴ�." << std::endl;
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
		std::cout << "�߸��� �Է��Դϴ�" << std::endl;
	}

}

void RemoveStudent(std::vector<Student>& v)
{
	std::cout << "������ ��ȣ" << std::endl;
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
		std::cout << "��ȣ�� �Է��� �ּ���" << std::endl;
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
	std::cout << "����" << total << "���" << total / v.size() << std::endl;
}

void PrintOverAverage(std::vector<Student>& v)
{
	int total{};
	for (const auto& e : v)
	{
		total += e.mScore;
	}
	std::cout << "����" << total << "���" << total / v.size() << std::endl;
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

	//{��ȣ �̸� ����}
	// 1. �߰�
	// 2. ����
	// 3. ���
	// 4. ��� , ����
	// 5. ��� �̻��� �л� ���
	// 6. ����
	bool isQuit{ false };
	while (!isQuit)
	{
		std::cout << "1.�л� �߰�" << std::endl;
		std::cout << "2.�л� ����" << std::endl;
		std::cout << "3.�л� ���" << std::endl;
		std::cout << "4.�л� ��� �� ����" << std::endl;
		std::cout << "5.��� �̻� �л� ���" << std::endl;
		std::cout << "6.����" << std::endl;
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
		std::cerr << "�߸��� ��ɾ� �Դϴ�." << std::endl;
		break;
	}
}