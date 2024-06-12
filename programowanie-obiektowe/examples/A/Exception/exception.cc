#include <exception>
#include <iostream>
#include <stdexcept>

class custom_exception_1 : public std::exception
{
public:
  custom_exception_1(const std::string& msg)
    : msg_{ msg }
  {
  }

  const char* what() const noexcept override { return msg_.c_str(); }

private:
  std::string msg_;
};

class custom_exception_2 : public std::runtime_error
{
public:
  custom_exception_2(const std::string& msg)
    : std::runtime_error{ msg }
  {
  }
};

void
exception_test(auto e)
{
  try {
    throw e;
  } catch (custom_exception_1& e) {
    std::cout << "Zlapano wyjatek: " << e.what() << '\n';
  } catch (custom_exception_2& e) {
    std::cout << "Zlapano wyjatek: " << e.what() << '\n';
  } catch (std::exception& e) {
    std::cout << "Zlapano wyjatek: " << e.what() << '\n';
  } catch (...) {
    std::cout << "Zlapano cos blizej nieokreslonego\n";
  }
}

int
main()
{
  exception_test(custom_exception_1{ "Hello, exceptional world!" });
  exception_test(custom_exception_2{ "Hello, even more exceptional world!" });
  exception_test(std::exception{});
  exception_test(42);
}
