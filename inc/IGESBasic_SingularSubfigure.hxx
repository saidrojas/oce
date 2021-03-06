// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_SingularSubfigure_HeaderFile
#define _IGESBasic_SingularSubfigure_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESBasic_SingularSubfigure.hxx>

#include <Handle_IGESBasic_SubfigureDef.hxx>
#include <gp_XYZ.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <IGESData_IGESEntity.hxx>
class IGESBasic_SubfigureDef;
class gp_XYZ;


//! defines SingularSubfigure, Type <408> Form <0>
//! in package IGESBasic
//! Defines the occurrence of a single instance of the
//! defined Subfigure.
class IGESBasic_SingularSubfigure : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESBasic_SingularSubfigure();
  
  //! This method is used to set the fields of the class
  //! SingularSubfigure
  //! - aSubfigureDef : the Subfigure Definition entity
  //! - aTranslation  : used to store the X,Y,Z coord
  //! - hasScale      : Indicates the presence of scale factor
  //! - aScale        : Used to store the scale factor
  Standard_EXPORT   void Init (const Handle(IGESBasic_SubfigureDef)& aSubfigureDef, const gp_XYZ& aTranslation, const Standard_Boolean hasScale, const Standard_Real aScale) ;
  
  //! returns the subfigure definition entity
  Standard_EXPORT   Handle(IGESBasic_SubfigureDef) Subfigure()  const;
  
  //! returns the X, Y, Z coordinates
  Standard_EXPORT   gp_XYZ Translation()  const;
  
  //! returns the scale factor
  //! if hasScaleFactor is False, returns 1.0 (default)
  Standard_EXPORT   Standard_Real ScaleFactor()  const;
  
  //! returns a boolean indicating whether scale factor
  //! is present or not
  Standard_EXPORT   Standard_Boolean HasScaleFactor()  const;
  
  //! returns the Translation after transformation
  Standard_EXPORT   gp_XYZ TransformedTranslation()  const;




  DEFINE_STANDARD_RTTI(IGESBasic_SingularSubfigure)

protected:




private: 


  Handle(IGESBasic_SubfigureDef) theSubfigureDef;
  gp_XYZ theTranslation;
  Standard_Real theScaleFactor;
  Standard_Boolean hasScaleFactor;


};







#endif // _IGESBasic_SingularSubfigure_HeaderFile
