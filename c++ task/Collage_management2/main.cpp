#include"collage.h"
#include <iostream>
using namespace std;


int main()
{
    College myCollege;

    int choice,option = 0;
    int True = 1;
    int ID;
    string Name;
    string Branch;
    while(true)
    {
        cout<<"Enter 1.Student 2.Staff 3.Exit"<<endl;
        cin>>option;
        switch(option)
        {
        case student:
        {
            while(True)
            {
                cout<<"Enter 1.Add Student"<<endl<<"2.Delete student "<<endl<<"3.Update Student Details"<<endl;
                cout<<"4.Search Student"<<endl<<"5. Display student"<<endl;
                cout<<"6.Exit"<<endl;
                cin>>choice;
                switch(choice)
                {
                case Add:cout<<"Enter StudentID :";
                    cin>>ID;
                    cout<<"Name :";
                    cin>>Name;
                    cout<<"Branch :";
                    cin>>Branch;
                    myCollege.m_management->addStudent(ID,Name,Branch);
                    break;
                case Delete:cout<<"Enter StudentID :"<<endl;
                    cin>>ID;
                    myCollege.m_management->deleteStudent(ID);
                    break;
                case Update:cout<<"Enter StudentID :";
                    cin>>ID;
                    cout<<"NewName :";
                    cin>>Name;
                    cout<<"NewBranch :";
                    cin>>Branch;
                    myCollege.m_management->updateStudent(ID,Name,Branch);
                    break;
                case Search:cout<<"Enter StudentID :"<<endl;
                    cin>>ID;
                    myCollege.m_management->findStudent(ID);
                    break;
                case Display:myCollege.m_management->displayStudent();
                    break;
                case Exit:
                    True = 0;
                    break;
                default:
                    cout<<"Enter Valid option"<<endl;
                    break;
                }
            }
        }
        break;
        case staff:
        {
            True = 1;
            while(True)
            {
                cout<<"Enter 1.Add Staff"<<endl<<"2.Delete staff "<<endl<<"3.Update Staff Details"<<endl<<"4.Search Staff"<<endl<<"5. Display staffs"<<endl;
                cout<<"6.Exit"<<endl;
                cin>>choice;
                switch(choice)
                {
                case Add:cout<<"Enter StaffID :";
                    cin>>ID;
                    cout<<"Name :";
                    cin>>Name;
                    cout<<"Department :";
                    cin>>Branch;
                    myCollege.m_management->addStaff(ID,Name,Branch);
                    break;
                case Delete:cout<<"Enter StaffID :"<<endl;
                    cin>>ID;
                    myCollege.m_management->deleteStaff(ID);
                    break;
                case Update:cout<<"Enter StaffID :";
                    cin>>ID;
                    cout<<"NewName :";
                    cin>>Name;
                    cout<<"NewDepartment :";
                    cin>>Branch;
                    myCollege.m_management->updateStaff(ID,Name,Branch);
                    break;
                case Search:cout<<"Enter StaffID :"<<endl;
                    cin>>ID;
                    myCollege.m_management->findStaff(ID);
                    break;
                case Display:myCollege.m_management->displayStaff();
                    break;
                case Exit:
                    True = 0;
                    break;
                default:
                    cout<<"Enter Valid option"<<endl;
                    break;
                }
            }
        }
        break;
        case Logout:
        {
            exit(0);
        }
        break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }
    return 0;
}
