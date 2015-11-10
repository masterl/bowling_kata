#include "tests_helpers.hpp"

#include "../src/bowling.hpp"

TEST( BowlingKata, one_ball )
{
    ASSERT_THAT( bowling( "3" ), Eq( 3 ) );
}