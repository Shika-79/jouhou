// c班 complex.c

#include "complex.h"

#include <math.h>
#include <stdio.h>

// テスト作成者は雛形までを作成し、コンパイルができるまでを責任とします。
// コンパイルができたところで、コミットしてください。

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 3319 鹿野　一貴 記述部(雛形まで。この範囲以外には追加しない)

Complex makeComp(double a, double b){
    Complex z;
    z.real = a;
    z.image = b;

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

//↑↑↑↑ ここまでを 33xx XXXX が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 3332 東山　真士　 記述部(雛形まで。この範囲以外には追加しない)

//↑↑↑↑ ここまでを 33yy YYYY が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

// ここから下には何も追記しないでください。