// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_DrilledHole_HeaderFile
#define _IGESAppli_DrilledHole_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_DrilledHole.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>


//! defines DrilledHole, Type <406> Form <6>
//! in package IGESAppli
//! Identifies an entity representing a drilled hole
//! through a printed circuit board.
class IGESAppli_DrilledHole : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_DrilledHole();
  
  //! This method is used to set the fields of the class
  //! DrilledHole
  //! - nbPropVal    : Number of property values = 5
  //! - aSize        : Drill diameter size
  //! - anotherSize  : Finish diameter size
  //! - aPlating     : Plating indication flag
  //! False = not plating
  //! True  = is plating
  //! - aLayer       : Lower numbered layer
  //! - anotherLayer : Higher numbered layer
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Standard_Real aSize, const Standard_Real anotherSize, const Standard_Integer aPlating, const Standard_Integer aLayer, const Standard_Integer anotherLayer) ;
  
  //! is always 5
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns the drill diameter size
  Standard_EXPORT   Standard_Real DrillDiaSize()  const;
  
  //! returns the finish diameter size
  Standard_EXPORT   Standard_Real FinishDiaSize()  const;
  
  //! Returns Plating Status :
  //! False = not plating  /  True  = is plating
  Standard_EXPORT   Standard_Boolean IsPlating()  const;
  
  //! returns the lower numbered layer
  Standard_EXPORT   Standard_Integer NbLowerLayer()  const;
  
  //! returns the higher numbered layer
  Standard_EXPORT   Standard_Integer NbHigherLayer()  const;




  DEFINE_STANDARD_RTTI(IGESAppli_DrilledHole)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Real theDrillDiaSize;
  Standard_Real theFinishDiaSize;
  Standard_Integer thePlatingFlag;
  Standard_Integer theNbLowerLayer;
  Standard_Integer theNbHigherLayer;


};







#endif // _IGESAppli_DrilledHole_HeaderFile
