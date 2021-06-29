// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : C:\Users\Comp\Desktop\Faks\Napredne Tehnike Programiranja\bookly-app\ImyWebServiceWSDL.xml
// Version  : 1.0
// (29/06/2021 22:55:10 - - $Rev: 96726 $)
// ************************************************************************ //

#ifndef   ImyWebServiceWSDLH
#define   ImyWebServiceWSDLH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <Soap.SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif

namespace NS_ImyWebServiceWSDL {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:int             - "http://www.w3.org/2001/XMLSchema"[]


// ************************************************************************ //
// Namespace : urn:myWebService-ImyWebService
// soapAction: urn:myWebService-ImyWebService#ageCalc
// transport : http://schemas.xmlsoap.org/soap/http
// style     : rpc
// use       : encoded
// binding   : ImyWebServicebinding
// service   : ImyWebServiceservice
// port      : ImyWebServicePort
// URL       : http://localhost:8080/soap/ImyWebService
// ************************************************************************ //
__interface INTERFACE_UUID("{60E2DD4E-059E-3DCC-FCD5-DFCE478558FC}") ImyWebService : public IInvokable
{
public:
  virtual int             ageCalc(const int birthyear) = 0; 
};
typedef DelphiInterface<ImyWebService> _di_ImyWebService;

_di_ImyWebService GetImyWebService(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_ImyWebServiceWSDL

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_ImyWebServiceWSDL;
#endif



#endif // ImyWebServiceWSDLH
