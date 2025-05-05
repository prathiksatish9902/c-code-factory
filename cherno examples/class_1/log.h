#ifndef LOG_H
#define LOG_H
#include<iostream>
class Log
{

public:
    // const int logLevelError = 0;
    // const int logLevelWarning = 1;
    // const int logLevelInfo = 2;
    enum Level{
        error = 0,
        warning,
        info
    };

    Log();
    void SetLevel(Level level);
    void Warn(const char* message);
    void Error(const char* message);
    void Info(const char* message);

private:
    Level m_logLevel = info;

};

#endif // LOG_H
