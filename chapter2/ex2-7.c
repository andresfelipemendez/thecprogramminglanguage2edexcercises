#include "stdio.h"
#include "../utest.h"


unsigned invert(unsigned x, int p, int n) {
	// input area stamp mask
	unsigned clearStamp = ~((~(~0 << n)) << p);
	// punch out input area
	unsigned stamped = x & clearStamp;
	// shift input to position and trim input to fit in stamp area;
	unsigned invertedTrimmed = ~x & ~clearStamp;
	return stamped | invertedTrimmed;
}

unsigned getdec(char* hexValue){
	unsigned input = 0;
	sscanf(hexValue, "%x", &input);
	return input;
}

UTEST(foo, bar) {
	unsigned input = getdec("0xedededed");
	int offset = 16;
	int width = 8;
	unsigned output = invert(input, offset, width);
	unsigned expected = getdec("0xed12eded");
	ASSERT_TRUE(output == expected);
}


UTEST_MAIN();