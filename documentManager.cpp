// ========================= DocumentManager.cpp =========================

#include "DocumentManager.h"

void DocumentManager::addDocument()
{
    int type;
    int id;
    string title;
    string content;

    cout << "\n1. Text Document";
    cout << "\n2. PDF Document";
    cout << "\nChoose Type: ";
    cin >> type;

    cin.ignore();

    cout << "Enter ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Content: ";
    getline(cin, content);

    if (type == 1)
    {
        documents.push_back(new TextDocument(id, title, content));
    }
    else if (type == 2)
    {
        documents.push_back(new PDFDocument(id, title, content));
    }

    cout << "\nDocument Added Successfully.\n";
}

void DocumentManager::viewDocuments()
{
    if (documents.empty())
    {
        cout << "\nNo documents available.\n";
        return;
    }

    for (int i = 0; i < documents.size(); i++)
    {
        documents[i]->display();
    }
}

void DocumentManager::searchDocument(int id)
{
    for (int i = 0; i < documents.size(); i++)
    {
        if (documents[i]->getId() == id)
        {
            documents[i]->display();
            return;
        }
    }

    cout << "\nDocument not found.\n";
}

void DocumentManager::searchDocument(string title)
{
    for (int i = 0; i < documents.size(); i++)
    {
        if (documents[i]->getTitle() == title)
        {
            documents[i]->display();
            return;
        }
    }

    cout << "\nDocument not found.\n";
}

void DocumentManager::deleteDocument()
{
    int id;

    cout << "\nEnter Document ID to Delete: ";
    cin >> id;

    for (int i = 0; i < documents.size(); i++)
    {
        if (documents[i]->getId() == id)
        {
            delete documents[i];

            documents.erase(documents.begin() + i);

            // SAVE UPDATED DATA TO FILE
            FileHandler::saveToFile(documents);

            cout << "\nDocument Deleted Successfully.\n";

            return;
        }
    }

    cout << "\nDocument not found.\n";
}

void DocumentManager::menu()
{
    int choice;

    do
    {
        cout << "\n========== DOCUMENT MANAGEMENT SYSTEM ==========\n";

        cout << "1. Add Document\n";
        cout << "2. View Documents\n";
        cout << "3. Search by ID\n";
        cout << "4. Search by Title\n";
        cout << "5. Delete Document\n";
        cout << "6. Save to File\n";
        cout << "0. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            addDocument();
        }
        else if (choice == 2)
        {
            viewDocuments();
        }
        else if (choice == 3)
        {
            int id;

            cout << "Enter ID: ";
            cin >> id;

            searchDocument(id);
        }
        else if (choice == 4)
        {
            string title;

            cin.ignore();

            cout << "Enter Title: ";
            getline(cin, title);

            searchDocument(title);
        }
        else if (choice == 5)
        {
            deleteDocument();
        }
        else if (choice == 6)
        {
            FileHandler::saveToFile(documents);
        }

    } while (choice != 0);
}

DocumentManager::~DocumentManager()
{
    for (int i = 0; i < documents.size(); i++)
    {
        delete documents[i];
    }
}