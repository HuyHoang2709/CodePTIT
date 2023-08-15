#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int main()
{
	int t;
    scanf("%d", &t);
    getchar();
    while(t--) {
        char a[105];
        int b[105] = {};
        gets(a);
        int length = strlen(a);
        for (int i = 0; i < length; i++) {
            switch (a[i]) {
                case 'I': {
                    b[i] = 1;
                    break;
                }
                case 'V': {
                    b[i] = 5;
                    break;
                }
                case 'X': {
                    b[i] = 10;
                    break;
                }
                case 'L': {
                    b[i] = 50;
                    break;
                }
                case 'C': {
                    b[i] = 100;
                    break;
                }
                case 'D': {
                    b[i] = 500;
                    break;
                }
                case 'M': {
                    b[i] = 1000;
                    break;
                }
            }
        }
        int sum = b[length-1];
        for (int i = length - 1; i > 0; i--) {
            if (b[i] > b[i - 1]) {
                sum = sum - b[i-1];
            }
            else {
                sum = sum + b[i-1];
            }
        }
        printf("%d\n", sum);
    }
	return(0);
}
