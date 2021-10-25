#include <iostream>
using namespace std;
struct stek
{
    int value;
    struct stek *next; // указатель на следующий элемент списка (стека)
    void push(stek *&NEXT, const int VALUE)
    {
        stek *MyStack = new stek; // объявляем новую динамическую переменную типа stek
        MyStack->value = VALUE;   // записываем значение, которое помещается в стек
        MyStack->next = NEXT;     // связываем новый элемент стека с предыдущим
        NEXT = MyStack;           // новый элемент стека становится его вершиной
    }
    int top(stek *&NEXT)
    {
        int temp = NEXT->value;
        stek *Mystack = NEXT;
        NEXT = NEXT->next;
        return temp;
    }
    void pop(stek *&NEXT)
    {
        int temp = NEXT->value; // извлекаем в переменную temp значение в вершине стека
        stek *MyStack = NEXT;   // запоминаем указатель на вершину стека, чтобы затем
                                // освободить выделенную под него память
        NEXT = NEXT->next;      // вершиной становится предшествующий top элемент
        delete MyStack;         // освобождаем память, тем самым удалили вершину
    }
};

int main()
{
    stek S;
    stek *p = 0;

    S.push(p, 100); //Положили в стек 100
    S.push(p, 200); //Положили в стек 200

  
    cout << S.top(p) << endl; //200
    S.pop(p);
    cout << S.top(p);  
    return 0;
}