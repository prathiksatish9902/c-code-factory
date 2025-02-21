#include <iostream>
#include<vector>

using namespace std;
// friend std::ostream& operator <<(std::ostream& m);
// // {
// //     m<<"begin"<<v1.begin()<<std::endl;
// //     return m;
// // }
int main()
{
    vector<std::string> v1;

    //push
    v1.push_back("abc");
    v1.push_back("def");
    v1.push_back("ghi");
    v1.push_back("jkl");
    v1.push_back("mno");
    v1.push_back("pqr");
    v1.push_back("stu");
    v1.push_back("vw");
    v1.push_back("xyz");

    for(int i=0;i<size(v1);i++){
        std::cout<<1<<v1[i]<<std::endl;
    }

//pop

    v1.pop_back();
    for(int i=0;i<size(v1);i++){
        std::cout<<2<<v1[i]<<std::endl;
    }

//insert

    v1.insert(v1.begin(),"mno");
    for(int i=0;i<size(v1);i++){
        std::cout<<3<<v1[i]<<std::endl;
    }

//at()
    std::cout<<4<<"hi"<<v1.at(1)<<std::endl;


    //back()

    std::cout<<5<<"hello"<<v1.back()<<std::endl;



    //begin()
    //v1.begin();

    //  std::ostream& operator <<(std::ostream& m)
    // {
    //     m<<"begin"<<v1.begin()<<std::endl;
    //      return m;
    // }
   //std::cout<<6<<v1.begin()<<std::endl;
    // std::ostream& operator <<(std::ostream& m)
    // {
    //     m<<"begin"<<v1.begin()<<std::endl;
    //     return m;
    // }


    //capacity()


    std::cout<< " hi" <<        v1.capacity()<<std::endl;


//end()
    //std::cout<<7<<v1.end()<<std::endl;

    //erase
    v1.insert(v1.begin()+2,"mdo");
    for(int i=0;i<size(v1);i++){
        std::cout<<7<<v1[i]<<std::endl;
    }
    v1.erase(v1.end());
    for(int i=0;i<size(v1);i++){
        std::cout<<8<<v1[i]<<std::endl;
    }
    v1.erase(v1.begin()+3);
    for(int i=0;i<size(v1);i++){
        std::cout<<9<<v1[i]<<std::endl;
        std::cout<<10<<sizeof(v1)<<v1.capacity()<<std::endl;
    }
    return 0;
}
