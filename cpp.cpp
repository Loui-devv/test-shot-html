#include <iostream>
#include <string>

using namespace std;

int main()
{

    string Username = "U";
    string Password = "P";

    string username;
    string password;

    cout <<"Enter user name: " << endl;
    cin >>username;
    cout <<"Enter password: " << endl;
    cin >>password;



    if(username != Username) {
        cout<<"Incorrect."<<endl;

    }
    else {
        cout<<"You have log in!"<<endl;
    }

    return 0;


}
