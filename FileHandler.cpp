// ========================= FileHandler.cpp =========================

#include "FileHandler.h"
#include "TextDocument.h"
#include "PDFDocument.h"

void FileHandler::saveToFile(vector<Document*> &docs)
{
    ofstream file("documents.txt");

    if (!file)
{
    cout << "\nError: Could not open file for saving.\n";
    return;
}

    for (size_t i = 0; i < docs.size(); i++)
    {
        file << docs[i]->getType() << endl;
        file << docs[i]->getId() << endl;
        file << docs[i]->getTitle() << endl;
        file << docs[i]->getContent() << endl;
    }

    file.close();

    cout << "\nDocuments saved successfully.\n";
}

void FileHandler::loadFromFile(vector<Document*> &docs)
{
    ifstream file("documents.txt");
    if (!file) return;   // no file yet — that's fine on first run

    string type, title, content;
    int id;

    while (getline(file, type))
    {
        file >> id;
        file.ignore();
        getline(file, title);
        getline(file, content);

        if (type == "Text")
            docs.push_back(new TextDocument(id, title, content));
        else if (type == "PDF")
            docs.push_back(new PDFDocument(id, title, content));
    }

    file.close();
}
