#include "TestRuleOnCode.h"
#include "rules/custom/initMethodReturnTypeRule.cpp"

TEST(initMethodReturnTypeRuleTest, PropertyTest)
{
    initMethodReturnTypeRule rule;
    EXPECT_EQ(3, rule.priority());
    EXPECT_EQ("nit method return type", rule.name());
    EXPECT_EQ("custom", rule.category());
}

TEST(initMethodReturnTypeRuleTest, FirstFailingTest)
{
    EXPECT_FALSE("Start writing a new test");
}
