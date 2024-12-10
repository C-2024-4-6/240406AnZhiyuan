#include<iostream>
#include<string>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int string1 = strlen(s1);
    int string2 = strlen(s2);

    for (int m = 0; m <= string2 - string1; m++) 
    {
        int n;
        for (n = 0; n < string1; n++) 
        {
            if (s2[m + n] != s1[n]) 
            {
                break;
            }
        }
        if (n== string1) 
        {
            return m;
        }
    }

    return -1;

}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    // 获取对应的C风格字符串并传递给indexof函数，同时接收返回值
    int result = indexof(s1.c_str(), s2.c_str());
    cout << "查找结果索引为: " << result << endl;
    return 0;
}