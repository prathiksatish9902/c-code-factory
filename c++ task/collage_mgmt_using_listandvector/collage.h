#ifndef COLLAGE_H
#define COLLAGE_H
#include"department.h"
#include<vector>

class Collage
{
private:
    int m_id;
    std::string m_name;
    std::vector<Department> m_departmentName;
public:
    Collage(int id, std::string name, std::string department);
    ~Collage();
    void setDepartmentName(Department *newDepartmentName);
    Department *getDepartmentName() const;



};

#endif // COLLAGE_H
