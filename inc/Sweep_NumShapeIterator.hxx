// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Sweep_NumShapeIterator_HeaderFile
#define _Sweep_NumShapeIterator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Sweep_NumShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <TopAbs_Orientation.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Sweep_NumShape;


//! This class provides iteration services required by
//! the   Swept Primitives  for   a Directing NumShape
//! Line.
class Sweep_NumShapeIterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Sweep_NumShapeIterator();
  
  //! Resest the NumShapeIterator on sub-shapes of <aShape>.
  Standard_EXPORT   void Init (const Sweep_NumShape& aShape) ;
  
  //! Returns True if there is a current sub-shape.
      Standard_Boolean More()  const;
  
  //! Moves to the next sub-shape.
  Standard_EXPORT   void Next() ;
  
  //! Returns the current sub-shape.
     const  Sweep_NumShape& Value()  const;
  
  //! Returns the orientation of the current sub-shape.
      TopAbs_Orientation Orientation()  const;




protected:





private:



  Sweep_NumShape myNumShape;
  Sweep_NumShape myCurrentNumShape;
  Standard_Integer myCurrentRange;
  Standard_Boolean myMore;
  TopAbs_Orientation myCurrentOrientation;


};


#include <Sweep_NumShapeIterator.lxx>





#endif // _Sweep_NumShapeIterator_HeaderFile
