#include <cstdio>
#include <string>
#include <typeinfo>

std::string &func() 
{
    static std::string s = "this is a string";
    return s; 

}

int main() 
{
    auto x = func();
    printf("x is %s\n", x.c_str());
    printf("type of x is %s\n", typeid(x).name());
    return 0;

}


