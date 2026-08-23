#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void menu()
{
    cout << "\n=== Simple NotePad ===\n";

    cout << "1. Add a note \n";

    cout << "2. Save notes to file\n";

    cout << "3. View all notes\n";

    cout << "4. Exit\n";

    cout << "Choose an option: ";

}


void addNote(vector<string>&notes)

{
cout << "Enter your note:";
cin.ignore();
string note;
getline(cin,note);
notes.push_back(note);
cout << "Note added successfully.\n";


}



void viewNotes(const vector<string> &notes)
{
    if (notes.empty()){
        cout << "No notes avaliable.\n";
        return;
    }


    cout << "Your Notes:\n";
    for(size_t i = 0;i < notes.size();++i)
    {
        cout << i + 1 << ". " << notes[i] << endl;
    }
}


void saveNotes(const vector<string> & notes)
{
    string fileName;

    cout << "Enter File Name\n";
    cin >> fileName;
    fileName += ".txt";
    ofstream file(fileName);

    if(!file)
    {
        cout << "could not create file.\n";
        return;
    }

    for (const string & note: notes){
        file << note << endl;
    }
    file.close();
    cout << "Notes saved to" << fileName << " successfully.\n";
}

int main()
{
    vector <string> notes;
    int choice;
    do
    {
        menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            addNote(notes);
            break;
        case 2:
            saveNotes(notes);
            break;
        case 3:
            viewNotes(notes);
            break;
        case 4:
            cout << "Goodbye!\n";
            break;


        default:
        cout << "invalid option\n";
            break;
        }
    } while (choice != 4);

    return 0;
}