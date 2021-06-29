// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : C:\Users\Comp\Desktop\Faks\Napredne Tehnike Programiranja\bookly-app\ImyWebServiceWSDL.xml
// Version  : 1.0
// (29/06/2021 22:55:10 - - $Rev: 96726 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "ImyWebServiceWSDL.h"



namespace NS_ImyWebServiceWSDL {

_di_ImyWebService GetImyWebService(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "C:\\Users\\Comp\\Desktop\\Faks\\Napredne Tehnike Programiranja\\bookly-app\\ImyWebServiceWSDL.xml";
  static const char* defURL = "http://localhost:8080/soap/ImyWebService";
  static const char* defSvc = "ImyWebServiceservice";
  static const char* defPrt = "ImyWebServicePort";
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
  _di_ImyWebService service;
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
  /* ImyWebService */
  InvRegistry()->RegisterInterface(__delphirtti(ImyWebService), L"urn:myWebService-ImyWebService", L"");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(ImyWebService), L"urn:myWebService-ImyWebService#ageCalc");
  /* ImyWebService->ageCalc */
  InvRegistry()->RegisterParamInfo(__delphirtti(ImyWebService), "ageCalc", "return_", L"return", L"");
}
#pragma startup RegTypes 32

};     // NS_ImyWebServiceWSDL

