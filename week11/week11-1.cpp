/// week11-1.cpp
/// 函式/函數 function
#include <stdio.h>
///前面 定義 函式
///送出 int 整數
///   送進去整數a,整數b
int addnum(int a, int b)
{
    printf("在函式addnum()裡, 得到參數a:%d b:%d\n", a, b);
    int ans= a + b;
    printf("算出答案 %d 要 return 出去哦\n", ans);
    return ans; ///把算出來的結果傳出去
}
int main()
{ /// 主要的函式、主程式
    printf("在 main() 呼叫使用 addnum() \n");
    int ans = addnum(2, 3);
    printf("得到答案:%d\n",ans);
}
