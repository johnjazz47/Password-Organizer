#include<iostream>
#include<fstream>

class endec {
private:
	const int key = 17;
	std::string file = "rawdata.txt";
protected:
	std::string password;
public:
	void set_password();
	void encrypt();
	void decrypt();
};

void endec::set_password()
{
	std::cout << "Please enter your password: ";
	std::cin >> password;
	std::cout << std::endl;
}

void endec::encrypt()
{
	std::fstream fin, fout;

	fin.open(file, std::fstream::in);
	fout.open("encrypted_data.txt", std::fstream::out);

	for (int i = 0; i < password.length() && fin >> password[i]; i++)
	{
		int temp = (key + password[i]);

		fout << (char)temp;
	}
	fin.close();
	fout.close();
}

void endec::decrypt()
{
	std::fstream fin, fout;

	fin.open("encrypted_data.txt", std::fstream::in);
	fout.open(file, std::fstream::out);

	for (int i = 0; i < password.length() && fin >> password[i]; i++)
	{
		int temp = (password[i] - key);

		fout << (char)temp;
	}
	fout.close();
	fin.close();
}

int main()
{
	endec test;

	test.set_password();
	test.decrypt();
	test.encrypt();

	return 0;
}