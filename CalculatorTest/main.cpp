#include "Interface.h"
#include <gtest/gtest.h>

TEST(Interface, OK)
{
    std::string example = "5+8*2-5/2";
    float result = 0;
    Interface* interface = new Interface();
    interface->checkUP(example, result);
    EXPECT_EQ(result, 18.5f);

    example = "2+2*2";
    interface->checkUP(example, result);
    EXPECT_EQ(result, 6);

    example = "2+(2 *3)";
    interface->checkUP(example, result);
    EXPECT_EQ(result, 8);
    delete interface;
}

TEST(Interface, EceptionDuplicate)
{
    std::string example = "5++8*2-5/2";
    float result = 0;
    Interface* interface = new Interface();
    interface->checkUP(example, result);
    EXPECT_EQ(example, "Error");
    delete interface;
}

TEST(Interface, EceptionEmpty)
{
    std::string example = "";
    float result = 0;
    Interface* interface = new Interface();
    interface->checkUP(example, result);
    EXPECT_EQ(example, "Error");
    delete interface;
}
TEST(Interface, ExceptionSymbol)
{
    std::string example = "+8*2-5/2";
    float result = 0;
    Interface* interface = new Interface();

    interface->checkUP(example, result);
    EXPECT_EQ(example, "Error");
    
    std::string example = "ewf+8+3*(&^&*";
    interface->checkUP(example, result);
    EXPECT_EQ(example, "Error");
    
    std::string example = "+*-";
    interface->checkUP(example, result);
    EXPECT_EQ(example, "Error");
    delete interface;
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
