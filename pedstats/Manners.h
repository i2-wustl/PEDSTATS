////////////////////////////////////////////////////////////////////// 
// pedstats/Manners.h 
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
 
#ifndef __MANNERS_H__
#define __MANNERS_H__

// This function sets up signal handlers to ensure
// pedstats terminates gracefully when something goes
// wrong

void SetupCrashHandlers();

typedef void (*signal_handler)(int);

void OutOfMemory(int);
void UserBreak(int);

#endif
 
 
 
 
 
 
