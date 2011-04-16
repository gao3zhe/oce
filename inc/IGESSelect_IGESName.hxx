// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_IGESName_HeaderFile
#define _IGESSelect_IGESName_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_IGESName_HeaderFile
#include <Handle_IGESSelect_IGESName.hxx>
#endif

#ifndef _IFSelect_Signature_HeaderFile
#include <IFSelect_Signature.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
class Standard_Transient;
class Interface_InterfaceModel;


//! IGESName is a Signature specific to IGESNorm : <br>
//!           it considers the Name of an IGESEntity as being its ShortLabel <br>
//!           (some sending systems use name, not to identify entities, but <br>
//!           ratjer to classify them) <br>
class IGESSelect_IGESName : public IFSelect_Signature {

public:

  //! Creates a Signature for IGES Name (reduced to ShortLabel, <br>
//!           without SubscriptLabel or Long Name) <br>
  Standard_EXPORT   IGESSelect_IGESName();
  //! Returns the ShortLabel as being the Name of an IGESEntity <br>
//!           If <ent> has no name, it returns empty string "" <br>
  Standard_EXPORT     Standard_CString Value(const Handle(Standard_Transient)& ent,const Handle(Interface_InterfaceModel)& model) const;




  DEFINE_STANDARD_RTTI(IGESSelect_IGESName)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif