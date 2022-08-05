#pragma once
#include<iostream>
#include<fstream>

//TODO: Code function for verifying password and username

class endec {
private:
	const int key = 17;
	std::string file = "rawdata.txt";
protected:
	std::string username;
	std::string password;
public:
	void set_username(std::string);
	void set_password(std::string);
	void encrypt();
	void decrypt();
};

void endec::set_username(std::string enteredusername)//method to set the username entered in textbox to a class member
{
	username = enteredusername;
}
void endec::set_password(std::string enteredpassword)//method to set the password entered in textbox to a class member
{
	password = enteredpassword;
}

void endec::encrypt()		//will encrypt the file used for storing login information for user set websites and apps
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

void endec::decrypt()		//will decrypt encrypted files that are used for storing user login information
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