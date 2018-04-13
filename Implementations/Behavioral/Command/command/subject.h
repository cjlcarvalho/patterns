#ifndef SUBJECT_H
#define SUBJECT_H

class Subject
{
public:
    Subject(int value = 0);
    void add(int value);
    int value() const;

private:
    int m_value;
};

#endif // SUBJECT_H
