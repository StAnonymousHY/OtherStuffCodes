#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    if(argc == 1)
        std::cout << "hello" << std::endl;
    else
    {
        std::cout << "hello ";
        for (int i = 1; i < argc ; i++)
            std::cout<<argv[i]<<" ";
        std::cout<<endl;
    }

    return 0;
}