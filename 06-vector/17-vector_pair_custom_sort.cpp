#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareMarks(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}

int main() {
    vector<pair<string, int>> students = {{"Rohan", 78}, {"Adnan", 92}, {"Sufi", 85}};
    sort(students.begin(), students.end(), compareMarks);
    for (auto& s : students) cout << s.first << ": " << s.second << endl;
    return 0;
}