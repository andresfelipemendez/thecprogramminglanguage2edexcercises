#include "../utest.h"
#include "stdio.h"

void reverseString(char* input, size_t len) {

 for (size_t i = 0; i < (len/2); ++i) {
 	size_t endIndex = (len-1)-i;
  char end = input[endIndex];
  input[(len-1)-i] = input[i];
  input[i] = end;
 } 
}

UTEST(foo, bar) {
	char testInput[] = "abc";
	reverseString(testInput, strlen(testInput));
	ASSERT_TRUE(strcmp(testInput, "cba") == 0);
}

UTEST(foo, bar1) {
	char testInput[] = "ab";
	reverseString(testInput, strlen(testInput));
	ASSERT_TRUE(strcmp(testInput, "ba") == 0);
}


UTEST(foo, bar2) {
	char testInput[] = "abcde";
	reverseString(testInput, strlen(testInput));
	
	ASSERT_TRUE(strcmp(testInput, "edcba") == 0);
}

UTEST_STATE();

int main (int argc, const char *const argv[])
{
	
	return utest_main(argc, argv);
}
