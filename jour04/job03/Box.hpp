#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>

template <typename T>
class Box
{
private:
    T element;

public:
    Box();

    Box(T elem);

    void setElement(T elem);

    T getElement() const;
};

template <typename T>
Box<T>::Box() : element(T()) {}

template <typename T>
Box<T>::Box(T elem) : element(elem) {}

template <typename T>
void Box<T>::setElement(T elem)
{
    element = elem;
}

template <typename T>
T Box<T>::getElement() const
{
    return element;
}

// template de spécialistation pour stockr des pointeurs
template <typename T>
class Box<T *>
{
private:
    T *element;

public:
    Box();

    Box(T *elem);

    void setElement(T *elem);

    T getElement() const;

    T *getPointer() const;
};

template <typename T>
Box<T *>::Box() : element(nullptr) {}

template <typename T>
Box<T *>::Box(T *elem) : element(elem) {}

template <typename T>
void Box<T *>::setElement(T *elem)
{
    element = elem;
}

template <typename T>
T Box<T *>::getElement() const
{
    return *element;
}

template <typename T>
T *Box<T *>::getPointer() const
{
    return element;
}

#endif
