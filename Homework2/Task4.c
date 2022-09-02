#include <stdio.h>
#include <stdbool.h> 

int XOR(int x, int y, int z){
	int res = 0; 
	for (int i = 31; i >= 0; i--){
		bool b1 = x & (1 << i);
		bool b2 = y & (1 << i);
        bool b3 = z & (1 << i);
		bool xoredBit = (b1 & b2 & b3) ? 0 : (b1 | b2 | b3);

		res <<= 1;
		res |= xoredBit;
	}
	return res;
}

int main(){
	int x, y, z;
	printf("XOR is %d\n", XOR(x, y, z));
	return 0;
}
