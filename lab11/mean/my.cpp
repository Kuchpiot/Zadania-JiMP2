#include <iostream>
#include <complex>
#include <vector>

template <class T>
class Mean
{
public:
    static T countMean(std::vector<T> vec)
      {
    T sum;

    for (auto &&item : vec)
    {
        sum += item;
    }

    return sum / vec.size();
  }
};

int main()
{
    std::vector <int> intVec {1, 2, 3, 4, 5};
    std::vector <double> doubleVec {1.1, 1.2, 1.3, 1.4, 1.5};
    std::vector <std::complex> complexVec {};

    std::cout << Mean<int>::countMean(intVec) << std::endl;
    std::cout << Mean<double>::countMean(doubleVec) << std::endl;
    std::cout << Mean<std::complex>::countMean(complexVec) << std::cout;

    return 0;

}
