#include "bowling.hpp"

static size_t digit_to_integer( char digit )
{
    char zero = '0';

    return digit - zero;
}

size_t bowling( std::string const &scores )
{
    size_t acc           = 0;
    char last_play       = 0;
    bool had_spare       = false;
    const char spare     = '/';
    const char strike    = 'X';
    const char no_play   = '-';
    const int ten_number = 10;
    int strike_count     = 0;

    for( auto const &play : scores )
    {
        switch( play )
        {
            case spare:
                had_spare = true;
                acc += ten_number - digit_to_integer( last_play );

                if( strike_count )
                {
                    acc += ten_number - digit_to_integer( last_play );
                    --strike_count;
                }
                break;
            case strike:
                if( had_spare )
                {
                    acc += ten_number;
                    had_spare = false;
                }

                if( strike_count )
                {
                    acc += ten_number;
                    --strike_count;
                }

                strike_count += 2;
                acc += ten_number;
                break;
            case no_play:
                break;
            default:
                acc += digit_to_integer( play );
                if( had_spare )
                {
                    acc += digit_to_integer( play );
                    had_spare = false;
                }

                if( strike_count )
                {
                    acc += digit_to_integer( play );
                    --strike_count;
                }
        }

        last_play = play;
    }

    return acc;
}
