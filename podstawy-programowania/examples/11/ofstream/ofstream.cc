#include <ctime>
#include <fstream>

int
main()
{
  std::ofstream file{ "time.txt" };
  file << std::time(nullptr) << '\n';
}
