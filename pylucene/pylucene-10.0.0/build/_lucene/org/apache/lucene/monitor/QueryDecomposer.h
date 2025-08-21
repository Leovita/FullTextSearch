#ifndef org_apache_lucene_monitor_QueryDecomposer_H
#define org_apache_lucene_monitor_QueryDecomposer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanQuery;
        class BoostQuery;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class QueryDecomposer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_decompose_fa57c664c3602578,
            mid_decomposeBoolean_d978dfecad4ac5ed,
            mid_decomposeBoostQuery_27ad7103ce3dfe1d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryDecomposer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryDecomposer(const QueryDecomposer& obj) : ::java::lang::Object(obj) {}

          QueryDecomposer();

          ::java::util::Set decompose(const ::org::apache::lucene::search::Query &) const;
          ::java::util::Set decomposeBoolean(const ::org::apache::lucene::search::BooleanQuery &) const;
          ::java::util::Set decomposeBoostQuery(const ::org::apache::lucene::search::BoostQuery &) const;
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
        extern PyType_Def PY_TYPE_DEF(QueryDecomposer);
        extern PyTypeObject *PY_TYPE(QueryDecomposer);

        class t_QueryDecomposer {
        public:
          PyObject_HEAD
          QueryDecomposer object;
          static PyObject *wrap_Object(const QueryDecomposer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
