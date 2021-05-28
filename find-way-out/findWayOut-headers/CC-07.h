/////////////////////////////----/////////////////////////////----/////////////////////////////----/////////////////////////////
void printMaze() {
  printf("\n");
  for (int i = 0; i < l; ++i) {
    printf("\t\t\t|");
    for (int j = 0; j < c; ++j)
      printf ("-%d- ", maze[i][j]);
    printf("|\n");
  }
}
void printWay(STACK* aux) {
  Cartesian* data = (Cartesian*) malloc(2 * sizeof(int));

  while (aux != NULL) {
    data = popStack(aux);
    printf("(%d,%d) ", data->x, data->y);
  }
}