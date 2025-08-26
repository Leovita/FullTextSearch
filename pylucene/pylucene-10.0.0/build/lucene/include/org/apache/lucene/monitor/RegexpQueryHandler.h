#ifndef org_apache_lucene_monitor_RegexpQueryHandler_H
#define org_apache_lucene_monitor_RegexpQueryHandler_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class CustomQueryHandler;
        class TermWeightor;
        class QueryTree;
      }
      namespace analysis {
        class TokenStream;
      }
      namespace search {
        class Query;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class RegexpQueryHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_8226bd0b0fc13dba,
            mid_init$_16c1bb49d8d14571,
            mid_handleQuery_798e2ee4f365e1eb,
            mid_wrapTermStream_6c106c857ee0afd1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RegexpQueryHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RegexpQueryHandler(const RegexpQueryHandler& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_MAX_TOKEN_SIZE;
          static ::java::lang::String *DEFAULT_NGRAM_SUFFIX;
          static ::java::lang::String *DEFAULT_WILDCARD_TOKEN;

          RegexpQueryHandler();
          RegexpQueryHandler(jint);
          RegexpQueryHandler(const ::java::lang::String &, jint, const ::java::lang::String &, const ::java::util::Set &);

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
        extern PyType_Def PY_TYPE_DEF(RegexpQueryHandler);
        extern PyTypeObject *PY_TYPE(RegexpQueryHandler);

        class t_RegexpQueryHandler {
        public:
          PyObject_HEAD
          RegexpQueryHandler object;
          static PyObject *wrap_Object(const RegexpQueryHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
