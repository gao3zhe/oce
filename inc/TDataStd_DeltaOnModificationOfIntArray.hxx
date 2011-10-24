// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DeltaOnModificationOfIntArray_HeaderFile
#define _TDataStd_DeltaOnModificationOfIntArray_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_DeltaOnModificationOfIntArray_HeaderFile
#include <Handle_TDataStd_DeltaOnModificationOfIntArray.hxx>
#endif

#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TDF_DeltaOnModification_HeaderFile
#include <TDF_DeltaOnModification.hxx>
#endif
#ifndef _Handle_TDataStd_IntegerArray_HeaderFile
#include <Handle_TDataStd_IntegerArray.hxx>
#endif
class TColStd_HArray1OfInteger;
class TDataStd_IntegerArray;


//! This class provides default services for an <br>
//!          AttributeDelta on a MODIFICATION action. <br>
class TDataStd_DeltaOnModificationOfIntArray : public TDF_DeltaOnModification {

public:

  //! Initializes a TDF_DeltaOnModification. <br>
  Standard_EXPORT   TDataStd_DeltaOnModificationOfIntArray(const Handle(TDataStd_IntegerArray)& Arr);
  //! Applies the delta to the attribute. <br>
  Standard_EXPORT   virtual  void Apply() ;




  DEFINE_STANDARD_RTTI(TDataStd_DeltaOnModificationOfIntArray)

protected:




private: 


Handle_TColStd_HArray1OfInteger myIndxes;
Handle_TColStd_HArray1OfInteger myValues;
Standard_Integer myUp1;
Standard_Integer myUp2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif