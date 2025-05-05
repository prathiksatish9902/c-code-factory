#include "log.h"

Log::Log() {}

void Log::SetLevel(Level level)
{
    m_logLevel = level;
}

void Log::Warn(const char *message)
{
    if(m_logLevel >= warning)
    std::cout<<"warning:"<<message<<std::endl;
}

void Log::Error(const char *message)
{
    if(m_logLevel >= error)
    std::cout<<"error:"<<message<<std::endl;

}

void Log::Info(const char *message)
{
    if(m_logLevel >= info)
    std::cout<<"info:"<<message<<std::endl;

}
