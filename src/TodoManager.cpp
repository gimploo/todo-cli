#include <iostream>
#include "./TodoManager.hpp"

void TodoManager::addTodo(std::string &&text) 
{
    Todo todo(std::move(text));
    const int32_t todoId = todo.getId();
    todos_.emplace(todoId, std::move(todo));
}

void TodoManager::removeTodo(const int todo_id)
{
    todos_.erase(todo_id);
}

void TodoManager::updateTodo(const int todo_id, Todo &&todo)
{
    auto existing_todo = todos_.find(todo_id);
    if (existing_todo == todos_.end()) {
        return;
    }
    existing_todo->second = std::move(todo);
}

void TodoManager::cmd_input()
{
    std::string input;
    std::cout << "Enter todo: \n";
    std::cin >> input;

    addTodo(std::move(input));
}

void TodoManager::displayAll() noexcept
{
    for(const auto&[key, value]: todos_)
    {
        std::cout << value.getText() << "\n";
    }
}


