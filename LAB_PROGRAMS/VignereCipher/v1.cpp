#include<iostream>
using namespace std;

string plaintext, key;

// Function to take user input for plaintext and key
void input()
{
    cout << "enter plain text" << endl;
    cin >> plaintext;

    cout << "enter key" << endl;
    cin >> key;
}

// Function to check and adjust key length to match plaintext
void key_length_check()
{
    int size = key.size();

    // Infinite loop to keep appending characters to key until it matches plaintext size
    for (int i = 0;; i++)
    {
        if (key.size() == plaintext.size())
        {
            break;
        }
        else
        {
            key.push_back(key[i]);
        }
    }
}

// Function to perform encryption or decryption and return the result
string ciphertext(string plaintext, string key)
{
    string cipher_text;

    // Loop through each character in plaintext
    for (int i = 0; i < plaintext.size(); i++)
    {
        // Apply the Vigenere cipher formula to each character
        char ch = ((toupper(plaintext[i]) - 'A' + toupper(key[i]) - 'A') % 26) + 'A';

        // Append the encrypted/decrypted character to the result string
        cipher_text.push_back(ch);
    }
    return cipher_text;
}

int main()
{
    int choice;
    string cipher_text;

    // Prompt user for encryption (0) or decryption (1)
    cout << "enter 0 for encryption and 1 for decryption" << endl;
    cin >> choice;

    if (choice == 0)
    {
        // For encryption, take input and adjust key length
        input();
        key_length_check();

        // Display the generated key
        cout << "your generated key is: " << key << endl;

        // Perform encryption and display the result
        cipher_text = ciphertext(plaintext, key);
        cout << "your generated cipher text: " << cipher_text << endl;
    }


}
