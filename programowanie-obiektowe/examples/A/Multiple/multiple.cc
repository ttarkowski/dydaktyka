class base
{
public:
  virtual ~base() = default;
  virtual void f() {}
};

class base_1 : public virtual base
{
public:
  void f() override
  {
    // 1
  }
};

class base_2 : public virtual base
{
public:
  void f() override
  {
    // 2
  }
};

class derived
  : public base_1
  , public base_2
{
public:
  void f() override { base_2::f(); }
};

int
main()
{
  base* p = new derived{};
  p->f();
}
