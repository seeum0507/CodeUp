#include <stdio.h>

char f(){
    for (int i = 0; i < 2; i++) {
        printf("%c", '*');
    }
    return 0;
}
int main(){
    f();
    return 0;
}
