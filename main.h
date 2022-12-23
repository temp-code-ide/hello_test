#include <iostream>
class CStudent
{
  public:
    void SayHello()
    {
    }

  private:
    std::string name;
    int age;
    bool sex;
};
void myprint(const char *str)
{
    std::cout << str << std::endl;
}