/////////////////////Returns the index of the point the mouse is at from the allocation made in the structure (Cartesian)///////////////////
int mouseLocation(Cartesian* point, int x, int y) {

	for (int i = 0; i < k; i++) {
		if (x == point[i].x && y == point[i].y)
			return i;
	}
}