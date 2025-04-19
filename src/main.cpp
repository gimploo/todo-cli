#include <iostream>
#include "./TodoManager.hpp"


int main(void)
{
    TodoManager todoManager {};
    todoManager.cmd_input();
    todoManager.displayAll();

    return 0;
}
