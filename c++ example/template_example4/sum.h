#ifndef SUM_H
#define SUM_H
template <typename I, typename D>
class Sum
{
    D m_a;
    D m_b;
public:
    Sum();
    ~Sum();
    D add(D a,D b);
};

#endif // SUM_H
