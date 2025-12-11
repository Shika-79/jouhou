#ifndef __COMPLEX_H__
#define __COMPLEX_H__

// 二重読み込みを防ぐために、complex 構造体の定義などはここに記述

// ↓↓↓↓ complex の定義 by 33aa AAAA
typedef struct {
    double real; 
    double image; 
}Complex;

//構造体の定義では同じ型のメンバーはカンマで区切らない

//↑↑↑↑ ここまでを 33aa AAAA が記述

//////////////////////////////////////////////////////////////////////////////////////////

// プロトタイプ宣言部
//↓↓↓↓ 3319 鹿野　一貴 記述部(この範囲以外に追加しない)

Complex makeComp(double real, double image);
Complex makeCompRT(double r, double theta);
Complex addComp(Complex a, Complex b);
Complex subComp(Complex a, Complex b);
Complex cmulComp(Complex a, double k);
Complex mulComp(Complex a, Complex b);

//↑↑↑↑ ここまでを 3319 鹿野　一貴 が記述(この範囲以外に追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

//↓↓↓↓ 3332 東山　真士 記述部(この範囲以外に追加しない)

double get2R(Complex a);
Complex coniComp(Complex a);
Complex invComp(Complex a);
Complex divComp(Complex a, Complex b);
double getR(Complex a);
double getTheta(Complex a);
void printComp(Complex a);
void printCompRT(Complex a);


//↑↑↑↑ ここまでを 3332 東山　真士 が記述(この範囲以外に追加しない)

//////////////////////////////////////////////////////////////////////////////////////////


// ここから下には何も追記しないでください。

#endif