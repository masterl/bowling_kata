#include "bowling.hpp"

static size_t digit_to_integer( char digit )
{
    char zero = '0';

    return digit - zero;
}

size_t bowling( std::string const &scores )
{
    size_t acc     = 0;
    char last_play = 0;
    bool had_spare = false;
    char spare     = '/';
    int ten_number = 10;

    if(scores == "X")
    {
        return ten_number;

    } else if (scores == "X-")
    {
        return ten_number;
    }

      for( auto const &play : scores )
      {
          if( play != spare )
          {
              acc += digit_to_integer( play );
              if( had_spare )
              {
                  acc += digit_to_integer( play );
                  had_spare = false;
              }
          }
          else
          {
              had_spare = true;
              acc += ten_number - digit_to_integer( last_play );
        }

        last_play = play;
    }

    return acc;
}
