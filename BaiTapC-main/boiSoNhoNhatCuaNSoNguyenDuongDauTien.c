#include <stdio.h> 

long long lcd(long long a, long long b) { 
    long long p = a * b; 
    long long tmp;
    while(b != 0) { 
        tmp = a % b; 
        a = b; 
        b = tmp; 
    } 
    return p / a; 
} 

int main() { 
    long long t, n; 
    scanf("%lld", &t); 
    while(t--) { 
        scanf("%lld", &n); 
        long long uc = 1; 
        for(long long i = 2; i <= n; i++) { 
            uc = lcd(uc, i); 
        } 
        printf("%lld\n", uc); 
    } 
    return 0;
}