#include <stdio.h>

typedef struct {
  int x, y;
} Point;

int static PointDistanceSquared(Point *point1, Point *point2) {
  // (x2-x1)² + (y2-y1)²

  int point1x = point1->x;
  int point1y = point1->y;

  int point2x = point2->x;
  int point2y = point2->y;

  int xDifference = point2x - point1x;
  int yDifference = point2y - point1y;

  int distanceSquared =
      (xDifference * xDifference) + (yDifference * yDifference);

  return distanceSquared;
}

int main(void) {
  int point1x = 0;
  int point1y = 0;
  int point2x = 0;
  int point2y = 0;
  scanf("%d %d %d %d", &point1x, &point1y, &point2x, &point2y);

  Point point1 = {
      .x = point1x,
      .y = point1y,
  };

  Point point2 = {
      .x = point2x,
      .y = point2y,
  };

  int pointDistanceSquared = PointDistanceSquared(&point1, &point2);
  printf("%d", pointDistanceSquared);
  return 0;
}
