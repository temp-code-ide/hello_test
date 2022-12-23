/// @brief hello is a test method
/// @param no paramters
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

class Animal
{
public:
    int legs;    
};

class human : public Animal
{
public:    
    char name[256];
    int age;
    SexType sexy = Male;
};

class Student : public human
{
public:    
    int score;

};
