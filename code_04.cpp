#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Read the inputs
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // Print the values in the specified format
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);     
    printf("%.9lf\n", d);    
    return 0;
    
}
