#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        char s[55];
        scanf("%d", &n);
        scanf("%s", s);

        int solved[26] = {0}; 
        int balloons = 0;

        for (int i = 0; i < n; i++) {
            int index = s[i] - 'A';

            if (solved[index] == 0) {
                balloons += 2;    
                solved[index] = 1;
            } else {
                balloons += 1;   
            }
        }

        printf("%d\n", balloons);
    }

    return 0;
}
