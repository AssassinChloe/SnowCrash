#include <string>
#include <cstring>
#include <iostream>
#include <fstream>

int main(void)
{

    std::ifstream file("./token");
    size_t count = 0;
    std::string ret = "";
    std::string token;
    getline(file, token);
    for (char c: token)
    {
        ret += static_cast<char>(c - count);
        count ++;
    }
    file.close();
    std::cout << ret << std::endl;
    return 0;
}