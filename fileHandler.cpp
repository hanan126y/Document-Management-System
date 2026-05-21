// ========================= FileHandler.cpp =========================

#include "FileHandler.h"

void FileHandler::saveToFile(vector<Document*> &docs)
{
    ofstream file("documents.txt");

    for (int i = 0; i < docs.size(); i++)
    {
        file << docs[i]->getType() << endl;
        file << docs[i]->getId() << endl;
        file << docs[i]->getTitle() << endl;
        file << docs[i]->getContent() << endl;
    }

    file.close();

    cout << "\nDocuments saved successfully.\n";
}