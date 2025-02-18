#include <stdio.h>

struct Data {
    int value;
};

struct Data modifyData(struct Data d) {
    d.value *= 2;
    return d;
}

int main() {
    struct Data d;
    printf("Enter a value: ");
    scanf("%d", &d.value);
    d = modifyData(d);
    printf("Modified value: %d\n", d.value);
    return 0;
}
