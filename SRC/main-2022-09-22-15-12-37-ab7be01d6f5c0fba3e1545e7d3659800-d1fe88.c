#include "timer.h"

void main(void) {
	int time = 0;
	while(1) {
		timer(time++, 10);
	}
}		  