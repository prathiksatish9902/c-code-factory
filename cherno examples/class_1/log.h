#ifndef LOG_H
#define LOG_H
#include<iostream>
class Log
{
private:
    int m_logLevel = logLevelInfo;
public:
    const int logLevelError = 0;
    const int logLevelWarning = 1;
    const int logLevelInfo = 2;

    Log();
    void SetLevel(int level);
    void Warn(const char* message);
    void Error(const char* message);
    void Info(const char* message);

};

#endif // LOG_H
