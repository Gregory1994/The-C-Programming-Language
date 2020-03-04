#include <stdio.h>

int main()
{
    printf("Hello world!\n");
    printf("Hello world!\c");
    printf("Hello world!\\c");
    return 0;
}

// 因为 \c 本身不是转义字符，所以正常输出字符c,.
// 如果是 \\c，则是将 \c 作为一个整体输出。换成其他字符也是可以的，但是必须保证没有转义效果。
// “\\”+字母的写法则最后返回"\"+字母。