#ifndef COUNTER_H
#define COUNTER_H
class counter{
public:
    counter();
    counter(int);

    void increment();
    void decrement();

    void setCount(int);
    void setMaxValue(int);

    int getCount() const;
    int getMaxValue() const;
private:
    int count;
    int maxValue;
    };
#endif // COUNTER_H
