#ifndef org_apache_lucene_util_Accountables_H
#define org_apache_lucene_util_Accountables_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Accountables : public ::java::lang::Object {
         public:
          enum {
            mid_namedAccountable_666140f9ddda658b,
            mid_namedAccountable_9b010ce3d169c965,
            mid_namedAccountable_5998598d7d72841f,
            mid_namedAccountables_7e053bb3e047fc24,
            mid_toString_7f318ab194b9df4d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Accountables(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Accountables(const Accountables& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::util::Accountable namedAccountable(const ::java::lang::String &, jlong);
          static ::org::apache::lucene::util::Accountable namedAccountable(const ::java::lang::String &, const ::org::apache::lucene::util::Accountable &);
          static ::org::apache::lucene::util::Accountable namedAccountable(const ::java::lang::String &, const ::java::util::Collection &, jlong);
          static ::java::util::Collection namedAccountables(const ::java::lang::String &, const ::java::util::Map &);
          static ::java::lang::String toString(const ::org::apache::lucene::util::Accountable &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(Accountables);
        extern PyTypeObject *PY_TYPE(Accountables);

        class t_Accountables {
        public:
          PyObject_HEAD
          Accountables object;
          static PyObject *wrap_Object(const Accountables&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
