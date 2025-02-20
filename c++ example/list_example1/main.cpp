#include <iostream>
#include<list>
using namespace std;
void display(list<int> &l){
    list<int>::iterator i;
    for(i = l.begin();i!=l.end();++i)
        cout<<*i<<",";
    cout<<"\n";
}
int main()
{
    list<int>list1;
    cout << "-----------------------------------------------------------" << endl;
//push back & push front
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_front(5);
    list1.push_front(6);
    list1.push_front(7);
    // for(int i = 0;i<size(list1);i++){
    //     std::cout<<list1[i]<<std::endl;
    // }
    display(list1);

    cout << "-----------------------------------------------------------" << endl;
//back
    std::cout<<list1.back()<<std::endl;
//begin
   // std::cout<<list1.begin()<<std::endl;
//display(list1.begin());


    return 0;
}
