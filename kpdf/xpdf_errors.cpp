/***************************************************************************
 *   Copyright (C) 2004 by Andrew Coles <andrew_coles@yahoo.co.uk>         *
 *   Copyright (C) 2004 by Albert Astals Cid <tsdgeos@terra.es>            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/
 
#include "xpdf_errors.h"
#include "klocale.h"

bool XPDFErrorTranslator::mapNotInitialised = true;
QMap<QString, QString> XPDFErrorTranslator::translationmap;

QString XPDFErrorTranslator::translateError(const QString & originalError) {	
	
	if (mapNotInitialised) {
	
		translationmap["Couldn't find '%s' CMap file for '%s' collection"] = i18n("Could not find '%s' CMap file for '%s' collection");
		translationmap["Illegal entry in codespacerange block in CMap"] = i18n("Illegal entry in codespacerange block in CMap");
		translationmap["Illegal entry in cidrange block in CMap"] = i18n("Illegal entry in cidrange block in CMap");
		translationmap["Collision in usecmap"] = i18n("Collision in usecmap");
		translationmap["Invalid CID (%*x - %*x) in CMap"] = i18n("Invalid CID (%*x - %*x) in CMap");
		translationmap["Catalog object is wrong type (%s)"] = i18n("Catalog object is wrong type (%s)");
		translationmap["Top-level pages object is wrong type (%s)"] = i18n("Top-level pages object is wrong type (%s)");
		translationmap["Page count in top-level pages object is wrong type (%s)"] = i18n("Page count in top-level pages object is wrong type (%s)");
		translationmap["Page count in top-level pages object is incorrect"] = i18n("Page count in top-level pages object is incorrect");
		translationmap["Unknown Metadata type: '%s'"] = i18n("Unknown Metadata type: '%s'");
		translationmap["Kids object (page %d) is wrong type (%s)"] = i18n("Kids object (page %d) is wrong type (%s)");
		translationmap["Kid object (page %d) is wrong type (%s)"] = i18n("Kid object (page %d) is wrong type (%s)");
		translationmap["Bad named destination value"] = i18n("Bad named destination value");
		translationmap["Couldn't open cidToUnicode file '%s'"] = i18n("Could not open cidToUnicode file '%s'");
		translationmap["Bad line (%d) in cidToUnicode file '%s'"] = i18n("Bad line (%d) in cidToUnicode file '%s'");
		translationmap["Couldn't open unicodeToUnicode file '%s'"] = i18n("Could not open unicodeToUnicode file '%s'");
		translationmap["Bad line (%d) in unicodeToUnicode file '%s'"] = i18n("Bad line (%d) in unicodeToUnicode file '%s'");
		translationmap["Couldn't find ToUnicode CMap file for '%s'"] = i18n("Could not find ToUnicode CMap file for '%s'");
		translationmap["Illegal entry in bfchar block in ToUnicode CMap"] = i18n("Illegal entry in bfchar block in ToUnicode CMap");
		translationmap["Illegal entry in bfrange block in ToUnicode CMap"] = i18n("Illegal entry in bfrange block in ToUnicode CMap");
		translationmap["Illegal entry in ToUnicode CMap"] = i18n("Illegal entry in ToUnicode CMap");
		translationmap["Expected function dictionary or stream"] = i18n("Expected function dictionary or stream");
		translationmap["Function type is missing or wrong type"] = i18n("Function type is missing or wrong type");
		translationmap["Unimplemented function type (%d)"] = i18n("Unimplemented function type (%d)");
		translationmap["Function is missing domain"] = i18n("Function is missing domain");
		translationmap["Functions with more than %d inputs are unsupported"] = i18n("Functions with more than %d inputs are unsupported");
		translationmap["Illegal value in function domain array"] = i18n("Illegal value in function domain array");
		translationmap["Functions with more than %d outputs are unsupported"] = i18n("Functions with more than %d outputs are unsupported");
		translationmap["Illegal value in function range array"] = i18n("Illegal value in function range array");
		translationmap["Type 0 function is missing range"] = i18n("Type 0 function is missing range");
		translationmap["Type 0 function isn't a stream"] = i18n("Type 0 function is not a stream");
		translationmap["Function has missing or invalid size array"] = i18n("Function has missing or invalid size array");
		translationmap["Illegal value in function size array"] = i18n("Illegal value in function size array");
		translationmap["Function has missing or invalid BitsPerSample"] = i18n("Function has missing or invalid BitsPerSample");
		translationmap["Illegal value in function encode array"] = i18n("Illegal value in function encode array");
		translationmap["Illegal value in function decode array"] = i18n("Illegal value in function decode array");
		translationmap["Exponential function with more than one input"] = i18n("Exponential function with more than one input");
		translationmap["Function's C0 array is wrong length"] = i18n("Function's C0 array is wrong length");
		translationmap["Illegal value in function C0 array"] = i18n("Illegal value in function C0 array");
		translationmap["Function's C1 array is wrong length"] = i18n("Function's C1 array is wrong length");
		translationmap["Illegal value in function C1 array"] = i18n("Illegal value in function C1 array");
		translationmap["Function has missing or invalid N"] = i18n("Function has missing or invalid N");
		translationmap["Stitching function with more than one input"] = i18n("Stitching function with more than one input");
		translationmap["Missing 'Functions' entry in stitching function"] = i18n("Missing 'Functions' entry in stitching function");
		translationmap["Incompatible subfunctions in stitching function"] = i18n("Incompatible subfunctions in stitching function");
		translationmap["Missing or invalid 'Bounds' entry in stitching function"] = i18n("Missing or invalid 'Bounds' entry in stitching function");
		translationmap["Invalid type in 'Bounds' array in stitching function"] = i18n("Invalid type in 'Bounds' array in stitching function");
		translationmap["Missing or invalid 'Encode' entry in stitching function"] = i18n("Missing or invalid 'Encode' entry in stitching function");
		translationmap["Invalid type in 'Encode' array in stitching function"] = i18n("Invalid type in 'Encode' array in stitching function");
		translationmap["Stack overflow in PostScript function"] = i18n("Stack overflow in PostScript function");
		translationmap["Stack underflow in PostScript function"] = i18n("Stack underflow in PostScript function");
		translationmap["Type mismatch in PostScript function"] = i18n("Type mismatch in PostScript function");
		translationmap["Type 4 function is missing range"] = i18n("Type 4 function is missing range");
		translationmap["Type 4 function isn't a stream"] = i18n("Type 4 function is not a stream");
		translationmap["Expected '{' at start of PostScript function"] = i18n("Expected '{' at start of PostScript function");
		translationmap["Unexpected end of PostScript function stream"] = i18n("Unexpected end of PostScript function stream");
		translationmap["Got 'if' operator with two blocks in PostScript function"] = i18n("Got 'if' operator with two blocks in PostScript function");
		translationmap["Got 'ifelse' operator with one blocks in PostScript function"] = i18n("Got 'ifelse' operator with one blocks in PostScript function");
		translationmap["Expected if/ifelse operator in PostScript function"] = i18n("Expected if/ifelse operator in PostScript function");
		translationmap["Unknown operator '%s' in PostScript function"] = i18n("Unknown operator '%s' in PostScript function");
		translationmap["Internal: bad object in PostScript function code"] = i18n("Internal: bad object in PostScript function code");
		translationmap["Unknown font tag '%s'"] = i18n("Unknown font tag '%s'");
		translationmap["XObject '%s' is unknown"] = i18n("XObject '%s' is unknown");
		translationmap["Unknown pattern '%s'"] = i18n("Unknown pattern '%s'");
		translationmap["Unknown shading '%s'"] = i18n("Unknown shading '%s'");
		translationmap["ExtGState '%s' is unknown"] = i18n("ExtGState '%s' is unknown");
		translationmap["Weird page contents"] = i18n("Weird page contents");
		translationmap["Too many args in content stream"] = i18n("Too many args in content stream");
		translationmap["Leftover args in content stream"] = i18n("Leftover args in content stream");
		translationmap["Unknown operator '%s'"] = i18n("Unknown operator '%s'");
		translationmap["Too few (%d) args to '%s' operator"] = i18n("Too few (%d) args to '%s' operator");
		translationmap["Too many (%d) args to '%s' operator"] = i18n("Too many (%d) args to '%s' operator");
		translationmap["Arg #%d to '%s' operator is wrong type (%s)"] = i18n("Arg #%d to '%s' operator is wrong type (%s)");
		translationmap["ExtGState '%s' is wrong type"] = i18n("ExtGState '%s' is wrong type");
		translationmap["Bad color space (fill)"] = i18n("Bad color space (fill)");
		translationmap["Bad color space (stroke)"] = i18n("Bad color space (stroke)");
		translationmap["No current point in lineto"] = i18n("No current point in lineto");
		translationmap["No current point in curveto"] = i18n("No current point in curveto");
		translationmap["No current point in curveto1"] = i18n("No current point in curveto1");
		translationmap["No current point in curveto2"] = i18n("No current point in curveto2");
		translationmap["No current point in closepath"] = i18n("No current point in closepath");
		translationmap["Unimplemented pattern type (%d) in fill"] = i18n("Unimplemented pattern type (%d) in fill");
		translationmap["No font in show"] = i18n("No font in show");
		translationmap["No font in move/show"] = i18n("No font in move/show");
		translationmap["No font in move/set/show"] = i18n("No font in move/set/show");
		translationmap["No font in show/space"] = i18n("No font in show/space");
		translationmap["Element of show/space array must be number or string"] = i18n("Element of show/space array must be number or string");
		translationmap["Missing or bad Type3 CharProc entry"] = i18n("Missing or bad Type3 CharProc entry");
		translationmap["XObject '%s' is wrong type"] = i18n("XObject '%s' is wrong type");
		translationmap["Unknown XObject subtype '%s'"] = i18n("Unknown XObject subtype '%s'");
		translationmap["XObject subtype is missing or wrong type"] = i18n("XObject subtype is missing or wrong type");
		translationmap["Bad image parameters"] = i18n("Bad image parameters");
		translationmap["Unknown form type"] = i18n("Unknown form type");
		translationmap["Bad form bounding box"] = i18n("Bad form bounding box");
		translationmap["Inline image dictionary key must be a name object"] = i18n("Inline image dictionary key must be a name object");
		translationmap["End of file in inline image"] = i18n("End of file in inline image");
		translationmap["Internal: got 'ID' operator"] = i18n("Internal: got 'ID' operator");
		translationmap["Internal: got 'EI' operator"] = i18n("Internal: got 'EI' operator");
		translationmap["Unknown font type: '%s'"] = i18n("Unknown font type: '%s'");
		translationmap["Mismatch between font type and embedded font file"] = i18n("Mismatch between font type and embedded font file");
		translationmap["Unknown embedded font type '%s'"] = i18n("Unknown embedded font type '%s'");
		translationmap["External font file '%s' vanished"] = i18n("External font file '%s' vanished");
		translationmap["Error reading external font file '%s'"] = i18n("Error reading external font file '%s'");
		translationmap["Embedded font file is not a stream"] = i18n("Embedded font file is not a stream");
		translationmap["Missing or invalid CharProcs dictionary in Type 3 font"] = i18n("Missing or invalid CharProcs dictionary in Type 3 font");
		translationmap["Wrong type in font encoding resource differences (%s)"] = i18n("Wrong type in font encoding resource differences (%s)");
		translationmap["Missing DescendantFonts entry in Type 0 font"] = i18n("Missing DescendantFonts entry in Type 0 font");
		translationmap["Bad descendant font in Type 0 font"] = i18n("Bad descendant font in Type 0 font");
		translationmap["Missing Subtype entry in Type 0 descendant font"] = i18n("Missing Subtype entry in Type 0 descendant font");
		translationmap["Unknown Type 0 descendant font type '%s'"] = i18n("Unknown Type 0 descendant font type '%s'");
		translationmap["Missing CIDSystemInfo dictionary in Type 0 descendant font"] = i18n("Missing CIDSystemInfo dictionary in Type 0 descendant font");
		translationmap["Invalid CIDSystemInfo dictionary in Type 0 descendant font"] = i18n("Invalid CIDSystemInfo dictionary in Type 0 descendant font");
		translationmap["Unknown character collection '%s'"] = i18n("Unknown character collection '%s'");
		translationmap["Missing or invalid Encoding entry in Type 0 font"] = i18n("Missing or invalid Encoding entry in Type 0 font");
		translationmap["Unknown CMap '%s' for character collection '%s'"] = i18n("Unknown CMap '%s' for character collection '%s'");
		translationmap["Invalid CIDToGIDMap entry in CID font"] = i18n("Invalid CIDToGIDMap entry in CID font");
		translationmap["Bad widths array in Type 0 font"] = i18n("Bad widths array in Type 0 font");
		translationmap["Bad widths (W2) array in Type 0 font"] = i18n("Bad widths (W2) array in Type 0 font");
		translationmap["font resource is not a dictionary"] = i18n("font resource is not a dictionary");
		translationmap["Bad color space '%s'"] = i18n("Bad color space '%s'");
		translationmap["Bad color space"] = i18n("Bad color space");
		translationmap["Bad color space - expected name or array"] = i18n("Bad color space - expected name or array");
		translationmap["Bad CalGray color space"] = i18n("Bad CalGray color space");
		translationmap["Bad CalRGB color space"] = i18n("Bad CalRGB color space");
		translationmap["Bad Lab color space"] = i18n("Bad Lab color space");
		translationmap["Bad ICCBased color space (stream)"] = i18n("Bad ICCBased color space (stream)");
		translationmap["Bad ICCBased color space (N)"] = i18n("Bad ICCBased color space (N)");
		translationmap["Bad ICCBased color space - invalid N"] = i18n("Bad ICCBased color space - invalid N");
		translationmap["Bad Indexed color space"] = i18n("Bad Indexed color space");
		translationmap["Bad Indexed color space (base color space)"] = i18n("Bad Indexed color space (base color space)");
		translationmap["Bad Indexed color space (hival)"] = i18n("Bad Indexed color space (hival)");
		translationmap["Bad Indexed color space (invalid indexHigh value)"] = i18n("Bad Indexed color space (invalid indexHigh value)");
		translationmap["Bad Indexed color space (lookup table stream too short)"] = i18n("Bad Indexed color space (lookup table stream too short)");
		translationmap["Bad Indexed color space (lookup table string too short)"] = i18n("Bad Indexed color space (lookup table string too short)");
		translationmap["Bad Indexed color space (lookup table)"] = i18n("Bad Indexed color space (lookup table)");
		translationmap["Bad Separation color space"] = i18n("Bad Separation color space");
		translationmap["Bad Separation color space (name)"] = i18n("Bad Separation color space (name)");
		translationmap["Bad Separation color space (alternate color space)"] = i18n("Bad Separation color space (alternate color space)");
		translationmap["Bad DeviceN color space"] = i18n("Bad DeviceN color space");
		translationmap["Bad DeviceN color space (names)"] = i18n("Bad DeviceN color space (names)");
		translationmap["DeviceN color space with more than %d > %d components"] = i18n("DeviceN color space with more than %d > %d components");
		translationmap["Bad DeviceN color space (alternate color space)"] = i18n("Bad DeviceN color space (alternate color space)");
		translationmap["Bad Pattern color space"] = i18n("Bad Pattern color space");
		translationmap["Bad Pattern color space (underlying color space)"] = i18n("Bad Pattern color space (underlying color space)");
		translationmap["Invalid or missing PaintType in pattern"] = i18n("Invalid or missing PaintType in pattern");
		translationmap["Invalid or missing TilingType in pattern"] = i18n("Invalid or missing TilingType in pattern");
		translationmap["Invalid or missing BBox in pattern"] = i18n("Invalid or missing BBox in pattern");
		translationmap["Invalid or missing XStep in pattern"] = i18n("Invalid or missing XStep in pattern");
		translationmap["Invalid or missing YStep in pattern"] = i18n("Invalid or missing YStep in pattern");
		translationmap["Invalid or missing Resources in pattern"] = i18n("Invalid or missing Resources in pattern");
		translationmap["Invalid ShadingType in shading dictionary"] = i18n("Invalid ShadingType in shading dictionary");
		translationmap["Unimplemented shading type %d"] = i18n("Unimplemented shading type %d");
		translationmap["Bad color space in shading dictionary"] = i18n("Bad color space in shading dictionary");
		translationmap["Bad Background in shading dictionary"] = i18n("Bad Background in shading dictionary");
		translationmap["Bad BBox in shading dictionary"] = i18n("Bad BBox in shading dictionary");
		translationmap["Invalid Function array in shading dictionary"] = i18n("Invalid Function array in shading dictionary");
		translationmap["Missing or invalid Coords in shading dictionary"] = i18n("Missing or invalid Coords in shading dictionary");
		translationmap["No paper information available - using defaults"] = i18n("No paper information available - using defaults");
		translationmap["Couldn't find included config file: '%s' (%s:%d)"] = i18n("Could not find included config file: '%s' (%s:%d)");
		translationmap["Bad 'include' config file command (%s:%d)"] = i18n("Bad 'include' config file command (%s:%d)");
		translationmap["Unknown config file command '%s' (%s:%d)"] = i18n("Unknown config file command '%s' (%s:%d)");
		translationmap["-- Xpdf no longer supports X fonts"] = i18n("-- Xpdf no longer supports X fonts");
		translationmap["-- The t1libControl and freetypeControl options have been replaced"] = i18n("-- The t1libControl and freetypeControl options have been replaced");
		translationmap["   by the enableT1lib, enableFreeType, and antialias options"] = i18n("   by the enableT1lib, enableFreeType, and antialias options");
		translationmap["-- the config file format has changed since Xpdf 0.9x"] = i18n("-- the config file format has changed since Xpdf 0.9x");
		translationmap["Bad 'nameToUnicode' config file command (%s:%d)"] = i18n("Bad 'nameToUnicode' config file command (%s:%d)");
		translationmap["Couldn't open 'nameToUnicode' file '%s'"] = i18n("Could not open 'nameToUnicode' file '%s'");
		translationmap["Bad line in 'nameToUnicode' file (%s:%d)"] = i18n("Bad line in 'nameToUnicode' file (%s:%d)");
		translationmap["Bad 'cidToUnicode' config file command (%s:%d)"] = i18n("Bad 'cidToUnicode' config file command (%s:%d)");
		translationmap["Bad 'unicodeToUnicode' config file command (%s:%d)"] = i18n("Bad 'unicodeToUnicode' config file command (%s:%d)");
		translationmap["Bad 'unicodeMap' config file command (%s:%d)"] = i18n("Bad 'unicodeMap' config file command (%s:%d)");
		translationmap["Bad 'cMapDir' config file command (%s:%d)"] = i18n("Bad 'cMapDir' config file command (%s:%d)");
		translationmap["Bad 'toUnicodeDir' config file command (%s:%d)"] = i18n("Bad 'toUnicodeDir' config file command (%s:%d)");
		translationmap["Bad 'display*Font*' config file command (%s:%d)"] = i18n("Bad 'display*Font*' config file command (%s:%d)");
		translationmap["Bad 'psPaperSize' config file command (%s:%d)"] = i18n("Bad 'psPaperSize' config file command (%s:%d)");
		translationmap["Bad 'psImageableArea' config file command (%s:%d)"] = i18n("Bad 'psImageableArea' config file command (%s:%d)");
		translationmap["Bad 'psLevel' config file command (%s:%d)"] = i18n("Bad 'psLevel' config file command (%s:%d)");
		translationmap["Bad 'psFile' config file command (%s:%d)"] = i18n("Bad 'psFile' config file command (%s:%d)");
		translationmap["Bad 'psFont' config file command (%s:%d)"] = i18n("Bad 'psFont' config file command (%s:%d)");
		translationmap["Bad '%s' config file command (%s:%d)"] = i18n("Bad '%s' config file command (%s:%d)");
		translationmap["Bad 'textEncoding' config file command (%s:%d)"] = i18n("Bad 'textEncoding' config file command (%s:%d)");
		translationmap["Bad 'textEOL' config file command (%s:%d)"] = i18n("Bad 'textEOL' config file command (%s:%d)");
		translationmap["Bad 'fontDir' config file command (%s:%d)"] = i18n("Bad 'fontDir' config file command (%s:%d)");
		translationmap["Bad 'initialZoom' config file command (%s:%d)"] = i18n("Bad 'initialZoom' config file command (%s:%d)");
		translationmap["No display font for '%s'"] = i18n("No display font for '%s'");
		translationmap["Bad two dim code in JBIG2 MMR stream"] = i18n("Bad two dim code in JBIG2 MMR stream");
		translationmap["Bad white code in JBIG2 MMR stream"] = i18n("Bad white code in JBIG2 MMR stream");
		translationmap["Bad black code in JBIG2 MMR stream"] = i18n("Bad black code in JBIG2 MMR stream");
		translationmap["Unknown segment type in JBIG2 stream"] = i18n("Unknown segment type in JBIG2 stream");
		translationmap["Unexpected EOF in JBIG2 stream"] = i18n("Unexpected EOF in JBIG2 stream");
		translationmap["Bad symbol dictionary reference in JBIG2 halftone segment"] = i18n("Bad symbol dictionary reference in JBIG2 halftone segment");
		translationmap["Illegal code in JBIG2 MMR bitmap data"] = i18n("Illegal code in JBIG2 MMR bitmap data");
		translationmap["Missing EOFB in JBIG2 MMR bitmap data"] = i18n("Missing EOFB in JBIG2 MMR bitmap data");
		translationmap["Bad reference in JBIG2 generic refinement segment"] = i18n("Bad reference in JBIG2 generic refinement segment");
		translationmap["Bad bitmap reference in JBIG2 generic refinement segment"] = i18n("Bad bitmap reference in JBIG2 generic refinement segment");
		translationmap["Unexpected EOF in JPX stream"] = i18n("Unexpected EOF in JPX stream");
		translationmap["Unknown compression type in JPX stream"] = i18n("Unknown compression type in JPX stream");
		translationmap["Found bits per component box before image header box in JPX stream"] = i18n("Found bits per component box before image header box in JPX stream");
		translationmap["Invalid bits per component box in JPX stream"] = i18n("Invalid bits per component box in JPX stream");
		translationmap["JPX stream is missing the image header box"] = i18n("JPX stream is missing the image header box");
		translationmap["JPX stream has no supported color spec"] = i18n("JPX stream has no supported color spec");
		translationmap["Error in JPX color spec"] = i18n("Error in JPX color spec");
		translationmap["Error in JPX codestream"] = i18n("Error in JPX codestream");
		translationmap["Error in JPX SIZ marker segment"] = i18n("Error in JPX SIZ marker segment");
		translationmap["Different number of components in JPX SIZ marker segment"] = i18n("Different number of components in JPX SIZ marker segment");
		translationmap["Error in JPX COD marker segment"] = i18n("Error in JPX COD marker segment");
		translationmap["JPX COC marker segment before COD segment"] = i18n("JPX COC marker segment before COD segment");
		translationmap["Error in JPX COC marker segment"] = i18n("Error in JPX COC marker segment");
		translationmap["Error in JPX QCD marker segment"] = i18n("Error in JPX QCD marker segment");
		translationmap["JPX QCC marker segment before QCD segment"] = i18n("JPX QCC marker segment before QCD segment");
		translationmap["Error in JPX QCC marker segment"] = i18n("Error in JPX QCC marker segment");
		translationmap["Error in JPX PPM marker segment"] = i18n("Error in JPX PPM marker segment");
		translationmap["Error in JPX RGN marker segment"] = i18n("Error in JPX RGN marker segment");
		translationmap["Error in JPX POC marker segment"] = i18n("Error in JPX POC marker segment");
		translationmap["Error in JPX TLM marker segment"] = i18n("Error in JPX TLM marker segment");
		translationmap["Error in JPX PLM marker segment"] = i18n("Error in JPX PLM marker segment");
		translationmap["Error in JPX CRG marker segment"] = i18n("Error in JPX CRG marker segment");
		translationmap["Error in JPX COM marker segment"] = i18n("Error in JPX COM marker segment");
		translationmap["Unknown marker segment %02x in JPX stream"] = i18n("Unknown marker segment %02x in JPX stream");
		translationmap["Missing SIZ marker segment in JPX stream"] = i18n("Missing SIZ marker segment in JPX stream");
		translationmap["Missing COD marker segment in JPX stream"] = i18n("Missing COD marker segment in JPX stream");
		translationmap["Missing QCD marker segment in JPX stream"] = i18n("Missing QCD marker segment in JPX stream");
		translationmap["Missing EOC marker in JPX codestream"] = i18n("Missing EOC marker in JPX codestream");
		translationmap["Error in JPX SOT marker segment"] = i18n("Error in JPX SOT marker segment");
		translationmap["Weird tile index in JPX stream"] = i18n("Weird tile index in JPX stream");
		translationmap["Error in JPX tile-part codestream"] = i18n("Error in JPX tile-part codestream");
		translationmap["Error in JPX PPT marker segment"] = i18n("Error in JPX PPT marker segment");
		translationmap["Error in JPX PLT marker segment"] = i18n("Error in JPX PLT marker segment");
		translationmap["Unknown marker segment %02x in JPX tile-part stream"] = i18n("Unknown marker segment %02x in JPX tile-part stream");
		translationmap["Error in JPX stream"] = i18n("Error in JPX stream");
		translationmap["JPX stream contains a box larger than 2^32 bytes"] = i18n("JPX stream contains a box larger than 2^32 bytes");
		translationmap["Unterminated string"] = i18n("Unterminated string");
		translationmap["Illegal digit in hex char in name"] = i18n("Illegal digit in hex char in name");
		translationmap["Name token too long"] = i18n("Name token too long");
		translationmap["Unterminated hex string"] = i18n("Unterminated hex string");
		translationmap["Illegal character <%02x> in hex string"] = i18n("Illegal character <%02x> in hex string");
		translationmap["Illegal character '>'"] = i18n("Illegal character '>'");
		translationmap["Illegal character '%c'"] = i18n("Illegal character '%c'");
		translationmap["Command token too long"] = i18n("Command token too long");
		translationmap["Bad annotation action"] = i18n("Bad annotation action");
		translationmap["Illegal file spec in link"] = i18n("Illegal file spec in link");
		translationmap["Annotation destination array is too short"] = i18n("Annotation destination array is too short");
		translationmap["Bad annotation destination"] = i18n("Bad annotation destination");
		translationmap["Bad annotation destination position"] = i18n("Bad annotation destination position");
		translationmap["Unknown annotation destination type"] = i18n("Unknown annotation destination type");
		translationmap["Illegal annotation destination"] = i18n("Illegal annotation destination");
		translationmap["Bad launch-type link action"] = i18n("Bad launch-type link action");
		translationmap["Illegal URI-type link"] = i18n("Illegal URI-type link");
		translationmap["Movie action is missing both the Annot and T keys"] = i18n("Movie action is missing both the Annot and T keys");
		translationmap["Annotation rectangle is wrong type"] = i18n("Annotation rectangle is wrong type");
		translationmap["Bad annotation rectangle"] = i18n("Bad annotation rectangle");
		translationmap["Couldn't open file '%s'"] = i18n("Could not open file '%s'");
		translationmap["Couldn't read xref table"] = i18n("Could not read xref table");
		translationmap["Couldn't read page catalog"] = i18n("Could not read page catalog");
		translationmap["May not be a PDF file (continuing anyway)"] = i18n("May not be a PDF file (continuing anyway)");
		translationmap["PDF version %s -- xpdf supports version %s"] = i18n("PDF version %s -- xpdf supports version %s");
		translationmap["Page annotations object (page %d) is wrong type (%s)"] = i18n("Page annotations object (page %d) is wrong type (%s)");
		translationmap["Page contents object (page %d) is wrong type (%s)"] = i18n("Page contents object (page %d) is wrong type (%s)");
		translationmap["End of file inside array"] = i18n("End of file inside array");
		translationmap["Dictionary key must be a name object"] = i18n("Dictionary key must be a name object");
		translationmap["End of file inside dictionary"] = i18n("End of file inside dictionary");
		translationmap["Bad 'Length' attribute in stream"] = i18n("Bad 'Length' attribute in stream");
		translationmap["Missing 'endstream'"] = i18n("Missing 'endstream'");
		translationmap["Couldn't create temporary font file"] = i18n("Could not create temporary font file");
		translationmap["Couldn't find a font for '%s'"] = i18n("Could not find a font for '%s'");
		translationmap["Couldn't create a font for '%s'"] = i18n("Could not create a font for '%s'");
		translationmap["Bad bounding box in Type 3 glyph"] = i18n("Bad bounding box in Type 3 glyph");
		translationmap["Internal: called getRawChar() on non-predictor stream"] = i18n("Internal: called getRawChar() on non-predictor stream");
		translationmap["Bad filter name"] = i18n("Bad filter name");
		translationmap["Bad 'Filter' attribute in stream"] = i18n("Bad 'Filter' attribute in stream");
		translationmap["Unknown filter '%s'"] = i18n("Unknown filter '%s'");
		translationmap["Internal: called setPos() on FilterStream"] = i18n("Internal: called setPos() on FilterStream");
		translationmap["Internal: called makeSubStream() on EmbedStream"] = i18n("Internal: called makeSubStream() on EmbedStream");
		translationmap["Internal: called setPos() on EmbedStream"] = i18n("Internal: called setPos() on EmbedStream");
		translationmap["Internal: called getStart() on EmbedStream"] = i18n("Internal: called getStart() on EmbedStream");
		translationmap["Internal: called moveStart() on EmbedStream"] = i18n("Internal: called moveStart() on EmbedStream");
		translationmap["Illegal character <%02x> in ASCIIHex stream"] = i18n("Illegal character <%02x> in ASCIIHex stream");
		translationmap["Bad LZW stream - expected clear-table code"] = i18n("Bad LZW stream - expected clear-table code");
		translationmap["Bad LZW stream - unexpected code"] = i18n("Bad LZW stream - unexpected code");
		translationmap["Bad 2D code %04x in CCITTFax stream"] = i18n("Bad 2D code %04x in CCITTFax stream");
		translationmap["CCITTFax row is wrong length (%d)"] = i18n("CCITTFax row is wrong length (%d)");
		translationmap["Bad RTC code in CCITTFax stream"] = i18n("Bad RTC code in CCITTFax stream");
		translationmap["Bad two dim code (%04x) in CCITTFax stream"] = i18n("Bad two dim code (%04x) in CCITTFax stream");
		translationmap["Bad white code (%04x) in CCITTFax stream"] = i18n("Bad white code (%04x) in CCITTFax stream");
		translationmap["Bad black code (%04x) in CCITTFax stream"] = i18n("Bad black code (%04x) in CCITTFax stream");
		translationmap["Bad DCT data: incorrect restart marker"] = i18n("Bad DCT data: incorrect restart marker");
		translationmap["Bad Huffman code in DCT stream"] = i18n("Bad Huffman code in DCT stream");
		translationmap["Bad DCT data: missing 00 after ff"] = i18n("Bad DCT data: missing 00 after ff");
		translationmap["Bad DCT header"] = i18n("Bad DCT header");
		translationmap["Unknown DCT marker <%02x>"] = i18n("Unknown DCT marker <%02x>");
		translationmap["Bad DCT precision %d"] = i18n("Bad DCT precision %d");
		translationmap["Bad DCT scan info block"] = i18n("Bad DCT scan info block");
		translationmap["Bad DCT component ID in scan info block"] = i18n("Bad DCT component ID in scan info block");
		translationmap["Bad DCT quantization table"] = i18n("Bad DCT quantization table");
		translationmap["Bad DCT Huffman table"] = i18n("Bad DCT Huffman table");
		translationmap["Bad DCT restart interval"] = i18n("Bad DCT restart interval");
		translationmap["Bad DCT APP0 marker"] = i18n("Bad DCT APP0 marker");
		translationmap["Bad DCT Adobe APP14 marker"] = i18n("Bad DCT Adobe APP14 marker");
		translationmap["Bad DCT trailer"] = i18n("Bad DCT trailer");
		translationmap["Unknown compression method in flate stream"] = i18n("Unknown compression method in flate stream");
		translationmap["Bad FCHECK in flate stream"] = i18n("Bad FCHECK in flate stream");
		translationmap["FDICT bit set in flate stream"] = i18n("FDICT bit set in flate stream");
		translationmap["Unexpected end of file in flate stream"] = i18n("Unexpected end of file in flate stream");
		translationmap["Bad uncompressed block length in flate stream"] = i18n("Bad uncompressed block length in flate stream");
		translationmap["Bad block header in flate stream"] = i18n("Bad block header in flate stream");
		translationmap["Bad dynamic code table in flate stream"] = i18n("Bad dynamic code table in flate stream");
		translationmap["Couldn't open text file '%s'"] = i18n("Could not open text file '%s'");
		translationmap["Couldn't find unicodeMap file for the '%s' encoding"] = i18n("Could not find unicodeMap file for the '%s' encoding");
		translationmap["Bad line (%d) in unicodeMap file for the '%s' encoding"] = i18n("Bad line (%d) in unicodeMap file for the '%s' encoding");
		translationmap["PDF file is damaged - attempting to reconstruct xref table..."] = i18n("PDF file is damaged - attempting to reconstruct xref table...");
		translationmap["Couldn't find trailer dictionary"] = i18n("Could not find trailer dictionary");
		translationmap["Incorrect owner password"] = i18n("Incorrect owner password");
		translationmap["Incorrect password"] = i18n("Incorrect password");
		translationmap["Weird encryption info"] = i18n("Weird encryption info");
		translationmap["Unsupported version/revision (%d/%d) of Standard security handler"] = i18n("Unsupported version/revision (%d/%d) of Standard security handler");
		translationmap["Unknown security handler '%s'"] = i18n("Unknown security handler '%s'");
		translationmap["PDF file is encrypted and this version of the Xpdf tools"] = i18n("PDF file is encrypted and this version of the Xpdf tools");
		translationmap["was built without decryption support."] = i18n("was built without decryption support.");
		translationmap["Couldn't run print command '%s'"] = i18n("Could not run print command '%s'");
		translationmap["Print commands are not supported ('%s')"] = i18n("Print commands are not supported ('%s')");
		translationmap["Couldn't open PostScript file '%s'"] = i18n("Could not open PostScript file '%s'");
		translationmap["Couldn't find Unicode map for 16-bit font encoding '%s'"] = i18n("Could not find Unicode map for 16-bit font encoding '%s'");
		translationmap["Couldn't find a font to substitute for '%s' ('%s' character collection)"] = i18n("Could not find a font to substitute for '%s' ('%s' character collection)");
		translationmap["Embedded font file object is not a stream"] = i18n("Embedded font file object is not a stream");
		translationmap["Embedded font stream is missing its dictionary"] = i18n("Embedded font stream is missing its dictionary");
		translationmap["Missing length fields in embedded font stream dictionary"] = i18n("Missing length fields in embedded font stream dictionary");
		translationmap["Unexpected end of file in embedded font stream"] = i18n("Unexpected end of file in embedded font stream");
		translationmap["Couldn't open external font file"] = i18n("Could not open external font file");
		translationmap["Image in resource dict is not an indirect reference"] = i18n("Image in resource dict is not an indirect reference");
		translationmap["Internal: OPI in inline image"] = i18n("Internal: OPI in inline image");
		
		mapNotInitialised = false;
	}
	
	return (translationmap[originalError]);	
};
