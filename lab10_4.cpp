#include <iostream>
#include <string>
using namespace std;

class Cipher;

class Text {
private:
    string message;

public:
    Text(string msg) {
        message = msg;
    }

    friend class Cipher;
};

class Cipher {
public:
    string encrypt(Text t) {
        string encryptedText = "";
        for (char c : t.message) {
            encryptedText += c + 1;
        }
        return encryptedText;
    }
};

int main() {
    Text txt("HelloWorld");
    Cipher cipher;

    string encryptedText = cipher.encrypt(txt);
    cout << "Encrypted Text: " << encryptedText << endl;

    return 0;
}

