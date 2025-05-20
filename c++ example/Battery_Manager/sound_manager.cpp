#include "sound_manager.h"

SoundManager::SoundManager() {}


SoundManager::~SoundManager()
{

}
std::string SoundManager::getsoundName() const
{
    return m_soundName;
}

void SoundManager::setSoundName(const std::string &newSoundName)
{
    m_soundName = newSoundName;
}

void SoundManager::Announce()
{
    std::cout<<getsoundName()<<std::endl;
}
