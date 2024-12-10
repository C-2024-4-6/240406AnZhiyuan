#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// 函数用于将十六进制字符串转换为十进制整数
int parseHex(const char* const hexString) {
    int decimal = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; ++i) {
        char ch = hexString[len - 1 - i];
        int d;
        if (isdigit(ch)) {
            d = ch - '0';
        }
        else if (isupper(ch)) {
            d = ch - 'A' + 10;
        }
        else if (islower(ch)) {
            d = ch - 'a' + 10;
        }
        decimal += d * (1 << (4 * i));
    }
    return decimal;
}

int main() {
    const char* hexStr = "A5";
    int result = parseHex(hexStr);
    cout << "十六进制字符串 " << hexStr << " 转换后的十进制数为: " << result << endl;
    return 0;
}