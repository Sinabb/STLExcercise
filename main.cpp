#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v;
	int num;
	int minCount = 0;
	while (std::cin >> num)
	{
		v.push_back(num);
		std::cout << "Out:" << num << std::endl;
		if (num < v[minCount])
		{
			minCount = v.size() - 1;
		}
	}

	std::cout << "�ּҰ���" << minCount << "��°�� �ֽ��ϴ�." << std::endl;
}


/*
	std::vector<int> v;
	int num;
	while (std::cin >> num)
	{
		v.push_back(num);
		std::cout << "Out:" << num << std::endl;
	}

	int total{};
	for (int i :v)
	{
		total += i;
	}
	std::cout << "�հ�:" << total << std::endl;
*/

/*
std::vector<int> v;
	int num{ };
	while (std::cin >>num)
	{
		std::cout << "out"<<num << std::endl;
	}
*/
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

/*
#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v1{2, 3, 1, 5, 6};
	std::vector<std::string>v2{"doggy", "kitty", "bunny"};

	//�迭 ÷��
	std::cout << v1[0] << std::endl;
	for (int i = 0; i < v2.size(); i++)
	{
		std::cout << v2[i] << std::endl;
	}

	//������
	std::vector<int> v3(5);
	std::vector<int> v4(5, 10);
	for (int i = 0; i < v3.size(); i++)
	{
		std::cout << v3[i] << std::endl;
	}

	//Ramge-vased loop:  [0:size) = 0 ~size-1
	// [2:3] = 2�̻� 3����
	// (2:3) = 2�ʰ� 3�̸�
	for (int e:v1]
	{
		std::cout << e << std::endl;
	}

	int numbers[]{ 1,2,3,4,5 };
	for (int number : numbers)
	{
		std::cout << number << std::endl;
	}
	std::vector<int> v5; //���Ұ� 0���� ����
	v5.push_back(2);
	v5.push_back(3);
}
*/