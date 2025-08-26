////////////////////////////////////////////////////////////////////// 
// janpdf/PDFchartbar.h 
// (c) 2000-2008 Goncalo Abecasis (c) 2002-2008 Jan Wigginton
// 
// This file is distributed as part of the PEDSTATS source code package   
// and may not be redistributed in any form, without prior written    
// permission from the author. Permission is granted for you to       
// modify this file for your own personal use, but modified versions  
// must retain this copyright notice and must not be distributed.     
// 
// Permission is granted for you to use this file to compile PEDSTATS.    
// 
// All computer programs have bugs. Use this file at your own risk.   
// 
// Thursday August 14, 2008
// 
 
/* Written by Jan Wigginton */
 
#ifndef __CHARTBAR_H__
#define __CHARTBAR_H__

#include "PDFpage.h"
#include "PDFchartobject.h"
#include "StringBasics.h"

class PDFChartBar : public PDFChartObject
   {
   friend class PDFHistogram;
   friend class PDFChartBasics;

   public:

      PDFChartBar();
      virtual ~PDFChartBar();

   private:

      bool    hasData;
      bool    isTagged;
      double  count;
      double  lowerBound, upperBound;
      String  barTag;

      void operator=(const PDFChartBar & rhs);
      void SetTag(const char * tag);
   };


#endif

 
 
 
 
 
 
 
 
 
