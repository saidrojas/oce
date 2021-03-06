// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs3d_Drawer_HeaderFile
#define _Prs3d_Drawer_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Prs3d_Drawer.hxx>

#include <Handle_Prs3d_IsoAspect.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Prs3d_LineAspect.hxx>
#include <Handle_Prs3d_TextAspect.hxx>
#include <Handle_Prs3d_ShadingAspect.hxx>
#include <Quantity_Length.hxx>
#include <Aspect_TypeOfDeflection.hxx>
#include <Standard_Real.hxx>
#include <Handle_Prs3d_PointAspect.hxx>
#include <Prs3d_VertexDrawMode.hxx>
#include <Handle_Prs3d_PlaneAspect.hxx>
#include <Handle_Prs3d_ArrowAspect.hxx>
#include <Handle_Prs3d_DatumAspect.hxx>
#include <Handle_Prs3d_DimensionAspect.hxx>
#include <Prs3d_DimensionUnits.hxx>
#include <Prs3d_TypeOfHLR.hxx>
#include <MMgt_TShared.hxx>
class Prs3d_IsoAspect;
class Prs3d_LineAspect;
class Prs3d_TextAspect;
class Prs3d_ShadingAspect;
class Prs3d_PointAspect;
class Prs3d_PlaneAspect;
class Prs3d_ArrowAspect;
class Prs3d_DatumAspect;
class Prs3d_DimensionAspect;
class TCollection_AsciiString;


//! A graphic attribute manager which governs how
//! objects such as color, width, line thickness and
//! deflection are displayed.
//! Prs3d_Drawer is the mother class of AIS_Drawer.
//! As such, it is its set functions which are called to
//! modify display parameters. In the example below we
//! can see that the AIS_Drawer is modified to set the
//! value of the deviation coefficient using a method
//! inherited from Prs3d_Drawer.
//! A drawer includes an instance of the Aspect classes
//! with particular default values.
class Prs3d_Drawer : public MMgt_TShared
{

public:

  
  Standard_EXPORT Prs3d_Drawer();
  
  //! Sets the type of chordal deflection.
  //! This indicates whether the deflection value is absolute
  //! or relative to the size of the object.
  Standard_EXPORT virtual   void SetTypeOfDeflection (const Aspect_TypeOfDeflection aTypeOfDeflection) ;
  
  //! Returns the type of chordal deflection.
  //! This indicates whether the deflection value is absolute
  //! or relative to the size of the object.
  Standard_EXPORT virtual   Aspect_TypeOfDeflection TypeOfDeflection()  const;
  
  //! Defines the maximal chordial deviation when drawing any curve;
  //! Even if the type of deviation is set to TOD_Relative,
  //! this value is used by:
  //!
  //! Prs3d_DeflectionCurve
  //! Prs3d_WFDeflectionSurface
  //! Prs3d_WFDeflectionRestrictedFace
  Standard_EXPORT virtual   void SetMaximalChordialDeviation (const Quantity_Length aChordialDeviation) ;
  
  //! returns the maximal chordial deviation. Default value is 0.1
  Standard_EXPORT virtual   Quantity_Length MaximalChordialDeviation()  const;
  
  //! Sets the deviation coefficient aCoefficient.
  Standard_EXPORT virtual   void SetDeviationCoefficient (const Standard_Real aCoefficient) ;
  
  //! Returns the deviation coefficient.
  Standard_EXPORT virtual   Standard_Real DeviationCoefficient()  const;
  
  //! Sets the deviation coefficient aCoefficient for removal
  //! of hidden lines created by different viewpoints in
  //! different presentations. The Default value is 0.02.
  Standard_EXPORT virtual   void SetHLRDeviationCoefficient (const Standard_Real aCoefficient) ;
  
  //! Returns the real number value of the hidden line
  //! removal deviation coefficient.
  Standard_EXPORT virtual   Standard_Real HLRDeviationCoefficient()  const;
  
  //! Sets anAngle, the angle of maximum chordal
  //! deviation for removal of hidden lines created by
  //! different viewpoints in different presentations. The
  //! default value is 20*PI/180.
  Standard_EXPORT virtual   void SetHLRAngle (const Standard_Real anAngle) ;
  
  //! Returns the real number value of the deviation angle
  //! in hidden line removal views. The default value is 20*PI/180.
  Standard_EXPORT virtual   Standard_Real HLRAngle()  const;
  
  //! Sets deviation angle
  Standard_EXPORT virtual   void SetDeviationAngle (const Standard_Real anAngle) ;
  
  //! Returns the value for deviation angle.
  Standard_EXPORT virtual   Standard_Real DeviationAngle()  const;
  
  //! Sets the discretisation parameter d.
  Standard_EXPORT virtual   void SetDiscretisation (const Standard_Integer d) ;
  
  //! Returns the discretisation setting.
  Standard_EXPORT virtual   Standard_Integer Discretisation()  const;
  
  //! defines the maximum value allowed  for the first and last
  //! parameters of an infinite curve. Default value: 500.
  Standard_EXPORT virtual   void SetMaximalParameterValue (const Standard_Real Value) ;
  
  //! Sets the maximum value allowed for the first and last
  //! parameters of an infinite curve. By default, this value is 500000.
  Standard_EXPORT virtual   Standard_Real MaximalParameterValue()  const;
  
  //! Sets IsoOnPlane on or off   by setting the parameter
  //! OnOff to true or false.
  Standard_EXPORT virtual   void SetIsoOnPlane (const Standard_Boolean OnOff) ;
  
  //! Returns True if the drawing of isos on planes is enabled.
  Standard_EXPORT virtual   Standard_Boolean IsoOnPlane()  const;
  
  //! Sets the type of HLR algorithm
  //! used by drawer's interactive objects
  Standard_EXPORT virtual   void SetTypeOfHLR (const Prs3d_TypeOfHLR theTypeOfHLR) ;
  
  //! Gets the myTypeOfHLR value
  Standard_EXPORT virtual   Prs3d_TypeOfHLR TypeOfHLR()  const;
  
  //! Defines the attributes which are used when drawing an
  //! U isoparametric curve of a face. Defines the number
  //! of U isoparametric curves to be drawn for a single face.
  //! The LineAspect for U isoparametric lines can be edited
  //! (methods SetColor, SetTypeOfLine, SetWidth, SetNumber)
  //! The default values are:
  //! COLOR       : Quantity_NOC_GRAY75
  //! TYPE OF LINE: Aspect_TOL_SOLID
  //! WIDTH       : 0.5
  //!
  //! These attributes are used by the following algorithms:
  //! Prs3d_WFDeflectionSurface
  //! Prs3d_WFDeflectionRestrictedFace
  Standard_EXPORT virtual   Handle(Prs3d_IsoAspect) UIsoAspect() ;
  
  Standard_EXPORT virtual   void SetUIsoAspect (const Handle(Prs3d_IsoAspect)& anAspect) ;
  
  //! Defines the attributes which are used when drawing an
  //! V isoparametric curve of a face. Defines the number
  //! of V isoparametric curves to be drawn for a single face.
  //! The LineAspect for V isoparametric lines can be edited
  //! (methods SetColor, SetTypeOfLine, SetWidth, SetNumber)
  //! The default values are:
  //! COLOR       : Quantity_NOC_GRAY82
  //! TYPE OF LINE: Aspect_TOL_SOLID
  //! WIDTH       : 0.5
  //!
  //! These attributes are used by the following algorithms:
  //! Prs3d_WFDeflectionSurface
  //! Prs3d_WFDeflectionRestrictedFace
  Standard_EXPORT virtual   Handle(Prs3d_IsoAspect) VIsoAspect() ;
  
  //! Sets the appearance of V isoparameters - anAspect.
  Standard_EXPORT virtual   void SetVIsoAspect (const Handle(Prs3d_IsoAspect)& anAspect) ;
  
  //! Stores the values for presentation of free boundaries,
  //! in other words, boundaries which are not shared.
  //! The LineAspect for the  free boundaries can be edited.
  //! The default values are:
  //! Color: Quantity_NOC_GREEN
  //! Type of line: Aspect_TOL_SOLID
  //! Width: 1.
  //! These attributes are used by the algorithm Prs3d_WFShape
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) FreeBoundaryAspect() ;
  
  //! Sets the parameter anAspect for the display of free boundaries.
  Standard_EXPORT virtual   void SetFreeBoundaryAspect (const Handle(Prs3d_LineAspect)& anAspect) ;
  
  //! Sets free boundary drawing on or off by setting the
  //! parameter OnOff to true or false.
  Standard_EXPORT virtual   void SetFreeBoundaryDraw (const Standard_Boolean OnOff) ;
  
  //! Returns True if the drawing of the shared boundaries
  //! is disabled. True is the default setting.
  Standard_EXPORT virtual   Standard_Boolean FreeBoundaryDraw()  const;
  
  //! Returns wire aspect settings.
  //! The LineAspect for the wire can be edited.
  //! The default values are:
  //! Color: Quantity_NOC_RED
  //! Type of line: Aspect_TOL_SOLID
  //! Width: 1.
  //! These attributes are used by the algorithm Prs3d_WFShape
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) WireAspect() ;
  
  //! Sets the parameter anAspect for display of wires.
  Standard_EXPORT virtual   void SetWireAspect (const Handle(Prs3d_LineAspect)& anAspect) ;
  
  //! Sets WireDraw on or off   by setting the parameter
  //! OnOff to true or false.
  Standard_EXPORT virtual   void SetWireDraw (const Standard_Boolean OnOff) ;
  
  //! returns True if the drawing of the wire is enabled.
  Standard_EXPORT virtual   Standard_Boolean WireDraw()  const;
  
  //! Returns settings for shared boundary line aspects.
  //! The LineAspect for the unfree boundaries can be edited.
  //! The default values are:
  //! Color: Quantity_NOC_YELLOW
  //! Type of line: Aspect_TOL_SOLID
  //! Width: 1.
  //! These attributes are used by the algorithm Prs3d_WFShape
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) UnFreeBoundaryAspect() ;
  
  //! Sets the parameter anAspect for the display of shared boundaries.
  Standard_EXPORT virtual   void SetUnFreeBoundaryAspect (const Handle(Prs3d_LineAspect)& anAspect) ;
  
  //! Sets FreeBoundaryDraw on or off by setting the
  //! parameter OnOff to true or false.
  //! By default the unfree boundaries  are drawn.
  Standard_EXPORT virtual   void SetUnFreeBoundaryDraw (const Standard_Boolean OnOff) ;
  
  //! Returns True if the drawing of the shared boundaries is enabled.
  //! True is the default setting.
  Standard_EXPORT virtual   Standard_Boolean UnFreeBoundaryDraw()  const;
  
  //! Returns settings for line aspects.
  //! These settings can be edited. The default values are:
  //! Color: Quantity_NOC_YELLOW
  //! Type of line: Aspect_TOL_SOLID
  //! Width: 1.
  //! These attributes are used by the following algorithms:
  //! Prs3d_Curve
  //! Prs3d_Line
  //! Prs3d_HLRShape
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) LineAspect() ;
  
  //! Sets the parameter anAspect for display attributes of lines.
  Standard_EXPORT virtual   void SetLineAspect (const Handle(Prs3d_LineAspect)& anAspect) ;
  
  //! Returns settings for text aspect.
  //! These settings can be edited. The default value is:
  //! -   Color: Quantity_NOC_YELLOW
  Standard_EXPORT virtual   Handle(Prs3d_TextAspect) TextAspect() ;
  
  //! Sets the parameter anAspect for display attributes of text.
  Standard_EXPORT virtual   void SetTextAspect (const Handle(Prs3d_TextAspect)& anAspect) ;
  
  //! enables the drawing of an arrow at the end of each line.
  //! By default the arrows are not drawn.
  Standard_EXPORT virtual   void SetLineArrowDraw (const Standard_Boolean OnOff) ;
  
  //! Returns True if drawing an arrow at the end of each edge is enabled
  //! and False otherwise (the default).
  Standard_EXPORT virtual   Standard_Boolean LineArrowDraw()  const;
  
  //! Returns the attributes for display of arrows.
  Standard_EXPORT virtual   Handle(Prs3d_ArrowAspect) ArrowAspect() ;
  
  //! Sets the parameter anAspect for display attributes of arrows.
  Standard_EXPORT virtual   void SetArrowAspect (const Handle(Prs3d_ArrowAspect)& anAspect) ;
  
  //! Returns the point aspect setting. The default values are
  //! Color: Quantity_NOC_YELLOW
  //! Type of marker: Aspect_TOM_PLUS
  //! Scale: 1.
  //! These attributes are used by the algorithms Prs3d_Point.
  Standard_EXPORT virtual   Handle(Prs3d_PointAspect) PointAspect() ;
  
  //! Sets the parameter anAspect for display attributes of points
  Standard_EXPORT virtual   void SetPointAspect (const Handle(Prs3d_PointAspect)& anAspect) ;
  
  //! Sets the mode of visualization of vertices of a TopoDS_Shape instance.
  //! By default, only stand-alone vertices (not belonging topologically to an edge) are drawn,
  //! that corresponds to <b>Prs3d_VDM_Standalone</b> mode.
  //! Switching to <b>Prs3d_VDM_Standalone</b> mode makes all shape's vertices visible.
  //! To inherit this parameter from the global drawer instance ("the link") when it is present,
  //! <b>Prs3d_VDM_Inherited</b> value should be used.
  Standard_EXPORT virtual   void SetVertexDrawMode (const Prs3d_VertexDrawMode theMode) ;
  
  //! Returns the current mode of visualization of vertices of a TopoDS_Shape instance.
  Standard_EXPORT virtual   Prs3d_VertexDrawMode VertexDrawMode()  const;
  
  //! Returns settings for shading aspects.
  //! These settings can be edited. The default values are:
  //! -   Color: Quantity_NOC_YELLOW
  //! -   Material: Graphic3d_NOM_BRASS
  //! Shading aspect is obtained through decomposition of
  //! 3d faces into triangles, each side of each triangle
  //! being a chord of the corresponding curved edge in
  //! the face. Reflection of light in each projector
  //! perspective is then calculated for each of the
  //! resultant triangular planes.
  Standard_EXPORT virtual   Handle(Prs3d_ShadingAspect) ShadingAspect() ;
  
  //! Sets the parameter anAspect for display attributes of shading.
  Standard_EXPORT virtual   void SetShadingAspect (const Handle(Prs3d_ShadingAspect)& anAspect) ;
  
  //! indicates that the ShadingAspect will be apply
  //! to the whole presentation. This allows to modify
  //! the aspect without recomputing the content of the presentation.
  Standard_EXPORT virtual   void SetShadingAspectGlobal (const Standard_Boolean aValue) ;
  
  Standard_EXPORT virtual   Standard_Boolean ShadingAspectGlobal()  const;
  
  //! returns Standard_True if the hidden lines are to be drawn.
  //! By default the hidden lines are not drawn.
  Standard_EXPORT virtual   Standard_Boolean DrawHiddenLine()  const;
  
  //! Enables the DrawHiddenLine function.
  Standard_EXPORT virtual   void EnableDrawHiddenLine() ;
  
  //! Disables the DrawHiddenLine function.
  Standard_EXPORT virtual   void DisableDrawHiddenLine() ;
  
  //! Returns settings for hidden line aspects.
  //! These settings can be edited. The default values are:
  //! Color: Quantity_NOC_YELLOW
  //! Type of line: Aspect_TOL_DASH
  //! Width: 1.
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) HiddenLineAspect() ;
  
  //! Sets the parameter anAspect for the display of
  //! hidden lines in hidden line removal mode.
  Standard_EXPORT virtual   void SetHiddenLineAspect (const Handle(Prs3d_LineAspect)& anAspect) ;
  
  //! Returns settings for seen line aspects.
  //! These settings can be edited. The default values are:
  //! Color: Quantity_NOC_YELLOW
  //! Type of line: Aspect_TOL_SOLID
  //! Width: 1.
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) SeenLineAspect() ;
  
  //! Sets the parameter anAspect for the display of seen
  //! lines in hidden line removal mode.
  Standard_EXPORT virtual   void SetSeenLineAspect (const Handle(Prs3d_LineAspect)& anAspect) ;
  
  //! Returns settings for the appearance of planes.
  Standard_EXPORT virtual   Handle(Prs3d_PlaneAspect) PlaneAspect() ;
  
  //! Sets the parameter anAspect for the display of planes.
  Standard_EXPORT virtual   void SetPlaneAspect (const Handle(Prs3d_PlaneAspect)& anAspect) ;
  
  //! Returns settings for the appearance of vectors.
  //! These settings can be edited. The default values are:
  //! Color: Quantity_NOC_SKYBLUE
  //! Type of line: Aspect_TOL_SOLID
  //! Width: 1.
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) VectorAspect() ;
  
  //! Sets the modality anAspect for the display of vectors.
  Standard_EXPORT virtual   void SetVectorAspect (const Handle(Prs3d_LineAspect)& anAspect) ;
  
  //! Returns settings for the appearance of datums.
  //! These settings can be edited. The default values for
  //! the three axes are:
  //! Color: Quantity_NOC_PEACHPUFF
  //! Type of line: Aspect_TOL_SOLID
  //! Width: 1.
  Standard_EXPORT virtual   Handle(Prs3d_DatumAspect) DatumAspect() ;
  
  //! Sets the modality anAspect for the display of datums.
  Standard_EXPORT virtual   void SetDatumAspect (const Handle(Prs3d_DatumAspect)& anAspect) ;
  
  //! Returns settings for the appearance of dimensions.
  Standard_EXPORT virtual   Handle(Prs3d_DimensionAspect) DimensionAspect() ;
  
  //! Sets the settings for the appearance of dimensions.
  Standard_EXPORT virtual   void SetDimensionAspect (const Handle(Prs3d_DimensionAspect)& theAspect) ;
  
  //! Sets dimension length model units for computing of dimension presentation.
  Standard_EXPORT virtual   void SetDimLengthModelUnits (const TCollection_AsciiString& theUnits) ;
  
  //! Sets dimension angle model units for computing of dimension presentation.
  Standard_EXPORT virtual   void SetDimAngleModelUnits (const TCollection_AsciiString& theUnits) ;
  
  //! Returns length model units for the dimension presentation.
  Standard_EXPORT virtual  const  TCollection_AsciiString& DimLengthModelUnits()  const;
  
  //! Returns angle model units for the dimension presentation.
  Standard_EXPORT virtual  const  TCollection_AsciiString& DimAngleModelUnits()  const;
  
  //! Sets length units in which value for dimension presentation is displayed.
  Standard_EXPORT virtual   void SetDimLengthDisplayUnits (const TCollection_AsciiString& theUnits) ;
  
  //! Sets angle units in which value for dimension presentation is displayed.
  Standard_EXPORT virtual   void SetDimAngleDisplayUnits (const TCollection_AsciiString& theUnits) ;
  
  //! Returns length units in which dimension presentation is displayed.
  Standard_EXPORT virtual  const  TCollection_AsciiString& DimLengthDisplayUnits()  const;
  
  //! Returns angle units in which dimension presentation is displayed.
  Standard_EXPORT virtual  const  TCollection_AsciiString& DimAngleDisplayUnits()  const;
  
  //! The LineAspect for the wire can be edited.
  //! The default values are:
  //! Color: Quantity_NOC_ORANGE
  //! Type of line: Aspect_TOL_SOLID
  //! Width: 1.
  //! These attributes are used by the algorithm Prs3d_WFShape.
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) SectionAspect() ;
  
  //! Sets the parameter theAspect for display attributes of sections.
  Standard_EXPORT virtual   void SetSectionAspect (const Handle(Prs3d_LineAspect)& theAspect) ;
  
  //! Enables or disables face boundary drawing for shading presentations.
  //! theIsEnabled is a boolean flag indicating whether the face boundaries should be
  //! drawn or not.
  Standard_EXPORT virtual   void SetFaceBoundaryDraw (const Standard_Boolean theIsEnabled) ;
  
  //! Checks whether the face boundary drawing is enabled or not.
  Standard_EXPORT virtual   Standard_Boolean IsFaceBoundaryDraw()  const;
  
  //! Sets line aspect for face boundaries.
  //! theAspect is the line aspect that determines the look of the face boundaries.
  Standard_EXPORT virtual   void SetFaceBoundaryAspect (const Handle(Prs3d_LineAspect)& theAspect) ;
  
  //! Returns line aspect of face boundaries.
  Standard_EXPORT virtual   Handle(Prs3d_LineAspect) FaceBoundaryAspect() ;




  DEFINE_STANDARD_RTTI(Prs3d_Drawer)

protected:


  Handle(Prs3d_IsoAspect) myUIsoAspect;
  Handle(Prs3d_IsoAspect) myVIsoAspect;
  Standard_Integer myNbPoints;
  Standard_Boolean myIsoOnPlane;
  Handle(Prs3d_LineAspect) myFreeBoundaryAspect;
  Standard_Boolean myFreeBoundaryDraw;
  Handle(Prs3d_LineAspect) myUnFreeBoundaryAspect;
  Standard_Boolean myUnFreeBoundaryDraw;
  Handle(Prs3d_LineAspect) myWireAspect;
  Standard_Boolean myWireDraw;
  Handle(Prs3d_LineAspect) myLineAspect;
  Handle(Prs3d_TextAspect) myTextAspect;
  Handle(Prs3d_ShadingAspect) myShadingAspect;
  Standard_Boolean myShadingAspectGlobal;
  Quantity_Length myChordialDeviation;
  Aspect_TypeOfDeflection myTypeOfDeflection;
  Standard_Real myMaximalParameterValue;
  Standard_Real myDeviationCoefficient;
  Standard_Real myHLRDeviationCoefficient;
  Standard_Real myDeviationAngle;
  Standard_Real myHLRAngle;
  Handle(Prs3d_PointAspect) myPointAspect;
  Prs3d_VertexDrawMode myVertexDrawMode;
  Handle(Prs3d_PlaneAspect) myPlaneAspect;
  Handle(Prs3d_ArrowAspect) myArrowAspect;
  Standard_Boolean myLineDrawArrow;
  Standard_Boolean myDrawHiddenLine;
  Handle(Prs3d_LineAspect) myHiddenLineAspect;
  Handle(Prs3d_LineAspect) mySeenLineAspect;
  Handle(Prs3d_LineAspect) myVectorAspect;
  Handle(Prs3d_DatumAspect) myDatumAspect;
  Standard_Real myDatumScale;
  Handle(Prs3d_DimensionAspect) myDimensionAspect;
  Prs3d_DimensionUnits myDimensionModelUnits;
  Prs3d_DimensionUnits myDimensionDisplayUnits;
  Handle(Prs3d_LineAspect) mySectionAspect;
  Standard_Boolean myFaceBoundaryDraw;
  Handle(Prs3d_LineAspect) myFaceBoundaryAspect;
  Prs3d_TypeOfHLR myTypeOfHLR;


private: 




};







#endif // _Prs3d_Drawer_HeaderFile
