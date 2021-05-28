# define l 10
# define c 10

/////////////////Global variables//////////////
int k  = (l - 1) * (c - 1);
int x, y;
int sX = 6, sY = 9;

int maze[l][c] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
	1, 1, 1, 1, 1, 0, 0, 0, 0, 1,
	2, 1, 0, 0, 1, 0, 1, 1, 0, 1,
	3, 1, 0, 1, 1, 0, 1, 1, 0, 1,
	4, 1, 0, 1, 1, 0, 1, 0, 0, 1,
	5, 1, 0, 1, 1, 0, 1, 0, 1, 1,
	6, 1, 0, 0, 1, 0, 1, 0, 0, 0,
	7, 1, 0, 1, 0, 0, 1, 1, 1, 1,
	8, 1, 0, 0, 0, 1, 1, 0, 1, 1,
	9, 1, 1, 1, 1, 1, 1, 1, 1, 1
};

typedef struct sides {
	int up, down, left, right;
} Side;

typedef struct cartesian {
	int x, y;
	Side side;
} Cartesian;