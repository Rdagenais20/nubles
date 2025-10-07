#pragma once
#define WIDTH 100
#define HEIGHT 100
#define SIZE (100 * 100)

enum Status {
	NONE,
	SUNNY,
	DARK,
	HOT,
	COLD,
	WET,
	DRY
};

struct Thing
{
	//Empty atm
};

struct Pixel
{
	enum Status status[3];
	struct Thing* contains;
};

struct World
{
	struct Pixel *grid[SIZE];
};

//Returns World full of basic Pixels
struct World* World_init();

//Returns Pixel with basic filling
struct Pixel* Pixel_init();

//Returns Thing
struct Thing* Thing_init();

//Returns a Status value in Status array of specified Pixel
enum Status World_get_status(struct World *world, int x, int y, int n);

//Modifies a Status value in Status array of specified Pixel
void World_set_status(struct World *world, int x, int y, int n, enum Status status);
