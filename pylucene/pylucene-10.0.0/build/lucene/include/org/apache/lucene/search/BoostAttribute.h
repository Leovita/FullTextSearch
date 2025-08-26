#ifndef org_apache_lucene_search_BoostAttribute_H
#define org_apache_lucene_search_BoostAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class BoostAttribute : public ::org::apache::lucene::util::Attribute {
         public:
          enum {
            mid_getBoost_8b62236f0e4d0dbc,
            mid_setBoost_675f4cb9a2529ee0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BoostAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BoostAttribute(const BoostAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

          static jfloat DEFAULT_BOOST;

          jfloat getBoost() const;
          void setBoost(jfloat) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(BoostAttribute);
        extern PyTypeObject *PY_TYPE(BoostAttribute);

        class t_BoostAttribute {
        public:
          PyObject_HEAD
          BoostAttribute object;
          static PyObject *wrap_Object(const BoostAttribute&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
