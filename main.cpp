#include <iostream>
#include "interhacktive.h"

int main(){
        Interhacktive Inter_menu;
        Inter_menu.addOption("1) Option 1");
        Inter_menu.addOption("2) Option 2");
        Inter_menu.setDownKey('s');
        Inter_menu.setUpKey('w');
        Inter_menu.listOptions();
        Inter_menu.setExitKey('e');
        Inter_menu.menu('0');

        while(1){
            Inter_menu.rawMode();
            char input = getchar();
            Inter_menu.menu(input);

        }


}
