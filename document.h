// ========================= Document.h =========================

#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <iostream>
#include <string>

using namespace std;

class Document
{
protected:
    int id;
    string title;
    string content;

public:
    Document();
    Document(int i, string t, string c);

    virtual void display() = 0;

    int getId();
    string getTitle();
    string getContent();

    void setTitle(string t);
    void setContent(string c);

    virtual string getType() = 0;

    virtual ~Document() {}
};

#endif