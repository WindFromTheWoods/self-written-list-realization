// Лист - Это структура данных, которая содержит в себе элемент (узел) и указатель на последующий элемент
// Последний элемент листа указывает на nullptr (Нулевой указатель)

/*
 * Что бы реализовать список нам необходимо:
 * 1) Выделить под него память.
 * 2) Задать ему значение
 * 3) Сделать так, чтобы он ссылался на предыдущий элемент (или на NULL, если его не было)
 * 4) Перекинуть указатель head на новый узел.
 */

#include <iostream>
using namespace std;

// Узел между обьектами листа
typedef struct Node
{
    int value;
    struct Node *next;
} Node;

// Обьявляем базовую функцию - запись элемента в конец списка
void push(Node **head, int dataq);

// В самом начале списка не существует по этому мы указываем на nullprt
Node *head = nullptr;

// Мейн функция
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

// Реализовываем функцию записи элемента в конец списка
void push(Node **head, int data)
{
    Node *tmp = (Node*) malloc(sizeof(Node)); // Выделяем память для листа
    tmp->value = data; // Записываем данные
    tmp->next = (*head); // Ставим указатель на следующий элемент
    (*head) = tmp; // Обнуляем указатель
}