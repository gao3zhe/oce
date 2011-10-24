#ifndef _XCAFSchema_HeaderFile
#include <XCAFSchema.hxx>
#endif
#ifndef _Storage_StreamUnknownTypeError_HeaderFile
#include <Storage_StreamUnknownTypeError.hxx>
#endif
#ifndef _TColStd_SequenceOfAsciiString_HeaderFile
#include <TColStd_SequenceOfAsciiString.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_Location_HeaderFile
#include <XCAFSchema_PXCAFDoc_Location.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_Color_HeaderFile
#include <XCAFSchema_PXCAFDoc_Color.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_Volume_HeaderFile
#include <XCAFSchema_PXCAFDoc_Volume.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_Area_HeaderFile
#include <XCAFSchema_PXCAFDoc_Area.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_Centroid_HeaderFile
#include <XCAFSchema_PXCAFDoc_Centroid.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_ColorTool_HeaderFile
#include <XCAFSchema_PXCAFDoc_ColorTool.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_ShapeTool_HeaderFile
#include <XCAFSchema_PXCAFDoc_ShapeTool.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_DocumentTool_HeaderFile
#include <XCAFSchema_PXCAFDoc_DocumentTool.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_LayerTool_HeaderFile
#include <XCAFSchema_PXCAFDoc_LayerTool.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_GraphNode_HeaderFile
#include <XCAFSchema_PXCAFDoc_GraphNode.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_GraphNodeSequence_HeaderFile
#include <XCAFSchema_PXCAFDoc_GraphNodeSequence.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_SeqNodeOfGraphNodeSequence_HeaderFile
#include <XCAFSchema_PXCAFDoc_SeqNodeOfGraphNodeSequence.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_Datum_HeaderFile
#include <XCAFSchema_PXCAFDoc_Datum.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_DimTol_HeaderFile
#include <XCAFSchema_PXCAFDoc_DimTol.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_DimTolTool_HeaderFile
#include <XCAFSchema_PXCAFDoc_DimTolTool.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_Material_HeaderFile
#include <XCAFSchema_PXCAFDoc_Material.hxx>
#endif
#ifndef _XCAFSchema_PXCAFDoc_MaterialTool_HeaderFile
#include <XCAFSchema_PXCAFDoc_MaterialTool.hxx>
#endif
#ifndef _XCAFSchema_PDF_Attribute_HeaderFile
#include <XCAFSchema_PDF_Attribute.hxx>
#endif
#ifndef _XCAFSchema_Standard_Persistent_HeaderFile
#include <XCAFSchema_Standard_Persistent.hxx>
#endif
#ifndef _XCAFSchema_PMMgt_PManaged_HeaderFile
#include <XCAFSchema_PMMgt_PManaged.hxx>
#endif
#ifndef _XCAFSchema_PCollection_HAsciiString_HeaderFile
#include <XCAFSchema_PCollection_HAsciiString.hxx>
#endif
#ifndef _XCAFSchema_PColStd_HArray1OfReal_HeaderFile
#include <XCAFSchema_PColStd_HArray1OfReal.hxx>
#endif
#ifndef _XCAFSchema_PTopLoc_Datum3D_HeaderFile
#include <XCAFSchema_PTopLoc_Datum3D.hxx>
#endif
#ifndef _XCAFSchema_PTopLoc_ItemLocation_HeaderFile
#include <XCAFSchema_PTopLoc_ItemLocation.hxx>
#endif
#ifndef _XCAFSchema_PCollection_HExtendedString_HeaderFile
#include <XCAFSchema_PCollection_HExtendedString.hxx>
#endif

// avoid warnings on 'extern "C"' functions returning C++ classes
#ifdef _MSC_VER
#pragma warning(disable:4190)
#endif

IMPLEMENT_STANDARD_HANDLE(XCAFSchema,Storage_Schema)
IMPLEMENT_STANDARD_RTTIEXT(XCAFSchema,Storage_Schema)

Storage_BEGIN_ADD_TYPES(XCAFSchema)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_Location,XCAFSchema_PXCAFDoc_Location)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_Color,XCAFSchema_PXCAFDoc_Color)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_Volume,XCAFSchema_PXCAFDoc_Volume)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_Area,XCAFSchema_PXCAFDoc_Area)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_Centroid,XCAFSchema_PXCAFDoc_Centroid)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_ColorTool,XCAFSchema_PXCAFDoc_ColorTool)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_ShapeTool,XCAFSchema_PXCAFDoc_ShapeTool)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_DocumentTool,XCAFSchema_PXCAFDoc_DocumentTool)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_LayerTool,XCAFSchema_PXCAFDoc_LayerTool)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_GraphNode,XCAFSchema_PXCAFDoc_GraphNode)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_GraphNodeSequence,XCAFSchema_PXCAFDoc_GraphNodeSequence)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_SeqNodeOfGraphNodeSequence,XCAFSchema_PXCAFDoc_SeqNodeOfGraphNodeSequence)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_Datum,XCAFSchema_PXCAFDoc_Datum)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_DimTol,XCAFSchema_PXCAFDoc_DimTol)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_DimTolTool,XCAFSchema_PXCAFDoc_DimTolTool)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_Material,XCAFSchema_PXCAFDoc_Material)
Storage_ADD_TYPES(XCAFSchema,PXCAFDoc_MaterialTool,XCAFSchema_PXCAFDoc_MaterialTool)
Storage_ADD_TYPES(XCAFSchema,PDF_Attribute,XCAFSchema_PDF_Attribute)
Storage_ADD_TYPES(XCAFSchema,Standard_Persistent,XCAFSchema_Standard_Persistent)
Storage_ADD_TYPES(XCAFSchema,PMMgt_PManaged,XCAFSchema_PMMgt_PManaged)
Storage_ADD_TYPES(XCAFSchema,PCollection_HAsciiString,XCAFSchema_PCollection_HAsciiString)
Storage_ADD_TYPES(XCAFSchema,PColStd_HArray1OfReal,XCAFSchema_PColStd_HArray1OfReal)
Storage_ADD_TYPES(XCAFSchema,PTopLoc_Datum3D,XCAFSchema_PTopLoc_Datum3D)
Storage_ADD_TYPES(XCAFSchema,PTopLoc_ItemLocation,XCAFSchema_PTopLoc_ItemLocation)
Storage_ADD_TYPES(XCAFSchema,PCollection_HExtendedString,XCAFSchema_PCollection_HExtendedString)
Storage_END_ADD_TYPES(XCAFSchema)

Storage_BEGIN_READ_SELECTION(XCAFSchema)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_Location,XCAFSchema_PXCAFDoc_Location)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_Color,XCAFSchema_PXCAFDoc_Color)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_Volume,XCAFSchema_PXCAFDoc_Volume)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_Area,XCAFSchema_PXCAFDoc_Area)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_Centroid,XCAFSchema_PXCAFDoc_Centroid)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_ColorTool,XCAFSchema_PXCAFDoc_ColorTool)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_ShapeTool,XCAFSchema_PXCAFDoc_ShapeTool)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_DocumentTool,XCAFSchema_PXCAFDoc_DocumentTool)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_LayerTool,XCAFSchema_PXCAFDoc_LayerTool)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_GraphNode,XCAFSchema_PXCAFDoc_GraphNode)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_GraphNodeSequence,XCAFSchema_PXCAFDoc_GraphNodeSequence)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_SeqNodeOfGraphNodeSequence,XCAFSchema_PXCAFDoc_SeqNodeOfGraphNodeSequence)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_Datum,XCAFSchema_PXCAFDoc_Datum)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_DimTol,XCAFSchema_PXCAFDoc_DimTol)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_DimTolTool,XCAFSchema_PXCAFDoc_DimTolTool)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_Material,XCAFSchema_PXCAFDoc_Material)
Storage_READ_SELECTION(XCAFSchema,PXCAFDoc_MaterialTool,XCAFSchema_PXCAFDoc_MaterialTool)
Storage_READ_SELECTION(XCAFSchema,PCollection_HAsciiString,XCAFSchema_PCollection_HAsciiString)
Storage_READ_SELECTION(XCAFSchema,PColStd_HArray1OfReal,XCAFSchema_PColStd_HArray1OfReal)
Storage_READ_SELECTION(XCAFSchema,PTopLoc_Datum3D,XCAFSchema_PTopLoc_Datum3D)
Storage_READ_SELECTION(XCAFSchema,PTopLoc_ItemLocation,XCAFSchema_PTopLoc_ItemLocation)
Storage_READ_SELECTION(XCAFSchema,PCollection_HExtendedString,XCAFSchema_PCollection_HExtendedString)
Storage_END_READ_SELECTION(XCAFSchema)

Storage_BEGIN_SCHEMA_TYPES(XCAFSchema)
Storage_SCHEMA_TYPES(PXCAFDoc_Location)
Storage_SCHEMA_TYPES(PXCAFDoc_Color)
Storage_SCHEMA_TYPES(PXCAFDoc_Volume)
Storage_SCHEMA_TYPES(PXCAFDoc_Area)
Storage_SCHEMA_TYPES(PXCAFDoc_Centroid)
Storage_SCHEMA_TYPES(PXCAFDoc_ColorTool)
Storage_SCHEMA_TYPES(PXCAFDoc_ShapeTool)
Storage_SCHEMA_TYPES(PXCAFDoc_DocumentTool)
Storage_SCHEMA_TYPES(PXCAFDoc_LayerTool)
Storage_SCHEMA_TYPES(PXCAFDoc_GraphNode)
Storage_SCHEMA_TYPES(PXCAFDoc_GraphNodeSequence)
Storage_SCHEMA_TYPES(PXCAFDoc_SeqNodeOfGraphNodeSequence)
Storage_SCHEMA_TYPES(PXCAFDoc_Datum)
Storage_SCHEMA_TYPES(PXCAFDoc_DimTol)
Storage_SCHEMA_TYPES(PXCAFDoc_DimTolTool)
Storage_SCHEMA_TYPES(PXCAFDoc_Material)
Storage_SCHEMA_TYPES(PXCAFDoc_MaterialTool)
Storage_SCHEMA_TYPES(PDF_Attribute)
Storage_SCHEMA_TYPES(Standard_Persistent)
Storage_SCHEMA_TYPES(PMMgt_PManaged)
Storage_SCHEMA_TYPES(PCollection_HAsciiString)
Storage_SCHEMA_TYPES(PColStd_HArray1OfReal)
Storage_SCHEMA_TYPES(PTopLoc_Datum3D)
Storage_SCHEMA_TYPES(PTopLoc_ItemLocation)
Storage_SCHEMA_TYPES(PCollection_HExtendedString)
Storage_END_SCHEMA_TYPES(XCAFSchema)