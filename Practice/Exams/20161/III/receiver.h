#ifndef RECEIVER_H
#define RECEIVER_H

class Receiver
{
public:
    Receiver(double value = 0.0);
    double value() const;
    void add(double value);
    void multiply(double value);

private:
    double m_value;
};

#endif // RECEIVER_H
