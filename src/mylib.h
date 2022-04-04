#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED

double add(double a, double b);
double subtract(double a, double b);

class Add
{
    public:
        Add()
            : _result(0)
        {
        }

        Add(double value)
            : _result(value)
        {
        }

        ~Add()
        {
        }

        template <typename T>
        double add(T value)
        {
            _result = ::add(_result, value);
            return _result;
        }

        template <typename T>
        double subtract(T value)
        {
            _result = ::subtract(_result, value);
            return _result;
        }

        double get_result() const
        {
            return _result;
        }

    private:
        double _result;
};

#endif
