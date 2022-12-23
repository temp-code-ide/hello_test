void hello();
void sayHello();
void sayGoodbye();
void sayHi();
void saySeeYou();
enum SexType
{
    Male = 0,
    Female,
    None,
};
class Person
{
public:    
    char name[256];
    int age;
    SexType sexy = Male;
};
