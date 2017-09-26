
#ifndef INTERHACKTIVE_H
#define INTERHACKTIVE_H
#include <iostream> 
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::endl;
using std::cout;

class Interhacktive
{
    public:
        void setUpKey( char value );
        void setDownKey( char value );
        void addOption( string opt );
        void clearOptions();
        void removeOption( int pos );
        void modifyOption( int pos, string value );
        void listOptions();
        string listOption(int pos);
        void rawMode();
        void cookedMode();
        void menu(char value);
        void setExitKey(char press);
        void clearSelect(); 
    
    private:
        char upKey;
        char downKey;
        int selected = 0;
        char exitValue;
        bool exit_set = false;
        vector<string> list ; //if you have any problem add the " = {} " 

};


#endif
