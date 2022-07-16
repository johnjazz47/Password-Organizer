#include<iostream>
#include<fstream>

class endec {
private:
	int key;
	std::string file = "rawdata.txt";
protected:
	std::string password;
public:
	void encrypt();
	void decrypt();
};

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
}