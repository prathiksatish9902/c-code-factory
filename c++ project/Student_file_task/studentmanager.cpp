#include "studentmanager.h"
#include<vector>
StudentManager::StudentManager() {
    std::cout<<"student manager constructor called"<<std::endl;
    //m_fileOperation = new Readcsv;
   // m_studentDataVector = m_fileOperation->readData();

}

StudentManager::~StudentManager()
{
    std::cout<<"student manager destructor called"<<std::endl;
    delete m_fileOperation;


}



// void StudentManager::init_student()
// {


// }
