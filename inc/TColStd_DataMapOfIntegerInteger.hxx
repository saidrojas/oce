// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapOfIntegerInteger_HeaderFile
#define _TColStd_DataMapOfIntegerInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColStd_DataMapNodeOfDataMapOfIntegerInteger.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TColStd_MapIntegerHasher;
class TColStd_DataMapNodeOfDataMapOfIntegerInteger;
class TColStd_DataMapIteratorOfDataMapOfIntegerInteger;



class TColStd_DataMapOfIntegerInteger  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_DataMapOfIntegerInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TColStd_DataMapOfIntegerInteger& Assign (const TColStd_DataMapOfIntegerInteger& Other) ;
  TColStd_DataMapOfIntegerInteger& operator = (const TColStd_DataMapOfIntegerInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TColStd_DataMapOfIntegerInteger()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const Standard_Integer& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  Standard_Integer& Find (const Standard_Integer& K)  const;
 const  Standard_Integer& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Standard_Integer& ChangeFind (const Standard_Integer& K) ;
  Standard_Integer& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT TColStd_DataMapOfIntegerInteger(const TColStd_DataMapOfIntegerInteger& Other);




};







#endif // _TColStd_DataMapOfIntegerInteger_HeaderFile
