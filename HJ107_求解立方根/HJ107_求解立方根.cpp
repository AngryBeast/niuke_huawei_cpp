// HJ107_求解立方根.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdlib.h>
using namespace std;
static double getCubeRoot(double input);

int main()
{
    double input;
    cin >> input;
    cout << getCubeRoot(input);
    system("pause");
    return 0;
}

static double getCubeRoot(double input) {

    int flag = 0;
    int zhengshu = 0;
    float num, last_num;
    int last_int = 0, temp = 0;
    if (input < 0)
    {
        input = -input;
        flag = 1;
    }
    else
        flag = 0;
    last_int = input;
    if (input < 8)
        zhengshu = 1;
    if (input < 1)
        zhengshu = 0;
    if (input >= 8)
        for (int i = (int)(input / 3); i >= 0; i--)
        {
            temp = i * i * i;
            if (last_int >= (int)input && temp <= (int)input)
            {
                zhengshu = i;
                break;
            }
            last_int = temp;
        }
    
    num = (float)zhengshu;
    last_num = num * num * num;
    for (int i = 0; i < 1000; i++)          //求小数部分
    {
        if (num * num * num >= input&& last_num <= input)
            break;
        last_num = num * num * num;
        num += 0.001;               //提高精度
    }
    if ((int)(num * 100) % 10 > 4)                  //四舍五入
        num = (int)(num * 10) / 10.0 + 0.1;
    else
        num = (int)(num * 10) / 10.0;
    if (flag == 1)
        return -num;
    else
        return num;
}