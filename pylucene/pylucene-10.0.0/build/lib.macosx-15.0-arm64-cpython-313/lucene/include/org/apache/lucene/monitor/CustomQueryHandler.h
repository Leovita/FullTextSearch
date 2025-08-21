#ifndef org_apache_lucene_monitor_CustomQueryHandler_H
#define org_apache_lucene_monitor_CustomQueryHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace monitor {
        class QueryTree;
        class TermWeightor;
      }
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class CustomQueryHandler : public ::java::lang::Object {
         public:
          enum {
            mid_handleQuery_e682ce95e117582d,
            mid_wrapTermStream_9793d650e44fa07f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CustomQueryHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CustomQueryHandler(const CustomQueryHandler& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::monitor::QueryTree handleQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::monitor::TermWeightor &) const;
          ::org::apache::lucene::analysis::TokenStream wrapTermStream(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(CustomQueryHandler);
        extern PyTypeObject *PY_TYPE(CustomQueryHandler);

        class t_CustomQueryHandler {
        public:
          PyObject_HEAD
          CustomQueryHandler object;
          static PyObject *wrap_Object(const CustomQueryHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
