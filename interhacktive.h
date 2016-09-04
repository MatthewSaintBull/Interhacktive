#include <iostream> 
#include <string>
#include <vector>
using namespace std; 


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
        vector<string> list = {};

};
    void Interhacktive::setDownKey(char value){
        downKey = value;
    }
    void Interhacktive::setUpKey(char value){
        upKey = value;
    }
    void Interhacktive::addOption( string opt ){
        list.push_back(opt);
    }

    void Interhacktive::clearOptions(){
        list.clear();
    }

    void Interhacktive::removeOption(int pos){
        list.erase (list.begin()+(pos-1));
    }

    void  Interhacktive::modifyOption(int pos,string value){
        list[pos] = value;
    }

    void  Interhacktive::listOptions(){
        for (int i=0;i<list.size();i++){
            cout<<list[i]<<endl;
        }
    }

    string  Interhacktive::listOption(int pos){
        return list[pos];
    }
    void Interhacktive::rawMode(){
        system("stty raw");
    }
    void Interhacktive::cookedMode(){
        system("stty cooked");
    }
    
    void Interhacktive::setExitKey(char press){
        exitValue = press;
        exit_set = true;
    }
    
    void Interhacktive::clearSelect(){
        for ( int i = 0; i < list.size(); i++){
            if (list[i].at(0)== '>'){
                list[i] = list[i].substr(2);
            }
        }
    }

    void Interhacktive::menu(char value){
        cookedMode();
        clearSelect();
        system("clear");
        if (exit_set == true) {
            if (value == exitValue){
                exit(0);
            }
        }

        if(value == '0'){
            list[0].insert(0,"> ");
        }

        else if (value == downKey){
            if (selected == list.size()-1) selected = -1;
            list[selected+1].insert(0,"> ");
            selected++;
        }

        else if (value == upKey){
            if (selected == 0) selected = list.size();
            list[selected-1].insert(0,"> ");
            selected--;
        }
        for(int i = 0; i < list.size(); i++){
            cout << list[i] << endl;
        }
    }



