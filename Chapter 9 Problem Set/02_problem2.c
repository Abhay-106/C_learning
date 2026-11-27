#include <stdio.h>


typedef struct vector {
    int i;
    int j;
} V;

V sumVector (struct vector v1, struct vector v2);
struct vector sumVector (struct vector v1, struct vector v2) { 
    struct vector v3 = {v1.i +v2.i , v1.j +v2.j};
    return v3;
}

int main(){
    V v1, v2, v3;
    printf("Enter v1.i and v1.j: "); 
    scanf("%d %d", &v1.i, &v1.j);
     
    printf("Enter v2.i and v2.j: ");
    scanf("%d %d", &v2.i, &v2.j);           //do not forget to put & when using scanf********

    v3 = sumVector(v1, v2);
    printf("The value of vector is %di , %dj", v3.i, v3.j);
    
    return 0;
}