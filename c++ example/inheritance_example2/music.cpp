#include "music.h"
#include<iostream>
Music::Music(std::string songname)//:m_songname(songname)
{
    m_songname = songname;
    std::cout<<"music const called"<<std::endl;

}

Music::~Music()
{
    std::cout<<"music destruct called"<<std::endl;

}

void Music::playMusic()
{
    std::cout<<"play music function called"<<std::endl;

}

void Music::display()
{
    std::cout<<"music display function called"<<std::endl;
    std::cout<<"song name: "<<m_songname<<std::endl;
}
