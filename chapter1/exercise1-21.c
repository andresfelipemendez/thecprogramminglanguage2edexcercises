#include "../utest.h"
#include "stdio.h"

int spacesCountFitsTab(char* input, size_t outputIndex, size_t lookAhead) {
	int lookAhead = outputIndex + remainingSpaces;
	for (int i = outputIndex; i < lookAhead; ++i)
	{
		if(input[i] != ' ') {
			return 0;
		}
	}
	return 1;
}

void entab(char* input, char* output, size_t length, int tabWidth) {
	size_t outputIndex = 0;
	for (size_t i = 0; i < length; ++i) {
		if(input[i] == ' ') {
			size_t remainingSpaces = tabWidth - (outputIndex % tabWidth);
			size_t lookAhead = outputIndex + remainingSpaces;
			if(spacesCountFitsTab(input, ))

		} else {
			output[outputIndex++] = input[i];
		}
	} 
	output[outputIndex] = '\0';
}

UTEST(foo, bar) {
	char testInput[] = "    abc";
	char output[128];
	entab(testInput, output, strlen(testInput), 4);
	ASSERT_TRUE(strcmp(output, "	abc") == 0);
}

// UTEST(foo, bar1) {             
// 	char testInput[] = "a	bc";
// 	char output[128];
// 	entab(testInput, output, strlen(testInput), 4);
// 	ASSERT_TRUE(strcmp(output, "a   bc") == 0);
// }

// UTEST(foo, bar3) {             
// 	char testInput[] = "ab	c";
// 	char output[128];
// 	entab(testInput, output, strlen(testInput), 4);
// 	ASSERT_TRUE(strcmp(output, "ab  c") == 0);
// }

// UTEST(foo, bar4) {             
// 	char testInput[] = "a	b	c";
// 	char output[128];
// 	entab(testInput, output, strlen(testInput), 4);
// 	ASSERT_TRUE(strcmp(output, "a   b   c") == 0);
// }

// UTEST(foo, bar5) {             
// 	char testInput[] = "ab	c";
// 	char output[128];
// 	entab(testInput, output, strlen(testInput), 4);
// 	ASSERT_TRUE(strcmp(output, "ab  c") == 0);
// }

UTEST_STATE();

int main (int argc, const char *const argv[])
{
	return utest_main(argc, argv);
}
