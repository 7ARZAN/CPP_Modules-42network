In C++, there are four main types of casts, each serving a different purpose:

1. **`static_cast`**: Used for conversions that are checked at compile-time, like converting between related types (e.g., `int` to `float`). Use it when you know the conversion is safe and won't cause unexpected behavior.

2. **`dynamic_cast`**: Used for safely downcasting in polymorphic hierarchies (i.e., with inheritance and virtual functions). It checks at runtime if the cast is valid, returning `nullptr` if it's not. Use it when you need to convert a base class pointer/reference to a derived class type.

3. **`const_cast`**: Used to add or remove `const` or `volatile` qualifiers from a variable. Use it when you need to modify a const object (though this should be done cautiously).

4. **`reinterpret_cast`**: Used for low-level casting that might not be safe or portable, such as casting between unrelated pointer types. Use it for operations that require type punning or when interacting with hardware, but be careful as it can lead to undefined behavior.

In summary:
- **`static_cast`**: Safe conversions known at compile-time. `example`: [static_cast]:
```cpp
int i = 42;
float f = static_cast<float>(i);
```

- **`dynamic_cast`**: Safe downcasting in polymorphic types, checked at runtime. `example`: [dynamic_cast]:
```cpp
class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void foo() {}
};

Base* b = new Derived;
Derived* d = dynamic_cast<Derived*>(b);
if (d) {
    d->foo();
}
```

- **`const_cast`**: Adding/removing `const` or `volatile`. `example`: [const_cast]:
```cpp
const int i = 42;
int* ip = const_cast<int*>(&i);
```

- **`reinterpret_cast`**: Low-level casting, use with caution. `example`: [reinterpret_cast]:
```cpp
int i = 42;
void* v = &i;
int* ip = reinterpret_cast<int*>(v);
```
