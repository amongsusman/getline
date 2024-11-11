#include <iostream> 
#include <string>
#include <vector>
using namespace std;
int main() {
    int times;
    string cur;
    string category;
    vector<string> list;
    cout << "Create a top X list of one of these categories: Movies, TV Shows, Songs, YouTubers, Video Games" << endl;
    cout << "Which category would you like to select?" << endl;
    getline(cin, category);
    cout << "How long do you want your list to be?" << endl;
    cin >> times;
    cin.ignore();
    cout << "Type in your entries for the list, one at a time." << endl;
    for (int i = 0; i < times; i++) {
        getline(cin, cur);
        list.push_back(cur);
    }
    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }
    return 0;
}
