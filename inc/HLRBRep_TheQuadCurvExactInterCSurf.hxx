// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_TheQuadCurvExactInterCSurf_HeaderFile
#define _HLRBRep_TheQuadCurvExactInterCSurf_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <TColStd_SequenceOfReal.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
class HLRBRep_SurfaceTool;
class gp_Lin;
class HLRBRep_LineTool;
class HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf;



class HLRBRep_TheQuadCurvExactInterCSurf 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_TheQuadCurvExactInterCSurf(const Standard_Address& S, const gp_Lin& C);
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Integer NbRoots()  const;
  
  Standard_EXPORT   Standard_Real Root (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Integer NbIntervals()  const;
  
  Standard_EXPORT   void Intervals (const Standard_Integer Index, Standard_Real& U1, Standard_Real& U2)  const;




protected:





private:



  Standard_Integer nbpnts;
  TColStd_SequenceOfReal pnts;
  Standard_Integer nbintv;
  TColStd_SequenceOfReal intv;


};







#endif // _HLRBRep_TheQuadCurvExactInterCSurf_HeaderFile
