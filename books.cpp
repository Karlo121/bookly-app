
// ******************************************************************************************************** //
//                                                                                                        
//                                            XML Data Binding                                            
//                                                                                                        
//         Generated on: 24/06/2021 17:35:04                                                              
//       Generated from: C:\Users\Comp\Desktop\Faks\Napredne Tehnike Programiranja\bookly-app\books.xml   
//   Settings stored in: C:\Users\Comp\Desktop\Faks\Napredne Tehnike Programiranja\bookly-app\books.xdb   
//                                                                                                        
// ******************************************************************************************************** //

#include <System.hpp>
#pragma hdrstop

#include "books.h"


// Global Functions 

_di_IXMLbooksType __fastcall Getbooks(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLbooksType) Doc->GetDocBinding("books", __classid(TXMLbooksType), TargetNamespace);
};

_di_IXMLbooksType __fastcall Getbooks(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getbooks(DocIntf);
};

_di_IXMLbooksType __fastcall Loadbooks(const System::UnicodeString& FileName)
{
  return (_di_IXMLbooksType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("books", __classid(TXMLbooksType), TargetNamespace);
};

_di_IXMLbooksType __fastcall  Newbooks()
{
  return (_di_IXMLbooksType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("books", __classid(TXMLbooksType), TargetNamespace);
};

// TXMLbooksType 

void __fastcall TXMLbooksType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("book"), __classid(TXMLbookType));
  ItemTag = "book";
  ItemInterface = __uuidof(IXMLbookType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLbookType __fastcall TXMLbooksType::Get_book(int Index)
{
  return (_di_IXMLbookType) List->Nodes[Index];
};

_di_IXMLbookType __fastcall TXMLbooksType::Add()
{
  return (_di_IXMLbookType) AddItem(-1);
};

_di_IXMLbookType __fastcall TXMLbooksType::Insert(const int Index)
{
  return (_di_IXMLbookType) AddItem(Index);
};

// TXMLbookType 

System::UnicodeString __fastcall TXMLbookType::Get_name()
{
  return GetChildNodes()->Nodes[System::UnicodeString("name")]->Text;
};

void __fastcall TXMLbookType::Set_name(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("name")]->NodeValue = Value;
};

int __fastcall TXMLbookType::Get_pageNum()
{
  return GetChildNodes()->Nodes[System::UnicodeString("pageNum")]->NodeValue.operator int();
};

void __fastcall TXMLbookType::Set_pageNum(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("pageNum")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLbookType::Get_authorName()
{
  return GetChildNodes()->Nodes[System::UnicodeString("authorName")]->Text;
};

void __fastcall TXMLbookType::Set_authorName(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("authorName")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLbookType::Get_authorSurname()
{
  return GetChildNodes()->Nodes[System::UnicodeString("authorSurname")]->Text;
};

void __fastcall TXMLbookType::Set_authorSurname(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("authorSurname")]->NodeValue = Value;
};

int __fastcall TXMLbookType::Get_rating()
{
  return GetChildNodes()->Nodes[System::UnicodeString("rating")]->NodeValue.operator int();
};

void __fastcall TXMLbookType::Set_rating(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("rating")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLbookType::Get_review()
{
  return GetChildNodes()->Nodes[System::UnicodeString("review")]->Text;
};

void __fastcall TXMLbookType::Set_review(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("review")]->NodeValue = Value;
};
