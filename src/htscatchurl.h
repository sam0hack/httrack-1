/* ------------------------------------------------------------ */
/*
HTTrack Website Copier, Offline Browser for Windows and Unix
Copyright (C) Xavier Roche and other contributors

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 3
of the License, or any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.


Important notes:

- We hereby ask people using this source NOT to use it in purpose of grabbing
emails addresses, or collecting any other private information on persons.
This would disgrace our work, and spoil the many hours we spent on it.


Please visit our Website: http://www.httrack.com
*/


/* ------------------------------------------------------------ */
/* File: URL catch .h                                           */
/* Author: Xavier Roche                                         */
/* ------------------------------------------------------------ */

// Fichier intercepteur d'URL .h

#ifndef HTS_CATCHURL_DEFH
#define HTS_CATCHURL_DEFH 

#include "htsbasenet.h"

/* Library internal definictions */
#ifdef HTS_INTERNAL_BYTECODE

// Fonctions
void socinput(T_SOC soc,char* s,int max);
#ifndef HTTRACK_DEFLIB
HTSEXT_API T_SOC catch_url_init_std(int* port_prox,char* adr_prox);
HTSEXT_API T_SOC catch_url_init(int* port,char* adr);
HTSEXT_API int catch_url(T_SOC soc,char* url,char* method,char* data);
#endif

#define CATCH_RESPONSE \
  "HTTP/1.0 200 OK\r\n"\
  "Content-type: text/html\r\n"\
  "\r\n"\
  "<!-- Generated by HTTrack Website Copier -->\r\n"\
  "<HTML><HEAD>\r\n"\
  "<TITLE>Link caught!</TITLE>\r\n"\
  "<SCRIPT LANGUAGE=\"Javascript\">\r\n"\
  "<!--\r\n"\
  "function back() {\r\n"\
  "  history.go(-1);\r\n"\
  "}\r\n"\
  "// -->\r\n"\
  "</SCRIPT>\r\n"\
  "</HEAD>\r\n"\
  "<BODY>\r\n"\
  "<H2>Link captured into HTTrack Website Copier, you can now restore your proxy preferences!</H2>\r\n"\
  "<BR><BR>\r\n"\
  "<H3><A HREF=\"javascript:back();\">Clic here to go back</A></H3>\r\n"\
  "</BODY></HTML>"\
  "<!-- Generated by HTTrack Website Copier -->\r\n"\
  "\r\n"\
 
#endif

#endif



