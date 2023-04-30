#ifndef SET_H
#define SET_H

#include <iostream>
#include <iterator>

using namespace std;

template <typename Atype>
class Set 
{
    private:
        Atype* a;
        int len;

    public:
        Set(int size);
        ~Set();
        bool Is_Empty();
        bool Is_Full();
        bool Add(Atype T);
        bool In_Set(Atype T);
        Atype Get(Atype T);

        template<typename T>
        friend std::ostream& operator<<(std::ostream& os, const Set<T>& set);

        class SetIterator : public std::iterator<std::input_iterator_tag, Atype> 
        {
            private:
                Atype* i;
            public:
                SetIterator(Atype* _i) : i(_i) {}
                SetIterator operator++() { SetIterator it = *this; i++; return it; }
                SetIterator operator++(int) { i++; return *this; }
                bool operator==(const SetIterator& rhs) { return i == rhs.i; }
                bool operator!=(const SetIterator& rhs) { return i != rhs.i; }
                Atype operator*() { return *i; }
        };

        SetIterator begin() { return SetIterator(a); }
        SetIterator end() { return SetIterator(a + len); }
};

template <typename Atype>
Set<Atype>::Set(int size) 
{
    len = size;
    a = new Atype[size];

    for (int i = 0; i < size; i++) 
    {
        a[i] = -1;
    }
}

template <typename Atype>
Set<Atype>::~Set() 
{
    delete[] a;
}

template <typename Atype>
bool Set<Atype>::Is_Empty() 
{
    for (int i = 0; i < len; i++) 
    {
        if (a[i] != -1) 
        {
            return false;
        }
    }
    return true;
}

template <typename Atype>
bool Set<Atype>::Is_Full() 
{
    for (int i = 0; i < len; i++) 
    {
        if (a[i] == -1) 
        {
            return false;
        }
    }
    return true;
}

template <typename Atype>
bool Set<Atype>::Add(Atype T) 
{
    if (In_Set(T)) 
    {
        return false;
    }
    for (int i = 0; i < len; i++) 
    {
        if (a[i] == -1) 
        {
            a[i] = T;
            return true;
        }
    }
    return false;
}

template <typename Atype>
bool Set<Atype>::In_Set(Atype T) 
{
    for (int i = 0; i < len; i++) 
    {
        if (a[i] == T) 
        {
            return true;
        }
    }
    return false;
}

template <typename Atype>
Atype Set<Atype>::Get(Atype T) 
{
    Atype val;
    for (int i = 0; i < len; i++) 
    {
        if (a[i] == T) 
        {
            val = a[i];
            a[i] = -1;
            return val;
        }
    }
    return -1;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Set<T>& set) 
{
    for (auto elem : set) 
    {
        os << elem << " ";
    }
    os << std::endl;
    return os;
}

#endif // SET_H