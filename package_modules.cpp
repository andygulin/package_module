#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    string cmd;
    string s;
    for (int i = 1; i < argc; i++) {
        s.append(argv[i]).append(",");
    }
    s = s.substr(0, s.length() - 1);

    cmd = "mvn clean package -pl " + s + " -am";
    cout << "EXEC : " << cmd << endl;
    system(cmd.data());
    return 0;
}