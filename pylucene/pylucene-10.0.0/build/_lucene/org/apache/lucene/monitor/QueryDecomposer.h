#ifndef org_apache_lucene_monitor_QueryDecomposer_H
#define org_apache_lucene_monitor_QueryDecomposer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BoostQuery;
        class Query;
        class BooleanQuery;
      }
    }
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
            mid_init$_e7bdbe105ce1bafb,
            mid_decompose_ca9fd20ba851b2a9,
            mid_decomposeBoolean_77a2b729f26c8c2d,
            mid_decomposeBoostQuery_9ad3c2c6cb778fe4,
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
