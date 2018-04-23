#ifndef SUBJECT_H
#define SUBJECT_H

class Algorithm;

class Subject
{
public:
    Subject(Algorithm *a = nullptr);
    void setAlgorithm(Algorithm *a);
    void operation();

private:
    Algorithm *m_algorithm;
};

#endif // SUBJECT_H
