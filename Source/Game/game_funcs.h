#ifndef GAME_FUNCS_H
#define GAME_FUNCS_H

#include <string>
#include <fstream>


namespace Game
{
    void shortPause             ( double seconds );
    void pressEnterToContinue   ();
    void printLine              ( const std::string& line );
}

#endif // GAME_FUNCS_H
