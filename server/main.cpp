#include "server.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    string config_file_path = argv[1];
    Server server = Server();
    server.read_config_file(config_file_path);
    server.start();
    return 0;
}
