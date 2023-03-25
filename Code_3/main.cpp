#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class DoubleBox
{
private:
    T first;
    T second;
public:
DoubleBox() : first(0), second(0) {} // конвструктор по дефолту
void setFunkc(T p,T v)
{
    first = p;
    second = v;
}
void getFunck()
{
    cout<<"Вы ввели "<<first<<" и "<<second<<endl;
}
DoubleBox(const T* s) //конструктор инициализации
{
    cout<<s<<endl;
    
}
};
int main()
{
    setlocale(LC_ALL, "Russian");
    DoubleBox <double> znachenie;
    cout<<"Введите десятичное и целое числа: "<<endl;
    double n;
    int g;
    cin>>n;
    cin>>g;
    znachenie.setFunkc(n, g);
    znachenie.getFunck();
}