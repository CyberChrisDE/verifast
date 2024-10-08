void multiple_unnamed_arguments(int, int, long);
//@ requires true;
//@ ensures true;

int default_valued_arguments(int j = 0, int k = 42)
//@ requires -10000 <= j + k &*& j + k <= 10000;
//@ ensures result == j + k;
{
    return j + k;
}

int main()
//@ requires true;
//@ ensures true;
{
    int res = default_valued_arguments(3);
    //@ assert(res == 45);
}
