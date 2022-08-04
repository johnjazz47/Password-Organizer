#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string randPassword()
{
    int counter = 0;
    int string_length = 15;
    char add;
    int val;
    string password = "";
    while(password.length() <= string_length)
    {
        if (counter >= 0 && counter < 2)
        {
            val = rand() % 25 + 65;
            add = val;
            password.push_back(add);
        }
        else if (counter >= 2 && counter < 11)
        {
            val = rand() % 25 + 97;
            add = val;
            password.push_back(add);
        }
        else if (counter >= 11 && counter < 12 )
        {
            val = rand() % 14 + 33;
            add = val;
            password.push_back(add);
        }
        else
        {
            val = rand() % 9 + 48;
            add = val;
            password.push_back(add);
        }
        counter++;
    }
    return password;
}
int main (int argc, char *argv[]){
    randPassword();
    return 0;
}
