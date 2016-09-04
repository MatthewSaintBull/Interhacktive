#include <iostream> 
#include <stdio.h>  
#include <string>
#include <algorithm>
#include <vector>
using namespace std; 

int pos = 0;

void menu(int value){
    system("stty cooked");
    system("clear");

    vector<string> list = {"1) apri progetto", "2) mostra progetti", "3) esci dal software"};
        
    if (value == 0){
        list[0].insert(0,"> ");
    }

    else if (value == 's'){
        if (pos == list.size()-1) pos = -1;
        list[pos+1].insert(0,"> ");
        pos++;
    }

    else if (value == 'w'){
        if (pos == 0) pos = list.size();
        list[pos-1].insert(0,"> ");
        pos--;
    }
    for(int i = 0; i < 3; i++){
        cout << list[i] << endl;
    }
}

int main() { 
    menu(0);
    while (1){  
        system("stty raw"); 
        char input = getchar(); 
        
        if (input == 'q'){
            system("stty cooked");
            cout << "-- USCITO DALLA SESSIONE";
            break;
        }
        else{
            menu(input);}
    }
      return 0; 
}
