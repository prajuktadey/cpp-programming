#include <cstdio>

struct A{
    int ia;
    int ib;
    int ic;
};

int main()
{
    A a= {1,2,3};
    printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);
    return 0;
}
