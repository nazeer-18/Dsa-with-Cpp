#include <iostream>
using namespace std;
void generateSub(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char first = s[0];
    // not to come
    generateSub(s.substr(1), ans);
    // come
    generateSub(s.substr(1), ans + first);
    //add ascii
    generateSub(s.substr(1),ans+to_string(int(first)));
}
int main()
{
    string s;
    cin >> s;
    generateSub(s, "");
    return 0;
}