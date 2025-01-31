#ifndef MUSIC_H
#define MUSIC_H
#include<iostream>
class Music
{
public:
    std::string m_songname;
    Music(std::string songname);
    ~Music();
    void playMusic();
        void display();
};

#endif // MUSIC_H
