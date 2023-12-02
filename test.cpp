// Example program
#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::string nim;
  std::cout << "Hello World\n";
  std::cout << "Siapa nama anda? ";
  getline (std::cin, name);
  std::cout << "Masukan NIM anda? ";
  getline (std::cin, nim);
  std::cout << "Selamat datang " + name + " dengan NIM " + nim + " , selamat belajar di C++";
}
