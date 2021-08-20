#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct Trie {
    
    bool is_terminal;
    Trie *str[10];
    Trie(): is_terminal(false) {
        fill(str, str + 10, nullptr);
    }

    ~Trie() {
        for (int i = 0; i < 10; i++)
        {
            if (str[i]) {
                delete str[i];
            }
        }
    }

    void insert(const char *key)
    {
        if (*key == '\0')
            is_terminal = true;
        else {
            int index = *key - '0';
            if (str[index] == 0)
                str[index] = new Trie();
            str[index]->insert(key + 1);
        }
    }

    bool find(const char *key)
    {
        if (*key == '\0') return true;

        if (is_terminal) return false;

        int index = *key - '0';
        
        return str[index]->find(key + 1);
    }
};

int main() {
    int t;
    char phone_books[10000][11];
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        Trie *root = new Trie();
        for (int i = 0; i < n; i++)
        {
            cin >> phone_books[i];
            root->insert(phone_books[i]);
        }

        bool is_valid = true;
        for (int i = 0; i < n; i++)
        {
            if (root->find(phone_books[i]) == false) {
                is_valid = false;
                break ;
            }
        }
        delete root;
        if (is_valid == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
