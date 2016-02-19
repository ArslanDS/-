#include <stdio.h>
#include <string.h>

int intParser(char str[], bool &s){
    int result = 0;
    int deg = 1;
    s = false;

    for(int i = 0; i < strlen(str) - 1; i++) {
        deg *= 10;
    }

    for(int i = 0; i < strlen(str); i++) {
        if((str[i] < '0')||
                (str[i] > '9')){
            return -1;
        }
        int intChr = str[i] - '0';
        result += intChr * deg;
        deg = deg/10;
    }
    s = true;
    return result;
}


int main() {
    bool b;
    int n = intParser("1245", b);
    printf("%d %d", n, b);


    return 0;
}
