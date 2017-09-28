//
// Created by xxvms on 21/09/17.
//

#include "Game_map.h"

Game_map::Game_map() {
    map = {
            "=======================================================================================================",
            "|   X ###         ~~ ~~     %                          ###########                                    |",
            "|                  ~     ###########    ###########                                    ####           |",
            "|    ######             ###########   #############        #        #######        #########          |",
            "|   ########             ###########    ###########        ###         #######        ######          |",
            "|   ####                    #####         #######        ######          #######                      |",
            "|                   #####    %              ###                            ########     #######       |",
            "|      ####         ######    ~~~~~~                ########    ######        ######       ######     |",
            "|   #########    #######       ~~~~      ########             ##########                      #####   |",
            "|   #########       #######  ~~~     #########            ########           ~~~~~            ######  |",
            "|     #####         #######       %                  #####               ###   ~~~~~~~                |",
            "|                   ############        ########              ########              ##########        |",
            "|########             #############    ######                 ########       #####                    |",
            "|########                             ####       ######          #########           ######           |",
            "|                ######               ###      ######             #######               ######        |",
            "|   #########            ########            #############                                            |",
            "|   #########             ########    %             #####    #############                #####       |",
            "|   #########                 ######                       #######                   #####            |",
            "|                    #######   #########          ######                #########                     |",
            "|############                                 ############              #####       @                 |",
            "|############                 ##############                ######                       #####        |",
            "|              ~~~   ~~~      ##############                ######                                    |",
            "|               ~~~~~~        ##############  %             ######            ~~~~~   ~~~~            |",
            "|            ~~~~~   ~~~      ##############                ######              ~~~~~~                |",
            "|                                                           ######                                    |",
            "=======================================================================================================",
    };
    monsters_index;
}

// function that allow to find location of the player on the map, variable i allows to find row and result refers to column

std::vector<size_t> Game_map::find_characters(std::string player_type) { // keep an eye on return type it have Game_map:: !!!!!
    if (player_type == "player") {
        const char player = '@';
        size_t x = 0;
        size_t y = 0;
      /*  for (const auto &row : map) {
            const auto result = std::find(row.cbegin(), row.cend(), player);
            if (result < std::end(row)) {
                y = (result - row.cbegin());
                return {x, y}; // x is column and y is row
            }
            x++;
            //test sync with git
        }*/
    }else if (player_type == "monster"){
        const char player = '%';
        size_t x = 0;
        size_t y = 0;
        for (const auto &row : map) {

            const auto result = std::find(row.cbegin(), row.cend(), player);
            if (result < std::end(row)) {
                for (int i = 0; i < row.size(); i++) {


                    y = (result - row.cbegin());
                    monsters_index.push_back(x);
                    monsters_index.push_back(y);
                    std::cout << "blah" << '\n';
                }
                    return {monsters_index}; // x is column and y is row

            }
            x++;
        }
    }

} //todo warning: control may reach end of non-void function [-Wreturn-type]
