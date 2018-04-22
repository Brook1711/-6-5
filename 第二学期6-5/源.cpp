#include<iostream>
#include<string>

using namespace std;

string Converse(string str)
{
	string tmp = "";
	int key(0);
	key = int(str[str.size() - 1]) - 64;
	for (int i = 0; i < str.size() - 1; i++)
	{
		if (str[i] >= 'A'&&str[i] <= 'Z')
		{
			char c;
			if (str[i] >= 'A' + key)
				c = str[i] - key;
			else
				c = str[i] - key + 26;
			tmp += c;
		}
		else
		{
			tmp += str[i];
		}
	}
	return tmp;
}

int main()
{
	string str;
	getline(cin, str);
	cout << Converse(str);
	
	//system("pause");
	return 0;
}