#include <iostream>
#include <list>
using namespace std;

template<typename T>
class List
{
private:
    std::list<T> data;
public:
    void addToHead(T value)
    {
        data.push_front(value);
    }
    
    void addToTail(T value)
    {
        data.push_back(value);
    }
    
    void deleteFromHead()
    {
        data.erase(data.begin());
    }
    
    void deleteFromTail()
    {
        data.pop_back();
    }
    
    void deleteAll()
    {
        data.clear();
    }
    
    void insert(int index, T value)
    {
        auto it = data.begin();
        std::advance(it, index);
        data.insert(it, value);
    }
    
    void deletionByIndex(int index)
    {
        auto it = data.begin();
        std::advance(it, index);
        data.erase(it);
        
    }
    
    T searchForAGivenElement(int index)
    {
        if (index >= 0 && index<data.size())
        {
            auto it = data.begin();
            std::advance(it, index);
            return *it;
        }
        else
        {
            return -1;
        }
        
    }
    
    T searchAndReplacementOfAGivenElement(T oldValue, T newValue)
    {
        for (auto it = data.begin(); it != data.end(); ++it)
        {
                if (*it == oldValue)
                {
                    *it = newValue;
                }
            }
        return newValue;
    }
    
    void reverseList()
    {
        data.reverse();
    }
    
    void show()
    {
        for(T value : data)
        {
            cout<< value<<" ";
        }
        cout<<endl;
    }
    
};

int main()
{
//    Створіть шаблонний клас однозв'язного списку для роботи  з цілими значеннями.
//    (!) Можна використовувати як свою реалізацію, так і бібліотеку STL, а конкретно std::forward_list або ж std::list.
//    Тобто взагалі нижче ви можете для усіх завдань використовувати бібліотеку STL.
//    Потрібно створити реалізації для типових операцій над елементами:
//    ■ addToHead - додавання елемента в голову;
//    ■ addToTail - додавання елемента в хвіст;
//    ■ deleteFromHead - видалення елемента з голови;
//    ■ deleteFromTail - видалення елемента з хвоста;
//    ■ deleteAll - видалення всіх елементів;
//    ■ show - відображення всіх елементів списку на екран.
    
    List<int> list;
    list.addToTail(1);
    list.addToTail(2);
    list.addToTail(3);
    
    
//    Завдання №2
//    Додати в клас із завдання 1 такі функції:
//    ■ вставка елемента в задану позицію;
//    ■ видалення елемента за заданою позицією;
//    ■ пошук заданого елемента (функція повертає позицію знайденого елемента в разі успіху або nullptr у разі невдачі);
//    ■ пошук і заміна заданого елемента (функція повертає кількість замінених елементів у разі успіху або -1 у разі невдачі);
//    ■ переворот списку.
    
    list.insert(2, 99);
//    list.deletionByIndex(3);
    list.show();
    
    
    
    
    int x =  list.searchForAGivenElement(1);
    cout<<x<<endl;
    list.searchAndReplacementOfAGivenElement(3,44);
    list.show();
    list.reverseList();
    list.show();
    
}
