/*
    program: ex1.c
    author: Raxa-Mi
    debugger: [Enter HN]
    date last updated: 2025/04/22
*/

/* https://info.atcoder.jp/overview/about/competitive */
// 入力に応じて計算を行い1行で出力を行うプログラム

#include <stdio.h>
#include <stdbool.h>

#define int_min 1 // 整数の最小値
#define int_max 1000 // 整数の最大値
#define str_max 100 // 文字数の最大値

int main()
{
    /* 変数の宣言 */
    short int a=0, b=0, c=0;
    bool err = false; // 入力値のエラー判定フラグ
    char s[str_max+1];

    /* 値の入力 */
    printf("input 1st integer: ");
    scanf("%hd", &a);
    if(a < int_min || int_max < a){ // aが規定値外である場合
        err = true; // errフラグをオン
        goto end; // 入力を中断し、endの行に飛ぶ
    }
    printf("input 2nd & 3rd integer: ");
    scanf("%hd %hd", &b, &c);
    if(b < int_min || int_max < b || c < int_min || int_max < c){ // bとcが規定値外である場合
        err = true; // errフラグをオン
        goto end; // 入力を中断し、endの行に飛ぶ
    }
    printf("input string: ");
    scanf("%100s", &s); // フィールド幅100文字でsへ入力

    /* 標準入力のクリア */
    scanf("%*[^\n]"); // 改行文字以外の読み飛ばし
    scanf("%*c"); // 改行文字の読み飛ばし

    /* 終了処理 */
end:
    if(err){ // errフラグがオンの場合エラー処理を行う
        printf("There is an error in the input value.\n");
    }else{ // 入力値が正常だった場合、a,b,cの総和とsを一文字空けで出力する
        printf("%hd %s\n", a+b+c, s);
    }

    return 0;
}
