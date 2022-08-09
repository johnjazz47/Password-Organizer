//John Jasinski
//CIS 375 Group Project
//July 21 2022

#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>

using namespace std;

unordered_map <string, string> password_hash;

void add(unordered_map<string, string> password_hash)
{
    string username = "";
    string password = "";
    
    cout << "Please enter username" << endl;
    cin >> username;
    cout << "Please enter password" << endl;
    cin >> password;
    ofstream pass_file;
    pass_file.open("UsernameCIS375.xlsx", ios::app);
    pass_file << "Username: " << username << " Password: " << password << endl;
    password_hash[username] = password;
    pass_file.close();
}

void remove()
{
    string username = "";
    cout << "Please enter the user name you wish to be deleted" << endl;
    cin >> username;
    password_hash.erase(username);
    ofstream pass_file;
    pass_file.open("UsernameCIS375.xlsx");
    for (auto key : password_hash)
    {
        pass_file << "Username: " << key.first << " Password: " << key.second << endl;
    }
    pass_file.close();
}

void clear()
{
    password_hash.clear();
    ofstream pass_file;
    pass_file.open("UsernameCIS375.xlsx");
    pass_file.close();
}
