#include <cassert>

class stack {
  struct item {
    int value;
    item* lower;
  };
  
public:
  stack() : top_{nullptr} {}

  void push(int val) {
    item* aux = top_;
    top_ = new item;
    top_->value = val;
    top_->lower = aux;
  }
  
  void pop() {
    if (top_) {
      item* aux = top_->lower;
      delete top_;
      top_ = aux;
    }
  }
  
  int top() const {
    assert(top_);
    return top_->value;
  }

  bool is_empty() const {
    return top_ == nullptr;
  }

  ~stack() {
    while (!this->is_empty()) {
      this->pop();
    }
  }

private:
  item* top_;
};

int main() {
  stack s{};
  assert(s.is_empty());

  for (int i = 0; i < 5; ++i) {
    s.push(i);
  }
  assert(!s.is_empty());
  assert(s.top() == 4);

  s.pop();
  assert(s.top() == 3);
}
