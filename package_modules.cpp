#include <iostream>
#include <vector>

using namespace std;

template<class T>
string join(T &val, const string &delim) {
    string str;
    typename T::iterator it;
    const auto last = val.end() - 1;
    for (it = val.begin(); it != val.end(); it++) {
        str += *it;
        if (it != last) {
            str += delim;
        }
    }
    return str;
}

int main(int argc, char **argv) {
    vector<string> v;
    for (auto i = 1; i < argc; i++) {
        v.emplace_back(argv[i]);
    }
    auto s = join(v, " ");
    auto cmd = "mvn clean package -pl " + s + " -am";
    cout << "Run : " << cmd << endl;
    system(cmd.data());
    return 0;
}