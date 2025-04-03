#include "management.h"
#include <iostream>

Management::Management()
{
    cout<<"Management Constructor"<<endl;
}



void Management::initStudent(list<Student>* Student)
{
    m_students =  Student;
}



void Management::initStaff(vector<Staff>* Staff)
{
    m_staffs = Staff;
}



void Management::addStudent(int ID,string name,string branch)
{
    m_students->push_back(Student(ID,name,branch));
}



void Management::deleteStudent(int ID)
{
    for(auto i = m_students->begin();i != m_students->end();i++)
    {
        if(i->getID() == ID)
        {
            m_students->erase(i);
            cout<<"Student with ID "<<ID<<" deleted"<<endl;
            return;
        }
    }
    cout<<"Student with ID "<<ID<<" not found"<<endl;
}



void Management::updateStudent(int ID, string name, string branch)
{
    for(auto i = m_students->begin();i != m_students->end();i++)
    {
        if(i->getID() == ID)
        {
            i->setDetails(name,branch);
        }
    }
    cout<<"Student with ID "<<ID<<" not found"<<endl;
}



void Management::addStaff(int ID, string name, string dept)
{
    m_staffs->push_back(Staff(ID,name,dept));
}



void Management::deleteStaff(int ID)
{
    for(auto i = m_staffs->begin();i != m_staffs->end();i++)
    {
        if(i->getID() == ID)
        {
            m_staffs->erase(i);
            cout<<"Staff with ID "<<ID<<" deleted"<<endl;
            return;
        }

    }
    cout<<"Staff with ID "<<ID<<" not found"<<endl;

}



void Management::updateStaff(int ID, string name, string department)
{
    for(auto i = m_staffs->begin();i != m_staffs->end();i++)
    {
        if(i->getID() == ID)
        {
            i->setStaffDetails(name,department);
        }
    }
    cout<<"Staff with ID "<<ID<<" not found"<<endl;
}



void Management::findStudent(int ID)
{
    for(auto i = m_students->begin();i != m_students->end();i++)
    {
        if(i->getID() == ID)
        {
            cout<<i->getName()<<endl;
            cout<<i->getBranch()<<endl;
        }
    }
    cout<<"Student with ID "<<ID<<" not found"<<endl;
}



void Management::findStaff(int ID)
{
    for(auto i = m_staffs->begin();i != m_staffs->end();i++)
    {
        if(i->getID() == ID)
        {
            cout<<i->getName()<<endl;
            cout<<i->getDepartment()<<endl;
        }
    }
    cout<<"Staff with ID "<<ID<<" not found"<<endl;
}



void Management::displayStudent()
{
    for(auto i = m_students->begin();i != m_students->end();i++)
    {
        cout<<i->getID()<<" "<<i->getName()<<" "<<i->getBranch()<<endl;
    }
}



void Management::displayStaff()
{
    for(auto i = m_staffs->begin();i != m_staffs->end();i++)
    {
        cout<<i->getID()<<" "<<i->getName()<<" "<<i->getDepartment()<<endl;
    }
}



Management::~Management()
{
    cout<<"Management Destructor"<<endl;
    delete m_students;
    delete m_staffs;
}
