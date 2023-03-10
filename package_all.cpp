#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    string cmd = "mvn clean package";
    cout << "Run : " << cmd << endl;
    system(cmd.data());
    return 0;
}