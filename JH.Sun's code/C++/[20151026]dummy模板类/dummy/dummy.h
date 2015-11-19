
#ifndef DUMMY_H
#define DUMMY_H
template <class T>
class dummy{
public:
    dummy();

    void setItem(const T&);

    T getItem() const;
private:
    T item;
    bool defined;
    };
#endif // DUMMY_H


