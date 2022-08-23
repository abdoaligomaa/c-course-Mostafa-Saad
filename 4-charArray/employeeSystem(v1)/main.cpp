// my first project using cpp
// an emplyee syetem v1

#include <iostream>
using namespace std;
int main()
{
    int choice, employeeNumber = 0;
    bool keepGoing = true;
    // the database that i will use is array
    int salary[100], age[100];
    string name[100];
    while (keepGoing)
    {
        cout << "Welcome to Employee System" << endl;
        cout << "Enter 1 to Add New Employee " << endl;
        cout << "Enter 2 to Print All Employees " << endl;
        cout << "Enter 3 to delete Emplyee by it's Age " << endl;
        cout << "Enter 4 to Update The Salary by Employee Name" << endl;
        cout << "Enter 5 to Exit this programe " << endl;
        cout << "*****************************" << endl;

        cin >> choice;
        if (choice == 1)
        {
            cout << "Please Enter Emplyee Name: ";
            cin >> name[employeeNumber];
            cout << "Please Enter Emplyee Age: ";
            cin >> age[employeeNumber];
            cout << "Please Enter Emplyee Salary: ";
            cin >> salary[employeeNumber];
            employeeNumber++;
            cout << "*****************************" << endl;
        }
        else if (choice == 2)
        {
            cout << "Employees in my company" << endl;
            for (size_t i = 0; i < employeeNumber; i++)
            {
                cout << "employee Number" << i + 1 << endl;
                cout << "Name : " << name[i] << endl;
                cout << "Age: " << age[i] << endl;
                cout << "Salary: " << salary[i] << endl;
                cout << "*****************************" << endl;
            }
        }
        else if (choice == 3)
        {
            // first get the index for this emplyee
            // then delete it;
        }
        else if (choice == 4)
        {
            // first get the index for this emplyee
            // then update it;
            int Esalary, index = -1;
            string Ename;
            cout << "please Enter name for Emplyee which you want to update : ";
            cin >> Ename;
            // get it's index by his name
            for (size_t i = 0; i < employeeNumber; i++)
            {
                if (Ename == name[i])
                {
                    index=i;
                }
            }
            if(index==-1){
                cout<<"Please Enter the correct Name for this employee";
                continue;
            }
            cout << "Please Enter the Updated Salary For This Employee : ";
            cin>>Esalary;
            salary[index]=Esalary;
            cout << "*****************************" << endl;
        }
        else if (choice == 5)
        {
            keepGoing = false;
            cout << "*****************************" << endl;
        }
    }
    return 0;
}