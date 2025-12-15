// c班 complex.c

#include "complex.h"

#include <math.h>
#include <stdio.h>

// テスト作成者は雛形までを作成し、コンパイルができるまでを責任とします。
// コンパイルができたところで、コミットしてください。

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 3319 鹿野　一貴 記述部(雛形まで。この範囲以外には追加しない)

Complex makeComp(double real, double image){
    Complex z;
    z.real = real;
    z.image = image;

    return z;
}

Complex makeCompRT(double r, double theta){
    Complex z;
    z.real = r * cos(theta);
    z.image = r * sin(theta);

    return z;
}

Complex addComp(Complex a, Complex b){
    Complex z;
    z.real = a.real + b.real;
    z.image = a.image + b.image;

    return z;
}

Complex subComp(Complex a, Complex b){
    Complex z;
    z.real = a.real - b.real;
    z.image = a.image - b.image;

    return z;
}

Complex cmulComp(Complex a, double k){
    Complex z;
    z.real = k * a.real;
    z.image = k * a.image;

    return z;
}

Complex mulComp(Complex a, Complex b){
    Complex z;
    z.real = (a.real * b.real) - (a.image * b.image);
    z.image = (a.real * b.image) + (a.image * b.real);

    return z;
}

double getR2(Complex a){
    return (a.real * a.real + a.image * a.image);
}

Complex conjComp(Complex a){
    Complex z;
    z.real = a.real;
    z.image = -1 * a.image;

    return z;
}

Complex invComp(Complex a){
    Complex z;
    Complex w = conjComp(a);
    double J = getR2(a);

    z.real = w.real/J;
    z.image = w.image/J;

    return z;
}

Complex divComp(Complex a, Complex b){
    Complex z;
    Complex J = invComp(b);

    z.real = a.real * J.real - a.image * J.image;
    z.image = a.real * J.image + a.image * J.real;

    return z;
}

double getR(Complex a){
    return a.real;
}

double getTheta(Complex a){
    return atan2(a.image, a.real);
}

void printComp(Complex a){
    if (a.image >= 0) {
        printf("%.3f+%.3fj", a.real, a.image);
    } else {
        printf("%.3f%.3fj", a.real, a.image);
    }
}

void printCompRT(Complex a){
    if (a.image >= 0) {
        printf("%.3f\u2220%.3fj", a.real, a.image);
    } else {
        printf("%.3f\u2220%.3fj", a.real, a.image);
    }
}



//↑↑↑↑ ここまでを 33xx XXXX が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 3332 東山　真士　 記述部(雛形まで。この範囲以外には追加しない)

//↑↑↑↑ ここまでを 33yy YYYY が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

// ここから下には何も追記しないでください。