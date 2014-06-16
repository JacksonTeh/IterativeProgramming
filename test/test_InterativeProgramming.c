#include "unity.h"
#include "InterativeProgramming.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_isSubstringInString_abcde12345_and_abc_should_return_one(void)
{
	TEST_ASSERT_EQUAL(1, isSubstringInString("abcde12345", "abc"));
}

void test_isSubstringInString_abcde12345_and_bcd_should_return_one(void)
{
	TEST_ASSERT_EQUAL(1, isSubstringInString("abcde12345", "bcd"));
}

void test_isSubstringInString_abcabcde12345_and_bcd_should_return_one(void)
{
	TEST_ASSERT_EQUAL(1, isSubstringInString("abcabcde12345", "bcd"));
}

void test_isSubstringInString_abcabce12345_and_bcd_should_return_zero(void)
{
	TEST_ASSERT_EQUAL(0, isSubstringInString("abcabce12345", "bcd"));
}

void test_isSubstringInString_1234abcd_and_bcdef_should_return_zero(void)
{
	TEST_ASSERT_EQUAL(0, isSubstringInString("1234abcd", "bcdef"));
}