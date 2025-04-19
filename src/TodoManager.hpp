#include "./Todo.hpp"
#include <unordered_map>

class TodoManager {

    std::unordered_map<int32_t, Todo> todos_;

public:
    explicit TodoManager() {}
    void addTodo(std::string &&text);
    void removeTodo(const int todo_id);
    void updateTodo(const int todo_id, Todo &&todo);
    void cmd_input();
    void displayAll() noexcept;
};
