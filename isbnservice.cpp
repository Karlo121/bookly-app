// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : http://webservices.daehosting.com/services/isbnservice.wso?WSDL
//  >Import : http://webservices.daehosting.com/services/isbnservice.wso?WSDL>0
// Encoding : UTF-8
// Version  : 1.0
// (28/06/2021 22:24:36 - - $Rev: 96726 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "isbnservice.h"



namespace NS_isbnservice {

_di_ISBNServiceSoapType GetISBNServiceSoapType(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "http://webservices.daehosting.com/services/isbnservice.wso?WSDL";
  static const char* defURL = "http://webservices.daehosting.com/services/isbnservice.wso";
  static const char* defSvc = "ISBNService";
  static const char* defPrt = "ISBNServiceSoap";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  Soaphttpclient::THTTPRIO* rio = HTTPRIO ? HTTPRIO : new Soaphttpclient::THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
	rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_ISBNServiceSoapType service;
  rio->QueryInterface(service);
  if (!service && !HTTPRIO)
    delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types exposed by the WebService.
// ************************************************************************ //
static void RegTypes()
{
  /* ISBNServiceSoapType */
  InvRegistry()->RegisterInterface(__delphirtti(ISBNServiceSoapType), L"http://webservices.daehosting.com/ISBN", L"UTF-8");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(ISBNServiceSoapType), L"");
  InvRegistry()->RegisterInvokeOptions(__delphirtti(ISBNServiceSoapType), ioDocument);
  /* ISBNServiceSoapType.IsValidISBN13 */
  InvRegistry()->RegisterMethodInfo(__delphirtti(ISBNServiceSoapType), "IsValidISBN13", "",
                                    "[ReturnName='IsValidISBN13Result']" );
  /* ISBNServiceSoapType.IsValidISBN10 */
  InvRegistry()->RegisterMethodInfo(__delphirtti(ISBNServiceSoapType), "IsValidISBN10", "",
                                    "[ReturnName='IsValidISBN10Result']" );
}
#pragma startup RegTypes 32

};     // NS_isbnservice

