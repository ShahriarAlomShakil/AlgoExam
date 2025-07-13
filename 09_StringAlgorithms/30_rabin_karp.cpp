#include <iostream>
#include <string>
using namespace std;

const int PRIME = 101; // A prime number for hashing

void rabinKarp(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    int h = 1; // hash value for pow(256, m-1) % PRIME
    
    // Calculate h = pow(256, m-1) % PRIME
    for (int i = 0; i < m - 1; i++) {
        h = (h * 256) % PRIME;
    }
    
    int patternHash = 0; // hash value for pattern
    int textHash = 0;    // hash value for text window
    
    // Calculate hash for pattern and first window of text
    for (int i = 0; i < m; i++) {
        patternHash = (256 * patternHash + pattern[i]) % PRIME;
        textHash = (256 * textHash + text[i]) % PRIME;
    }
    
    bool found = false;
    
    // Slide the pattern over text one by one
    for (int i = 0; i <= n - m; i++) {
        // Check if hash values match
        if (patternHash == textHash) {
            // Check characters one by one
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            
            if (match) {
                cout << "Pattern found at index " << i << endl;
                found = true;
            }
        }
        
        // Calculate hash for next window
        if (i < n - m) {
            textHash = (256 * (textHash - text[i] * h) + text[i + m]) % PRIME;
            
            // Make sure hash is positive
            if (textHash < 0) {
                textHash = textHash + PRIME;
            }
        }
    }
    
    if (!found) {
        cout << "Pattern not found" << endl;
    }
}

int main() {
    string text, pattern;
    
    cout << "Enter text: ";
    getline(cin, text);
    
    cout << "Enter pattern to search: ";
    getline(cin, pattern);
    
    cout << "Searching for pattern '" << pattern << "' in text '" << text << "':" << endl;
    rabinKarp(text, pattern);
    
    return 0;
}
