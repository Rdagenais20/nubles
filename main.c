#include "World.h"
#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("Hello, World!\n");


	struct World *world = World_init();

	World_set_status(world, 12, 24, 0, SUNNY);

	bool working = (World_get_status(world, 12, 24, 0) == SUNNY);

	printf("%d\n", working);	

	return 0;
}
