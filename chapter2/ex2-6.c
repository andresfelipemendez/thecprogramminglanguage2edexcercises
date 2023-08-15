#include "stdio.h"
#include "../utest.h"


unsigned setbits(unsigned x, unsigned s, int p, int n) {
	// input area stamp mask
	unsigned clearStamp = ~((~(~0 << n)) << p);
	// punch out input area
	unsigned stamped = x & clearStamp;
	// shift input to position and trim input to fit in stamp area;
	unsigned shiftedtrimmedInput = (s << p) & ~clearStamp;
	return stamped | shiftedtrimmedInput;
}

unsigned getdec(char* hexValue){
	unsigned input = 0;
	sscanf(hexValue, "%x", &input);
	return input;
}

UTEST(foo, bar) {
	unsigned input = getdec("0xedededed");
	unsigned stamp = getdec("0x55");
	int offset = 16;
	int width = 8;

	unsigned output = setbits(input, stamp, offset, width);
	unsigned expected = getdec("0xed55eded");
	ASSERT_TRUE(output == expected);
}


UTEST_MAIN();