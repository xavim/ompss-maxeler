/*************************************************************************************/
/*      Copyright 2009-2018 Barcelona Supercomputing Center                          */
/*                                                                                   */
/*      This file is part of the NANOS++ library.                                    */
/*                                                                                   */
/*      NANOS++ is free software: you can redistribute it and/or modify              */
/*      it under the terms of the GNU Lesser General Public License as published by  */
/*      the Free Software Foundation, either version 3 of the License, or            */
/*      (at your option) any later version.                                          */
/*                                                                                   */
/*      NANOS++ is distributed in the hope that it will be useful,                   */
/*      but WITHOUT ANY WARRANTY; without even the implied warranty of               */
/*      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                */
/*      GNU Lesser General Public License for more details.                          */
/*                                                                                   */
/*      You should have received a copy of the GNU Lesser General Public License     */
/*      along with NANOS++.  If not, see <https://www.gnu.org/licenses/>.            */
/*************************************************************************************/

#ifndef __NANOS_INSTRUMENTOR_FWD_H
#define __NANOS_INSTRUMENTOR_FWD_H

namespace nanos {

   class Instrumentation;
#ifdef NANOS_INSTRUMENTATION_ENABLED
   class InstrumentationValueDescriptor;
   class InstrumentationKeyDescriptor;
   class InstrumentationDictionary;

   class InstrumentStateAndBurst;
   class InstrumentState;
   class InstrumentBurst;
#endif

} // namespace nanos

#endif
