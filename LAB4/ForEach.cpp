template<class type, class Function>
Function for_each(type first, type last, Function f)
{
    while (first != last) {
        f(*first);
        first++;
    }
    return f;
}
