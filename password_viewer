//John Jasinski
//CIS 375 Group Project
//July 21 2022

#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>

using namespace std;

void viewPasswords(){
    string username_master = "";
    string password_master = "";
    fail_counter = 0
    while (!{username_master,password_master} in master_list){
        cout << "Please enter master username" << endl;
        cin >> username_master;
        cout << "Please enter password" << endl;
        cin >> password_master
        if (fail_counter > 4){
            cout << "You have exceeded your attempts. Try again later."
            return;
        }
        fail_counter++;
    }
    string line = "";
    ofstream pass_file;
    pass_file.open("UsernameCIS375.xlsx", ios::app);
    if (pass_file.is_open()){
        while(get_line(pass_file, line){
            cout << line << endl;
        }
    }
    pass_file.close();
}
