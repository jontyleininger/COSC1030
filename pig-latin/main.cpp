//
// Jon Leininger
// 5-6-25
// Pig Latin Programming Project
// COSC 1030
//

#include <cstring> 
#include <cctype>
#include <iostream>
using namespace std;

void toPigLatin(const char* , char*);

int main()
{
	const int MAX_LEN = 1000;
	char sentence[MAX_LEN];
        cout << "Enter a sentence: ";
        cin.getline(sentence, MAX_LEN);

        char* word = strtok(sentence, " ");
        char pigLatinWord[MAX_LEN];

        cout << "Pig Latin version: ";

        while (word != nullptr)
        {
            toPigLatin(word, pigLatinWord);
            cout << pigLatinWord << " ";
            word = strtok(nullptr, " ");
        }

        cout << endl;

        return 0;

}




void toPigLatin(const char* word, char* pigLatinWord)
 {
	int len = strlen(word);

	if (len == 0)
	{
        pigLatinWord[0] = '\0';
        return;
	}
    
    strcpy(pigLatinWord, word + 1);          
    pigLatinWord[len - 1] = word[0];          
    pigLatinWord[len] = 'a';                  
    pigLatinWord[len + 1] = 'y';              
    pigLatinWord[len + 2] = '\0';             



}