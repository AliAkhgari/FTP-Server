#include "client.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    string config_file_path = argv[1];
    Client client = Client();
    client.read_config_file(config_file_path);
    client.start();
    return 0;
}
