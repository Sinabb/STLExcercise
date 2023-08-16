#pragma once
#include <iostream>
#include <map>
#include <string>

struct Student
{
    int mNumber;
    int mScore;
    std::string mName;
};

void StudentMap()
{
    std::map<int, Student> students
    {
        {1, { { 1 },{ 100 }, "Doggy" }},
        { 2, { { 2 }, { 50 }, "Kitty" } },
        { 3, { { 3 }, { 90 }, "Piggy" } },
        { 4, { { 4 }, { 20 }, "Bunny" } }
    };
    students.insert(std::make_pair<int,Student>(5,{5,80,"mansu"}));
    for (auto Student:students)
    {
        std::cout << Student.second.mNumber << ":" <<
            Student.second.mName << "," <<
            Student.second.mScore << std::endl;

    }
}
void Ex3()
{
    StudentMap();
}

/*
    struct Student
{
    int mNumber;
    int mScore;
    std::string mName;
};

void StudentMap()
{
    std::map<int, Student> students;
    students.insert({ 1,  {{ 1 },{ 100 }, "Doggy" } });
    students.insert({ 2, {{ 2 }, { 50 }, "Kitty" } });
    students.insert({ 3, {{ 3 }, { 90 }, "Piggy" } });
    students.insert({ 4, {{ 4 }, { 20 }, "Bunny" } });

    std::cout << Student << std::endl;
}
*/