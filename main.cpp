#include<iostream>


int main()
{
	
}

/*
	std::string s1, s2;

	s1 = "Hello";
	s2 = "world";
	s1 = s2;
	s1 += s2;��

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
	//char Ư��ȭ
	std::string s1{"�����ٶ󸶹ٻ�"};
	std::cout << s1 << std::endl;

	// wchar_t Ư��ȭ
	char ch1 = '��';
	wchar_t ch2 = L'��';
	std::cout << ch1 << std::endl;
	std::wcout << ch2 << std::endl;
*/

/*
	#include<iostream>
#include<string>
#include<sstream>// string stream

//..�� .��..,.�� ��ȭ ����
// �г��� ��� ������ �̸�

int main()
{
	std::string nick{"Doggy"};
	int rarity{ 5 };
	std::string itemName{"������"};
	std::ostringstream oss;
	oss<<nick<<"����"<<rarity<<"��"<<itemName<<"��/�� ��ȭ ����" << std::endl;
	std::cout << oss.str() << std::endl;

	char output[512];
	snprintf(output, sizeof(output),
		"%s���� %d�� %s��/�� ��ȭ ����!",
		nick.c_str(),rarity,itemName.c_str()
		);
		std::cout << output << std::endl;
}
*/