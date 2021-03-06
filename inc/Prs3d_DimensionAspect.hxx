// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_DimensionAspect_HeaderFile
#define _Prs3d_DimensionAspect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Prs3d_DimensionAspect.hxx>

#include <Handle_Prs3d_LineAspect.hxx>
#include <Handle_Prs3d_TextAspect.hxx>
#include <Handle_Prs3d_ArrowAspect.hxx>
#include <Standard_Boolean.hxx>
#include <Prs3d_DimensionArrowOrientation.hxx>
#include <Prs3d_DimensionTextHorizontalPosition.hxx>
#include <Prs3d_DimensionTextVerticalPosition.hxx>
#include <Standard_Real.hxx>
#include <TCollection_AsciiString.hxx>
#include <Prs3d_BasicAspect.hxx>
class Prs3d_LineAspect;
class Prs3d_TextAspect;
class Prs3d_ArrowAspect;
class Quantity_Color;
class TCollection_AsciiString;


//! defines the attributes when drawing a Length Presentation.
class Prs3d_DimensionAspect : public Prs3d_BasicAspect
{

public:

  
  //! Constructs an empty framework to define the display of dimensions.
  Standard_EXPORT Prs3d_DimensionAspect();
  
  //! Returns the settings for the display of lines used in presentation of dimensions.
  Standard_EXPORT   Handle(Prs3d_LineAspect) LineAspect()  const;
  
  //! Sets the display attributes of lines used in presentation of dimensions.
  Standard_EXPORT   void SetLineAspect (const Handle(Prs3d_LineAspect)& theAspect) ;
  
  //! Returns the settings for the display of text used in presentation of dimensions.
  Standard_EXPORT   Handle(Prs3d_TextAspect) TextAspect()  const;
  
  //! Sets the display attributes of text used in presentation of dimensions.
  Standard_EXPORT   void SetTextAspect (const Handle(Prs3d_TextAspect)& theAspect) ;
  
  //! Check if text for dimension label is 3d.
  Standard_EXPORT   Standard_Boolean IsText3d()  const;
  
  //! Sets type of text.
  Standard_EXPORT   void MakeText3d (const Standard_Boolean isText3d) ;
  
  //! Check if 3d text for dimension label is shaded.
  Standard_EXPORT   Standard_Boolean IsTextShaded()  const;
  
  //! Turns on/off text shading for 3d text.
  Standard_EXPORT   void MakeTextShaded (const Standard_Boolean isTextShaded) ;
  
  //! Gets type of arrows.
  Standard_EXPORT   Standard_Boolean IsArrows3d()  const;
  
  //! Sets type of arrows.
  Standard_EXPORT   void MakeArrows3d (const Standard_Boolean isArrows3d) ;
  
  //! Shows if Units are to be displayed along with dimension value.
  Standard_EXPORT   Standard_Boolean IsUnitsDisplayed()  const;
  
  //! Specifies whether the units string should be displayed
  //! along with value label or not.
  Standard_EXPORT   void MakeUnitsDisplayed (const Standard_Boolean theIsDisplayed) ;
  
  //! Sets orientation of arrows (external or internal).
  //! By default orientation is chosen automatically according to situation and text label size.
  Standard_EXPORT   void SetArrowOrientation (const Prs3d_DimensionArrowOrientation theArrowOrient) ;
  
  //! Gets orientation of arrows (external or internal).
  Standard_EXPORT   Prs3d_DimensionArrowOrientation ArrowOrientation()  const;
  
  //! Sets vertical text alignment for text label.
  Standard_EXPORT   void SetTextVerticalPosition (const Prs3d_DimensionTextVerticalPosition thePosition) ;
  
  //! Gets vertical text alignment for text label.
  Standard_EXPORT   Prs3d_DimensionTextVerticalPosition TextVerticalPosition()  const;
  
  //! Sets horizontal text alignment for text label.
  Standard_EXPORT   void SetTextHorizontalPosition (const Prs3d_DimensionTextHorizontalPosition thePosition) ;
  
  //! Gets horizontal text alignment for text label.
  Standard_EXPORT   Prs3d_DimensionTextHorizontalPosition TextHorizontalPosition()  const;
  
  //! Returns the settings for displaying arrows.
  Standard_EXPORT   Handle(Prs3d_ArrowAspect) ArrowAspect()  const;
  
  //! Sets the display attributes of arrows used in presentation of dimensions.
  Standard_EXPORT   void SetArrowAspect (const Handle(Prs3d_ArrowAspect)& theAspect) ;
  
  //! Sets the same color for all parts of dimension: lines, arrows and text.
  Standard_EXPORT   void SetCommonColor (const Quantity_Color& theColor) ;
  
  //! Sets extension size.
  Standard_EXPORT   void SetExtensionSize (const Standard_Real theSize) ;
  
  //! Returns extension size.
  Standard_EXPORT   Standard_Real ExtensionSize()  const;
  
  //! Set size for arrow tail (extension without text).
  Standard_EXPORT   void SetArrowTailSize (const Standard_Real theSize) ;
  
  //! Returns arrow tail size.
  Standard_EXPORT   Standard_Real ArrowTailSize()  const;
  
  //! Sets "sprintf"-syntax format for formatting dimension value labels.
  Standard_EXPORT   void SetValueStringFormat (const TCollection_AsciiString& theFormat) ;
  
  //! Returns format.
  Standard_EXPORT   TCollection_AsciiString ValueStringFormat()  const;




  DEFINE_STANDARD_RTTI(Prs3d_DimensionAspect)

protected:




private: 


  Handle(Prs3d_LineAspect) myLineAspect;
  Handle(Prs3d_TextAspect) myTextAspect;
  Handle(Prs3d_ArrowAspect) myArrowAspect;
  Standard_Boolean myIsText3d;
  Standard_Boolean myIsTextShaded;
  Standard_Boolean myIsArrows3d;
  Prs3d_DimensionArrowOrientation myArrowOrientation;
  Prs3d_DimensionTextHorizontalPosition myTextHPosition;
  Prs3d_DimensionTextVerticalPosition myTextVPosition;
  Standard_Real myExtensionSize;
  Standard_Real myArrowTailSize;
  TCollection_AsciiString myValueStringFormat;
  Standard_Boolean myToDisplayUnits;


};







#endif // _Prs3d_DimensionAspect_HeaderFile
