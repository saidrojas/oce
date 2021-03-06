// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_Edge_HeaderFile
#define _Aspect_Edge_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Aspect_TypeOfEdge.hxx>
class Aspect_EdgeDefinitionError;


//! This class allows the definition of an edge.
class Aspect_Edge 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an edge.
  Standard_EXPORT Aspect_Edge();
  
  //! Creates an edge from an index of vertices
  //! in a table of vertices.
  //! <AType> indicates if this edge is seen or not.
  //! Warning: Raises EdgeDefinitionError if AIndex1 == AIndex2.
  Standard_EXPORT Aspect_Edge(const Standard_Integer AIndex1, const Standard_Integer AIndex2, const Aspect_TypeOfEdge AType);
  
  //! Updates the values of an edge <me>.
  //! Warning: Raises EdgeDefinitionError if AIndex1 == AIndex2.
  Standard_EXPORT   void SetValues (const Standard_Integer AIndex1, const Standard_Integer AIndex2, const Aspect_TypeOfEdge AType) ;
  
  //! Returns the index of the vertices and the
  //! type of edge <me>.
  Standard_EXPORT   void Values (Standard_Integer& AIndex1, Standard_Integer& AIndex2, Aspect_TypeOfEdge& AType)  const;
  
  //! Returns the index of the begin of the edge <me>.
  Standard_EXPORT   Standard_Integer FirstIndex()  const;
  
  //! Returns the index of the end of the edge <me>.
  Standard_EXPORT   Standard_Integer LastIndex()  const;
  
  //! Returns the type of the edge <me>.
  Standard_EXPORT   Aspect_TypeOfEdge Type()  const;




protected:





private:



  Standard_Integer MyBegin;
  Standard_Integer MyEnd;
  Aspect_TypeOfEdge MyVisibility;


};







#endif // _Aspect_Edge_HeaderFile
