#include "bowling.hpp"

size_t bowling( std::string const &scores )
{
    int acc        = 0;
    char last_play = 0;
    char zero = '0';
    bool have_spare = false;

    for( auto const &play : scores )
    {

        if( play != '/' )
        {
            acc += play - zero;
        }
        else
        {
            have_spare = true;
            acc += 10 - last_play + zero;
        }

        last_play = play;
    }

    return acc;
}
