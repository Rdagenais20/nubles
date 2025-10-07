#include "Pixel.h"
#include <stdio.h>

void pixel_ctor(struct Pixel *obj, const int color){
	obj->color = color;
}

void pixel_print_color(struct Pixel *obj){
	printf("Color:%d\n", obj->color);
}
