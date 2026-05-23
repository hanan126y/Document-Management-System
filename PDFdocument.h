// ========================= PDFDocument.h =========================

#ifndef PDFDOCUMENT_H
#define PDFDOCUMENT_H

#include "Document.h"

class PDFDocument : public Document
{
public:
    PDFDocument(int i, string t, string c);

    void display() override;

    string getType() override;
};

#endif