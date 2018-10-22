#include "foo.hpp"

void throw_hidden_error()
{
    throw hidden_error();
}

void throw_visible_error()
{
    throw visible_error();
}
