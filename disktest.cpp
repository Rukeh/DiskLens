#include <cstddef>
#include <iostream>

using namespace std;

constexpr size_t KB = 1024;
constexpr size_t MB = 1024 * KB;

struct TestConfig {
    string test_dir = "./disklens_test";
    size_t block_size = 4 * KB;
    size_t total_size = 64 * MB;
    size_t rand_ops= 1024;  
    bool verbose = true;
    bool cleanup = true;
};

int main(){
    return 0;
}