#include <unistd.h>

void mx_printchar(char c) {
     write(1, &c , 1);
}
/*
int main() {
    int i = 66;
    mx_printchar(i);
    return 0;
}*/
