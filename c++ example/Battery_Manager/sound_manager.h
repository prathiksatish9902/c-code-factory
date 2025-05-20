#ifndef SOUND_MANAGER_H
#define SOUND_MANAGER_H
#include <iostream>
class SoundManager
{
private:
    std::string m_soundName;
public:
    SoundManager();
    ~SoundManager();
    std::string getsoundName() const;
    void setSoundName(const std::string &newSoundName);

    void Announce();
};

#endif // SOUND_MANAGER_H
