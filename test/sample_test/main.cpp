#include "src/sample_library.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"


int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(SampleTest, Test1)
{
	using sample_library::add;

	ASSERT_EQ(add(2,3), 5);
	ASSERT_EQ(add(10,100), 110);
}