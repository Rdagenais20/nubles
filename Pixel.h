#pragma once

struct Pixel
{
	int color;
};

void pixel_ctor(struct Pixel *obj, const int color);
void pixel_print_color(struct Pixel *obj);
