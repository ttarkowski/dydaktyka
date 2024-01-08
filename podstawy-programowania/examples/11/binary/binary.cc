#include <fstream>
#include <iostream>
#include <string>

void
encode_to_binary_file(const std::string& filename, int value)
{
  std::ofstream file{ filename, std::ios::binary };
  file.write(reinterpret_cast<const char*>(&value), sizeof(value));
}

int
decode_from_binary_file(const std::string& filename)
{
  std::ifstream file{ filename, std::ios::binary };
  int n;
  file.read(reinterpret_cast<char*>(&n), sizeof(n));
  return n;
}

int
main()
{
  const std::string file{ "file.bin" };
  encode_to_binary_file(file, 42);
  std::cout << decode_from_binary_file(file) << '\n';
}
