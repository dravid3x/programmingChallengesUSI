#include <iostream>

using namespace std;

int sideways() {
    string words[15];
    string toPrint;
    int rows, cols;

    while (true){
        //Cleaning the array
        for (auto & word : words){
            word = "";
        }
        cin >> rows >> cols;

        if (rows == 0 && cols == 0) break;

        //Save the words in the array sideways
        for (int i = 0; i < rows; i++){
            string word;
            cin >> word;

            for (int k = 0; k < cols; k++){
                char value = word[k];
                words[k] += value;
            }
        }

        //Ordering the array (bubble sort, I know it's bad)
        for(int i=0;i<cols;i++)
        {
            for(int j=i+1;j<cols;j++)
            {
                char oneChar = ' ';
                char secondChar = ' ';

                int pos = 0;
                while (tolower(oneChar) == tolower(secondChar) && pos < cols){
                    oneChar = words[i][pos];
                    secondChar = words[j][pos];
                    pos++;
                }

                //check for same word
                if (pos == cols){
                    continue;
                }

                if((tolower(oneChar) > tolower(secondChar))){
                    string temp  =words[i];
                    words[i]=words[j];
                    words[j]=temp;
                }
            }
        }

        //Adding strings to final print, scan sideways
        for (int i = 0; i < rows; i++){
            for (int k = 0; k < cols; k++){
                toPrint += words[k][i];
            }
            toPrint += "\n";
        }
        toPrint += "\n";

    }

    //Removing excess \n
    toPrint = toPrint.substr(0, toPrint.size()-2);
    cout << toPrint;

    return 0;
}