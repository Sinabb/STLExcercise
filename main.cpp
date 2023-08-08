#include<iostream>


int main()
{
	
}

/*
	std::string s1, s2;

	s1 = "Hello";
	s2 = "world";
	s1 = s2;
	s1 += s2;ㅋ

	std::cout << s1[0] << std::endl;
	if (s1==s2)
	{
		if (s1 > s2) {

		}
	}
	s1.size();
	s1.c_str();
	std::cout << s1 << std::endl;
	s1.begin();
	s1.end();
*/

/*
		std::string s1;
	int value = 123;
	s1 = std::to_string(value);
	value = std::stoi(s1);
	std::cout << s1 << std::endl;

	return 0;
*/

/*
	_wsetlocale(LC_ALL, L"korean");
	std::wcout.imbue(std::locale("korean"));
	//char 특수화
	std::string s1{"가나다라마바사"};
	std::cout << s1 << std::endl;

	// wchar_t 특수화
	char ch1 = '가';
	wchar_t ch2 = L'나';
	std::cout << ch1 << std::endl;
	std::wcout << ch2 << std::endl;
*/

/*
	#include<iostream>
#include<string>
#include<sstream>// string stream

//..님 .성..,.를 강화 성공
// 닉네임 레어도 아이템 이름

int main()
{
	std::string nick{"Doggy"};
	int rarity{ 5 };
	std::string itemName{"서리한"};
	std::ostringstream oss;
	oss<<nick<<"님이"<<rarity<<"성"<<itemName<<"을/를 강화 성공" << std::endl;
	std::cout << oss.str() << std::endl;

	char output[512];
	snprintf(output, sizeof(output),
		"%s님이 %d성 %s을/를 강화 성공!",
		nick.c_str(),rarity,itemName.c_str()
		);
		std::cout << output << std::endl;
}
*/