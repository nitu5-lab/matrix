#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    union Data data;
    enum Days today;
    
    data.i = 10;
    printf("Integer: %d\n", data.i);
    data.f = 220.5;
    printf("Float: %.2f\n", data.f);
    snprintf(data.str, sizeof(data.str), "Hello");
    printf("String: %s\n", data.str);
    
    today = WEDNESDAY;
    printf("Today is day number %d\n", today);
    
    return 0;
}
