#include "../utest.h"
#include "stdio.h"

void detab(char* input, char* output, size_t length, int tabWidth) {
	int outputIndex = 0;
	for (size_t i = 0; i < length; ++i) {
		if(input[i] == '\t') {
			output[outputIndex++] = ' ';
			output[outputIndex++] = ' ';
			output[outputIndex++] = ' ';
			output[outputIndex++] = ' ';
		} else {
			output[outputIndex++] = input[i];
		}
	} 
	output[outputIndex] = '\0';
}

UTEST(foo, bar) {
	char testInput[] = "	abc";
	char output[128];
	detab(testInput, output, strlen(testInput), 4);
	ASSERT_TRUE(strcmp(output, "    abc") == 0);
}

UTEST_STATE();

int main (int argc, const char *const argv[])
{
	return utest_main(argc, argv);
}