#include <iostream>
#include<string>
using namespace std;

class Logger{
    public:
    static string logg[10];
    static int counter;
    
    static void logMsg(string str){
        if(counter < 10){
        logg[counter] = str;
        counter++;
        }
        else{
            cout<<"Logs are full!";
        }
    }
    
    static void printLog(){
        for(int i = 0; i < counter; i++){
            cout<<logg[i]<<endl;
        }
    }
};
string Logger::logg[10];
int Logger::counter = 0;

int main() {
    Logger::logMsg("Hello");
    Logger::logMsg("World");
    Logger::logMsg("C++");
    Logger::logMsg("Programmer");
    Logger::logMsg("Static");
    Logger::logMsg("Keyword");
    Logger::logMsg("Hello");
    Logger::logMsg("World");
    Logger::logMsg("Hello");
    Logger::logMsg("World");
    
    
    Logger::printLog();
    return 0;
}
