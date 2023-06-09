/*编写一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树（以指针方式存储）。
例如如下的先序遍历字符串： abc##de#g##f### 其中 # 表示的是空格，空格字符代表空树。
建立起此二叉树以后，再对二叉树进行中序遍历，输出遍历结果。

输入格式
共一行，包含一个字符串，表示先序遍历字符串。
输出格式
共一行，输出将输入字符串建立二叉树后中序遍历的序列，字符之间用空格隔开。
注意，输出中不用包含 #。
数据范围
输入字符串长度不超过 100，且只包含小写字母和#。

输入样例：
abc##de#g##f###
输出样例：
c b e g d f a*/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void build()
{
    char ch = getchar();//取到输入字符
    if (ch == '#')
        return;
    build();
    cout << ch << ' ';//代码的位置决定了先序、中序、后序的三种遍历方式
    build();
}

int main()
{
    build();
    return 0;
}