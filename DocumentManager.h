// ========================= DocumentManager.h =========================

#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <vector>
#include "TextDocument.h"
#include "PDFDocument.h"
#include "FileHandler.h"


class DocumentManager
{
private:
    vector<Document*> documents;

public:

DocumentManager(); 

    void addDocument();
    void viewDocuments();
    void searchDocument(int id);      // Static Polymorphism
    void searchDocument(string title);
    void deleteDocument();
    void menu();

    ~DocumentManager();
};

#endif
