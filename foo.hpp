#include <stdexcept>

class hidden_error : public std::runtime_error
{
public:
    hidden_error() : std::runtime_error("hidden_error threw") {}
};

__attribute__((visibility("default"))) void throw_hidden_error();

class __attribute__((visibility("default"))) visible_error : public std::runtime_error
{
public:
    visible_error() : std::runtime_error("visible_error threw") {}
};

__attribute__((visibility("default"))) void throw_visible_error();
