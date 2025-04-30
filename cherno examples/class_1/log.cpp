#include "log.h"

Log::Log() {}

void Log::SetLevel(int level)
{
    m_logLevel = level;
}

void Log::Warn(const char *message)
{
    if(m_logLevel >= logLevelWarning)
    std::cout<<"warning:"<<message<<std::endl;
}

void Log::Error(const char *message)
{
    if(m_logLevel >= logLevelError)
    std::cout<<"error:"<<message<<std::endl;

}

void Log::Info(const char *message)
{
    if(m_logLevel >= logLevelInfo)
    std::cout<<"info:"<<message<<std::endl;

}
