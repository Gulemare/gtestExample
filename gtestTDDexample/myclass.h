// Definition of the class, that you want to test
#ifndef GTESTEXAMPLE_MYCLASS_H_
#define GTESTEXAMPLE_MYCLASS_H_
namespace gtestexample {
    class MyClass
    {
    public:
        explicit MyClass(int n = 0) : num_(n) {}
        void setNum(int n);
        int getNum() const;

    private:
        int num_;
    };
} // namespace gtestexample
#endif // GTESTEXAMPLE_MYCLASS_H_
