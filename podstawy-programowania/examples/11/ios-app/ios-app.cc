#include <ctime>
#include <fstream>

int
main()
{
  std::ofstream file{ "time.txt", std::ios::out | std::ios::app };
  file << std::time(nullptr) << '\n';
}
