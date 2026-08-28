#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

string ID;
string name;
string whoId;
int choice;
void checkID();
void teacher();
void idCheck();

int main()
{
    ofstream Students("Register");
    idCheck();
    return 0;
}



void menu()
{
    cout << "1. Student\n";

    cout << "2. Teacher\n";

}

void idCheck()
{

    menu();

    cin >> choice;

    switch (choice)
    {
    case 1:
        checkID();
        break;
    
    case 2:
        teacher();
        break;

    default:
        break;
    }

}





void checkID()
{
    
    if(choice == 1)
    {
        ID = "Student";
    }
    else
    {
        ID = "Teacher";
    }
    cout << "Enter " << ID << " ID:";
    
    cin >> whoId;

    if(ID == "Student")
    {
        if(whoId[0] == 'P')
        {
             cout << "Vaild ID \n";
        }
        else
        {
            cout << "Invalid ID \n";
            checkID();
        }
    }
    else
    {
        if(whoId[0] == 'T')
        {
           cout << "valid ID \n";
        }
        else 
        {
            cout << "Invalid ID \n";
            checkID();
        }
    }
}

void checkName()
{
    cout << "Enter " << ID  << whoId << " name: \n";
    getline(cin, name);
}




void teacher()
{

}