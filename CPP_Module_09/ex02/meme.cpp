#include <iostream>
#include <vector>
#include <valarray>
#include <deque>
#include <type_traits>

//template	<template<class...> class C, typename T>

template	<typename Container, typename T>

Container create_container(Container const& c, T const& t){
    Container result = c;
    result.push_back(t);
    return result;
}

template <typename Container>
void foo(Container* c) {
    std::cout << "Container size: " << c->size() << std::endl;
}


int main() {
    std::vector<int> v;
    std::valarray<int> va;
    std::deque<int> p;
    foo(&v);
    foo(&va);
    foo(&p);
    return 0;
}
