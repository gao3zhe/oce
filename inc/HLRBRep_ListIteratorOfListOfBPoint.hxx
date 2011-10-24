// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_ListIteratorOfListOfBPoint_HeaderFile
#define _HLRBRep_ListIteratorOfListOfBPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_HLRBRep_ListNodeOfListOfBPoint_HeaderFile
#include <Handle_HLRBRep_ListNodeOfListOfBPoint.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class HLRBRep_ListOfBPoint;
class HLRBRep_BiPoint;
class HLRBRep_ListNodeOfListOfBPoint;



class HLRBRep_ListIteratorOfListOfBPoint  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   HLRBRep_ListIteratorOfListOfBPoint();
  
  Standard_EXPORT   HLRBRep_ListIteratorOfListOfBPoint(const HLRBRep_ListOfBPoint& L);
  
  Standard_EXPORT     void Initialize(const HLRBRep_ListOfBPoint& L) ;
  
        Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     HLRBRep_BiPoint& Value() const;


friend class HLRBRep_ListOfBPoint;



protected:





private:



Standard_Address current;
Standard_Address previous;


};

#define Item HLRBRep_BiPoint
#define Item_hxx <HLRBRep_BiPoint.hxx>
#define TCollection_ListNode HLRBRep_ListNodeOfListOfBPoint
#define TCollection_ListNode_hxx <HLRBRep_ListNodeOfListOfBPoint.hxx>
#define TCollection_ListIterator HLRBRep_ListIteratorOfListOfBPoint
#define TCollection_ListIterator_hxx <HLRBRep_ListIteratorOfListOfBPoint.hxx>
#define Handle_TCollection_ListNode Handle_HLRBRep_ListNodeOfListOfBPoint
#define TCollection_ListNode_Type_() HLRBRep_ListNodeOfListOfBPoint_Type_()
#define TCollection_List HLRBRep_ListOfBPoint
#define TCollection_List_hxx <HLRBRep_ListOfBPoint.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif