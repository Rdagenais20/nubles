#include "Pixel.h"
#include <stdio.h>


int main() {
	printf("Hello World!\n");

	struct Pixel pixel;

	pixel_ctor(&pixel, 100);

	pixel_print_color(&pixel);

	return 0;
}
