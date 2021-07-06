#include<iostream>

class Log{
    private:// Access specifier
    // variables & members  only accesible to this class

    protected:
    // Access specifier
    // variables & members only accesible to the sub class(inherited from here)
        enum Level{
            LevelError=0,LevelWarn,LevelInfo
        };

        Level m_logLevel;

    public:// Access specifier
    // variables & members available outside
        Level getLogLevel(){
            return m_logLevel;
    }
};


class LogWarning : public Log{
    private:

    public:
        LogWarning(){
            m_logLevel = LevelWarn;
        }
        void warn(std::string message){
            if(m_logLevel == LevelWarn)std::cout  << " " << "[WARNING:] " << message << std::endl;
        }
};

int main(){

    LogWarning lw;
    lw.warn("Hello");
    lw.warn("Hey There");

return 0;
}