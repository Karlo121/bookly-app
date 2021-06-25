
// ******************************************************************************************************** //
//                                                                                                        
//                                            XML Data Binding                                            
//                                                                                                        
//         Generated on: 24/06/2021 17:35:04                                                              
//       Generated from: C:\Users\Comp\Desktop\Faks\Napredne Tehnike Programiranja\bookly-app\books.xml   
//   Settings stored in: C:\Users\Comp\Desktop\Faks\Napredne Tehnike Programiranja\bookly-app\books.xdb   
//                                                                                                        
// ******************************************************************************************************** //

#ifndef   booksH
#define   booksH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLbooksType;
typedef System::DelphiInterface<IXMLbooksType> _di_IXMLbooksType;
__interface IXMLbookType;
typedef System::DelphiInterface<IXMLbookType> _di_IXMLbookType;

// IXMLbooksType 

__interface INTERFACE_UUID("{2770B504-0C95-4EF5-A0E1-232C369F3AC6}") IXMLbooksType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLbookType __fastcall Get_book(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLbookType __fastcall Add() = 0;
  virtual _di_IXMLbookType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLbookType book[int Index] = { read=Get_book };/* default */
};

// IXMLbookType 

__interface INTERFACE_UUID("{67165AFF-9190-411D-870E-258A9C31182C}") IXMLbookType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_name() = 0;
  virtual int __fastcall Get_pageNum() = 0;
  virtual System::UnicodeString __fastcall Get_authorName() = 0;
  virtual System::UnicodeString __fastcall Get_authorSurname() = 0;
  virtual int __fastcall Get_rating() = 0;
  virtual System::UnicodeString __fastcall Get_review() = 0;
  virtual void __fastcall Set_name(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_pageNum(int Value) = 0;
  virtual void __fastcall Set_authorName(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_authorSurname(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_rating(int Value) = 0;
  virtual void __fastcall Set_review(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString name = { read=Get_name, write=Set_name };
  __property int pageNum = { read=Get_pageNum, write=Set_pageNum };
  __property System::UnicodeString authorName = { read=Get_authorName, write=Set_authorName };
  __property System::UnicodeString authorSurname = { read=Get_authorSurname, write=Set_authorSurname };
  __property int rating = { read=Get_rating, write=Set_rating };
  __property System::UnicodeString review = { read=Get_review, write=Set_review };
};

// Forward Decls 

class TXMLbooksType;
class TXMLbookType;

// TXMLbooksType 

class TXMLbooksType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLbooksType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLbooksType 
  virtual _di_IXMLbookType __fastcall Get_book(int Index);
  virtual _di_IXMLbookType __fastcall Add();
  virtual _di_IXMLbookType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLbookType 

class TXMLbookType : public Xml::Xmldoc::TXMLNode, public IXMLbookType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLbookType 
  virtual System::UnicodeString __fastcall Get_name();
  virtual int __fastcall Get_pageNum();
  virtual System::UnicodeString __fastcall Get_authorName();
  virtual System::UnicodeString __fastcall Get_authorSurname();
  virtual int __fastcall Get_rating();
  virtual System::UnicodeString __fastcall Get_review();
  virtual void __fastcall Set_name(System::UnicodeString Value);
  virtual void __fastcall Set_pageNum(int Value);
  virtual void __fastcall Set_authorName(System::UnicodeString Value);
  virtual void __fastcall Set_authorSurname(System::UnicodeString Value);
  virtual void __fastcall Set_rating(int Value);
  virtual void __fastcall Set_review(System::UnicodeString Value);
};

// Global Functions 

_di_IXMLbooksType __fastcall Getbooks(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLbooksType __fastcall Getbooks(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLbooksType __fastcall Loadbooks(const System::UnicodeString& FileName);
_di_IXMLbooksType __fastcall  Newbooks();

#define TargetNamespace ""

#endif