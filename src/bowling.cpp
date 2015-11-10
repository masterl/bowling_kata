#include "bowling.hpp"

size_t bowling( std::string const &scores )
{
    int acc        = 0;
    char last_play = 0;

    for( auto const &play : scores )
    {
        if( play != '/' )
        {
            acc += play - '0';
        }
        else
        {
            acc += 10 - last_play;
        }

        last_play = play - '0';
    }

    return acc;
}
