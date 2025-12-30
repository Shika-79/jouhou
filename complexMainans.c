#include <stdio.h>
#include <math.h>
#include "complex.c"

int main() {
    Complex a1, a2, a3, b1, b2;
    //Complex t3a, t3b, t3c, t3d, t3e;
    //double r4 = ..., l4 = ..., c4 = ..., w4 = ...;
    //double r5 = ..., l5 = ..., c5 = ...., w5 = ...;
    //Complex z4, z5;
    a1 = makeComp(5,5);

    //a2 = .....;
    //以下続く
    void q1(Complex a1){
        printf("1(a) a1 = ");
        printCompRT(a1);
        return;
    }
    q1(a1);
    
    /** 4, 5 **/
    //r = makeComp(......);
    //zl = ......;
    // 中略
    //z = // addCompなどを使って解く
    //以下続く
    return 0;
}
