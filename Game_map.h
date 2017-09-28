//
// Created by xxvms on 21/09/17.
//

#ifndef WORKING_ON_SEARCH_GAME_MAP_H
#define WORKING_ON_SEARCH_GAME_MAP_H

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>


class Game_map {
private:
    std::vector<std::string> map;
    std::random_device random_dev_game;
    std::vector<size_t> monsters_index;

public:

    // default constructor printing map
    Game_map();
    struct  Coordinates  { size_t  x, y; };
    std::vector<size_t> find_characters(std::string player_type);


};


#endif //WORKING_ON_SEARCH_GAME_MAP_H
