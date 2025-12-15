#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

// 複素数構造体を使う時には次の行を活かす
#include "complex.h"
#include "testCommon.h"

// 各自の場所に記載してください。順番が違ってもテストには問題ないので気にしないでください。

/* テスト関数の記述部 */
// ↓↓↓↓ 3319 鹿野　一貴 記述部(この範囲以外には追加しない)

void testMakeComp() {
    Complex ans;
    testStart("makeComp");
    // 1+2jを作成
    ans = makeComp(1.0, 2.0);
    assertEqualsDouble(ans.real, 1.0);
    assertEqualsDouble(ans.image, 2.0);
    // 3.4+5.6jを作成
    ans = makeComp(3.4, 5.6);
    assertEqualsDouble(ans.real, 3.4);
    assertEqualsDouble(ans.image, 5.6);
}

void testMakeCompRT() {
    Complex ans;
    testStart("makeCompRT");
    // 3∠0
    ans = makeCompRT(3.0, 0);
    assertEqualsComplex(ans, makeComp(3.0, 0.0));
    // 2∠π/2
    ans = makeCompRT(2.0, M_PI/2.0);
    assertEqualsComplex(ans, makeComp(0.0, 2.0));
    // 1∠(-π/4)
    ans = makeCompRT(1.0, -M_PI/4.0);
    assertEqualsComplex(ans, makeComp(1/sqrt(2), -1/sqrt(2)));
}

void testAddComp() {
    Complex in1, in2, ans;
    //3.0 + 6.0jを作成
    testStart("addComp");
    in1 = makeComp(1.0, 2.0);
    in2 = makeComp(2.0, 4.0);
    ans = addComp(in1, in2);
    assertEqualsComplex(ans, makeComp(3.0, 6.0));
    //5.3 + 12.1jを作成
    testStart("addComp");
    in1 = makeComp(2.0, 5.0);
    in2 = makeComp(3.0, 7.0);
    ans = addComp(in1, in2);
    assertEqualsComplex(ans, makeComp(5.0, 12.0));
}

void testSubComp() {
    Complex in1, in2, ans;
    //3.0 + 6.0jを作成
    testStart("subComp");
    in1 = makeComp(5.0, 10.0);
    in2 = makeComp(2.0, 4.0);
    ans = subComp(in1, in2);
    assertEqualsComplex(ans, makeComp(3.0, 6.0));
    //4.6 + 12.1jを作成
    testStart("subComp");
    in1 = makeComp(8.0, 19.1);
    in2 = makeComp(3.4, 7.0);
    ans = subComp(in1, in2);
    assertEqualsComplex(ans, makeComp(4.6, 12.1));
}

void testCmulComp() {
    Complex in1, in2, ans;
    //4.0 + 6.0jを作成
    testStart("cmulComp");
    in1 = makeComp(2.0, 3.0);
    ans = cmulComp(in1, 2.0);
    assertEqualsComplex(ans, makeComp(4.0, 6.0));
    //6.0 - 12.0jを作成
    testStart("cmulComp");
    in2 = makeComp(2.0, -4.0);
    ans = cmulComp(in2, 3.0);
    assertEqualsComplex(ans, makeComp(6.0, -12.0));
}

void testMulComp() {
    Complex in1, in2, ans;
    //(2.0 + 3.0j) * (3.0 + 4.0j)を作成
    testStart("mulComp");
    in1 = makeComp(2.0, 3.0);
    in2 = makeComp(3.0, 4.0);
    ans = mulComp(in1, in2);
    assertEqualsComplex(ans, makeComp(-6.0, 17.0));
    //(1.5 + 2.3j) * (7.9 + 4.6j)を作成
    testStart("mulComp");
    in1 = makeComp(1.5, 2.3);
    in2 = makeComp(7.9, 4.6);
    ans = mulComp(in1, in2);
    assertEqualsComplex(ans, makeComp(1.27, 25.07));
}


// ↑↑↑↑ ここまでを 3319 鹿野　一貴 が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////

// ↓↓↓↓ 3332 東山　真士 記述部(この範囲以外には追加しない)

void testGetR2(){
    Complex in1, in2;
    double ans;
    // 1.0+j2.0の大きさ を作成
    testStart("getR2");
    in1 = makeComp(1.0, 2.0);
    ans = getR2(in1);
    assertEqualsDouble(ans, 5.0);
    // 9.0+j41.0の大きさ を作成
    testStart("getR2");
    in2 = makeComp(-9.0, 40.0);
    ans = getR2(in2);
    assertEqualsDouble(ans, 1681.0);
}



void testConjComp(){
    Complex in1, in2 , ans;
<<<<<<< HEAD
    // 2.0 + 3.0jの共役複素数を作成
    testStart("conjComp");
    in1 = makeComp(2.0, 3.0);
    ans = conjComp(in1);
    assertEqualsComplex(ans, makeComp(2.0, -3.0));
    // 7.9 - 4.6jの共役複素数を作成
    testStart("conjComp");
    in2 = makeComp(7.9, -4.6);
=======
    testStart("conjcomp");
    in1 = makeComp(2.0, 3.0);
    ans = conjComp(in1);
    assertEqualsComplex(ans, makeComp(2.0, -3.0));
    //(1.5 + 2.3j) * (7.9 + 4.6j)を作成
    testStart("conjcomp");
    in2 = makeComp(7.9, 4.6);
>>>>>>> 11a481b660103ca60239ba8f8c1141f61851138c
    ans = conjComp(in2);
    assertEqualsComplex(ans, makeComp(7.9, 4.6));
    // -7.9 - 4.6jの共役複素数を作成
    testStart("conjComp");
    in2 = makeComp(-7.9, -4.6);
    ans = conjComp(in2);
    assertEqualsComplex(ans, makeComp(-7.9, 4.6));
}

// ↑↑↑↑ ここまでを 3332 東山　真士 が記述(この範囲以外には追加しない)

//////////////////////////////////////////////////////////////////////////////////////////


// ここから main の始まりまでは追加・変更しないでください。

/* main関数の記述部 */
int main() {
    // ↓↓↓↓ 33xx XXXX 記述部(この範囲以外には追加しない)
    
    testMakeComp();
    testMakeCompRT();
    testAddComp();
    testSubComp();
    testCmulComp();
    testMulComp();
    // ↑↑↑↑ ここまでを 33xx XXXX が記述(この範囲以外には追加しない)

    //////////////////////////////////////////////////////////////////////////////////////////

    // ↓↓↓↓ 33yy YYYY 記述部(この範囲以外には追加しない)
    testGetR2();
    testConjComp();
    // ↑↑↑↑ ここまでを 33yy YYYY が記述(この範囲以外には追加しない)

    //////////////////////////////////////////////////////////////////////////////////////////

    // ここから下は追加・変更しないでください。

    testErrorCheck();  // これは消さないこと
    return 0;
}
