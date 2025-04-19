#include <string>

static int32_t TodoCounter = 0;

class Todo {

    const int32_t id_;
    std::string text_;
    bool isChecked_ = false;

public:
    explicit Todo(std::string &&text) :
        text_(std::move(text)), 
        id_(TodoCounter++) 
    {}

    Todo(Todo &&todo):
        id_(todo.id_), 
        text_(std::move(todo.text_)),
        isChecked_(todo.isChecked_)
    { }

    Todo(const Todo&) = delete;

    Todo& operator=(const Todo &todo) = delete;

    Todo& operator=(Todo &&todo) noexcept {
        text_ = std::move(todo.text_);
        isChecked_ = todo.isChecked_;
        return *this;
    }

    const int32_t getId() const { return id_; }
    const std::string getText() const { return text_; }

    void done() { isChecked_ = true; }

};



