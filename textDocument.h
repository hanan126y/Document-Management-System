// ========================= TextDocument.h =========================

#ifndef TEXTDOCUMENT_H
#define TEXTDOCUMENT_H

#include "Document.h"

class TextDocument : public Document
{
public:
    TextDocument(int i, string t, string c);

    void display() override;

    string getType() override;
};

#endif