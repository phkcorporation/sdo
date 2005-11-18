/* 
+----------------------------------------------------------------------+
| (c) Copyright IBM Corporation 2005.                                  | 
| All Rights Reserved.                                                 |
+----------------------------------------------------------------------+ 
|                                                                      | 
| Licensed under the Apache License, Version 2.0 (the "License"); you  | 
| may not use this file except in compliance with the License. You may | 
| obtain a copy of the License at                                      | 
|  http://www.apache.org/licenses/LICENSE-2.0                          |
|                                                                      | 
| Unless required by applicable law or agreed to in writing, software  | 
| distributed under the License is distributed on an "AS IS" BASIS,    | 
| WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or      | 
| implied. See the License for the specific language governing         | 
| permissions and limitations under the License.                       | 
+----------------------------------------------------------------------+ 
| Author: Pete Robbins                                                 | 
+----------------------------------------------------------------------+ 

*/
/* $Id$ */

#ifndef _XMLQName_H_
#define _XMLQName_H_

#include "commonj/sdo/SAX2Namespaces.h"
#include "commonj/sdo/SDOXMLString.h"
#include "commonj/sdo/DataObject.h"

namespace commonj
{
	namespace sdo
	{
		
		
		class XMLQName
		{
			
		public:
			XMLQName();
			XMLQName(const SDOXMLString& sdoUri);
			XMLQName(
				const SDOXMLString& qname, 
				const SAX2Namespaces& globalNamespaces,
				const SAX2Namespaces& localNamespaces = SAX2Namespaces());

			SDOXMLString getSDOName() const ;
			const SDOXMLString& getURI() const {return uri;}
			const SDOXMLString& getLocalName() const {return localName;}
			virtual ~XMLQName();

		private:
			SDOXMLString uri;
			SDOXMLString localName;
			
						
		};
	} // End - namespace sdo
} // End - namespace commonj


#endif //_XMLQName_H_