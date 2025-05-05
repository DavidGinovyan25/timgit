#include <stdio.h>

__int32_t summator(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}


int main() {
    int x = 2;
    int y = 5;
    int z = summator(x, y);
    printf("%d", x + y);
    printf("%s", "timgay\n");
    return 0;
}