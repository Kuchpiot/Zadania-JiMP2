class test
{
public:
    test() : a{5} {}

    inline int getA() { return a; }    

private:
    int a;
};

template<class T>
class Product
{
public:
    T* create();       
};
