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

#ifndef _MAX_WORKER_H
#define _MAX_WORKER_H

#include <queue>

#include "workdescriptor.hpp"

#include <stdio.h>

namespace nanos {
namespace ext {



   class MaxWorker {
      public:
         struct MaxDFE {
            void *dfeInit;    //maxfile_t(*init_fun)(void)
            const char *name;
            unsigned int type;
            MaxDFE(void *init, const char* n, unsigned int t):
               dfeInit(init), name(n), type(t) { printf ("Building MaxDFE\n"); }
         };

      private:
         static WD * getMaxWD( BaseThread * thread );
         //static std::list< MaxDFE > _dfeList;
         //static MaxDFE _dfeList;
         //static int sz;
         //static std::queue< MaxDFE > _dfeList;
         //static std::queue< WD * > _runningTasks;
      public:
         //std::list< MaxDFE > _dfeList;
         //std::queue< WD * > _runningTasks;
         static void MaxWorkerLoop();
         //static std::list<MaxDFE> & getDFEList() { /* printf ("_dfeList %p\n", &_dfeList); */ return _dfeList; }
         //static MaxDFE * getDFEList() { /* printf ("_dfeList %p\n", &_dfeList); */ return &_dfeList; }
         //static std::queue <MaxDFE> & getDFEList() { /* printf ("_dfeList %p\n", &_dfeList); */ return _dfeList; }
         //static std::queue <MaxDFE> & getDFEList();// { /* printf ("_dfeList %p\n", &_dfeList); */ return _dfeList; }
         static std::list <MaxDFE> & getDFEList() { /* printf ("_dfeList %p\n", &_dfeList); */ static std::list< MaxWorker::MaxDFE > _dfeList; return _dfeList; }
         static std::queue <WD *> & getRunningTasks() {
            static std::queue< WD * > _runningTasks; return _runningTasks;
         }
         static void addDFE( void *initFun, const char* name, unsigned int type );
         MaxWorker() {
          printf ("Constructing MaxWorker\n");
          //printf("list sizes %ld %ld\n", _dfeList.size(), _runningTasks.size());
         }

   };

         //extern std::queue< MaxWorker::MaxDFE > _dfeList;
         //extern std::queue< WD * > _runningTasks;
}
}

#endif
