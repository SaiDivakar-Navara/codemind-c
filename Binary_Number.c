#include <stdio.h>
void Binary(int n, char binary[], int index) {
    if (index == n) {
        binary[n] = NULL;
        printf("%s
", binary);
        return;
    }
    binary[index] = '0';
    Binary(n, binary, index + 1);
    binary[index] = '1';
    Binary(n, binary, index + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        return 1;
    }
    char binary[n + 1];
    Binary(n, binary, 0);
    return 0;
}