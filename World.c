#include "World.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Returns World full of basic Pixels
struct World* World_init()
{
	struct World *ptr = (struct World*) malloc(sizeof(struct World));

	for(int i = 0; i < SIZE; i++)
	{
		ptr->grid[i] = Pixel_init();
	}
	
	return ptr;
}

//Returns Pixel with basic filling
struct Pixel* Pixel_init()
{
	struct Pixel *ptr = (struct Pixel*) malloc(sizeof(struct Pixel));

	if(ptr == NULL)
	{
		printf("Pixel creation failed (memory).\n");
		return ptr;
	}

	for(int i = 0; i < 3; i++)
	{
		ptr->status[i] = NONE;
	}
	
	ptr->contains = Thing_init();

	return ptr; 
}

//Returns Thing
struct Thing* Thing_init()
{
	struct Thing *ptr = (struct Thing*) malloc(sizeof(struct Thing));

	return ptr;
}

//Returns a Status value in Status array of specified Pixel
enum Status World_get_status(struct World *world, int x, int y, int n)
{
	return world->grid[x + y * WIDTH]->status[n];
}

//Modifies a Status value in Status array of specified Pixel
void World_set_status(struct World *world, int x, int y, int n, enum Status status)
{
	world->grid[x + y * WIDTH]->status[n] = status;
}
