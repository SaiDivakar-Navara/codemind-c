#include <stdio.h>

int countWays(int distance) {
    if (distance < 0) {
        return 0;
    } else if (distance == 0) {
        return 1;
    } else {
        return countWays(distance - 1) + countWays(distance - 2) + countWays(distance - 3);
    }
}

int main() {
    int distance;;
    scanf("%d", &distance);
    int ways = countWays(distance);
    printf("%d",ways);
    return 0;
}
