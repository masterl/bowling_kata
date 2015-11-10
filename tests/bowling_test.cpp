#include "tests_helpers.hpp"

#include "../src/bowling.hpp"

TEST( BowlingKata, one_ball )
{
    ASSERT_THAT( bowling( "3" ), Eq( 3 ) );
}

TEST(BowlingKata, two_bolls )
{
  ASSERT_THAT(bowling("31"), Eq(4));
}

TEST(BowlingKata, two_bolls_3_2)
{
  ASSERT_THAT(bowling("32"), Eq(5));
}
