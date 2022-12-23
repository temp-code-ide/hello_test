#include "hello.h"
#include "main.h"
#include <iostream>
#include <string>

#define MAX_NUM 10

void test()
{
    myprint("test");
}
int main()
{
    int i = 0;
    for (; i < MAX_NUM; i++)
    {
        std::cout << i << std::endl;
    }
    test();
    hello();

    Student zhangsan;
    SexType sexy = zhangsan.sexy;
    std::cout << (int)sexy << std::endl;
    return 0;
}
