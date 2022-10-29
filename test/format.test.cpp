#include <gtest/gtest.h>
#include <nys/format.h>

TEST(Format, BasicTests)
{
    ASSERT_EQ("This is a test.", nys::format("This is a %s.", "test"));
    ASSERT_EQ("This is a test 2.", nys::format("This is a %s %i.", "test", 2));
}