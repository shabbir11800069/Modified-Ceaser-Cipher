#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Press 1 for Encryption:" << endl;
    cin >> choice;
    cin.ignore();

    if (choice == 1){
        string msg;
        cout << "Enter message: "<< endl;
        getline(cin, msg);

        int key;
        cout << "Enter key: ";
        cin >> key;
        cin.ignore();

        string encryptedText = msg;

        for (int i = 0; i < msg.size(); i ++){

            if(msg[i]==32){
                continue;
            } else {

                if((msg[i]+key) > 122) {
                    int temp = (msg[i] + key) - 122;
                    encryptedText[i] = 96 + temp;
                } else if (msg[i] + key > 90 && msg[i] <= 96){
                    int temp = (msg[i] + key) - 90;
                    encryptedText[i] = 64 + temp;
                } else {
                    encryptedText[i] += key;
                }

            } 
        }

        cout << "Encrypted Message: " << encryptedText;

    } 
    } 

