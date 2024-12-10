#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// �������ڽ�ʮ�������ַ���ת��Ϊʮ��������
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
    cout << "ʮ�������ַ��� " << hexStr << " ת�����ʮ������Ϊ: " << result << endl;
    return 0;
}