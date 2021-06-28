// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : http://webservices.daehosting.com/services/isbnservice.wso?WSDL
//  >Import : http://webservices.daehosting.com/services/isbnservice.wso?WSDL>0
// Encoding : UTF-8
// Version  : 1.0
// (28/06/2021 22:24:36 - - $Rev: 96726 $)
// ************************************************************************ //

#ifndef   isbnserviceH
#define   isbnserviceH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <Soap.SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif
#if !defined(IS_REF)
#define IS_REF 0x0080
#endif


namespace NS_isbnservice {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:string          - "http://www.w3.org/2001/XMLSchema"[Gbl]
// !:boolean         - "http://www.w3.org/2001/XMLSchema"[Gbl]



// ************************************************************************ //
// Namespace : http://webservices.daehosting.com/ISBN
// transport : http://schemas.xmlsoap.org/soap/http
// style     : document
// use       : literal
// binding   : ISBNServiceSoapBinding
// service   : ISBNService
// port      : ISBNServiceSoap
// URL       : http://webservices.daehosting.com/services/isbnservice.wso
// ************************************************************************ //
__interface INTERFACE_UUID("{0888D556-93B1-7586-DB4E-A5A91B00E389}") ISBNServiceSoapType : public IInvokable
{
public:
  virtual bool            IsValidISBN13(const UnicodeString sISBN) = 0; 
  virtual bool            IsValidISBN10(const UnicodeString sISBN) = 0; 
};
typedef DelphiInterface<ISBNServiceSoapType> _di_ISBNServiceSoapType;

_di_ISBNServiceSoapType GetISBNServiceSoapType(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_isbnservice

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_isbnservice;
#endif



#endif // isbnserviceH
