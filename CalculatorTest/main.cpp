#include "Interface.h"
#include <gtest/gtest.h>

TEST(CheckUP, OK)
{
    std::string example = "5+8*2-5/2";
    float result = 0;
    CheckUP* ch = new CheckUP();
    ch->checkUP(example, result);
    EXPECT_EQ(result, 18.5f);

    example = "2+2*2";
    ch->checkUP(example, result);
    EXPECT_EQ(result, 6);

    example = "2+(2 *3)";
    ch->checkUP(example, result);
    EXPECT_EQ(result, 8);
    delete ch;
}

TEST(CheckUP, EceptionDuplicate)
{
    std::string example = "5++8*2-5/2";
    float result = 0;
    CheckUP* ch = new CheckUP();
    ch->checkUP(example, result);
    EXPECT_EQ(example, "Error");
    delete ch;
}

TEST(CheckUP, EceptionEmpty)
{
    std::string example = "";
    float result = 0;
    CheckUP* ch = new CheckUP();
    ch->checkUP(example, result);
    EXPECT_EQ(example, "Error");
    delete ch;
}
TEST(CheckUP, ExceptionSymbol)
{
    std::string example = "+8*2-5/2";
    float result = 0;
    CheckUP* ch = new CheckUP();

    ch->checkUP(example, result);
    EXPECT_EQ(example, "Error");
    delete ch;
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
