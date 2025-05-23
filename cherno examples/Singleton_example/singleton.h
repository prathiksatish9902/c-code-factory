#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
#include <vector>
class Singleton
{
    // public:
    //     static Singleton& getInstance();
    //     void add(int i);
    //     int get(int i) const;
    //     int size() const;

    // private:
    //     Singleton();
    //     std::vector<int> m_vector;

private:
    static Singleton* m_sptr;
    std::vector<int> m_vector;
    Singleton();

public:
    static Singleton* getInstance();
        void add(int i);
        int get(int i) const;
        int size() const;


};

#endif // SINGLETON_H
