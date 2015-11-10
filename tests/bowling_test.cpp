#include "tests_helpers.hpp"

#include "../src/bowling.hpp"

TEST( BowlingKata, one_ball )
{
    ASSERT_THAT( bowling( "3" ), Eq( 3 ) );
}

TEST( BowlingKata, two_balls )
{
    ASSERT_THAT( bowling( "31" ), Eq( 4 ) );
}

TEST( BowlingKata, two_balls_3_2 )
{
    ASSERT_THAT( bowling( "32" ), Eq( 5 ) );
}

TEST( BowlingKata, five_balls )
{
    ASSERT_THAT( bowling( "32791" ), Eq( 22 ) );
}

TEST( BowlingKata, one_spare )
{
    ASSERT_THAT( bowling( "3/" ), Eq( 10 ) );
}

TEST( BowlingKata, spare_and_next_play )
{
    ASSERT_THAT( bowling( "3/6" ), Eq( 22 ) );
}