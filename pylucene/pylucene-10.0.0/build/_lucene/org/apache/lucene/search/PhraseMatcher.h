#ifndef org_apache_lucene_search_PhraseMatcher_H
#define org_apache_lucene_search_PhraseMatcher_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PhraseMatcher : public ::java::lang::Object {
         public:
          enum {
            mid_getMatchCost_9b6c3480dac00edf,
            mid_nextMatch_947277eca0748c4e,
            mid_reset_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseMatcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseMatcher(const PhraseMatcher& obj) : ::java::lang::Object(obj) {}

          jfloat getMatchCost() const;
          jboolean nextMatch() const;
          void reset() const;
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
        extern PyType_Def PY_TYPE_DEF(PhraseMatcher);
        extern PyTypeObject *PY_TYPE(PhraseMatcher);

        class t_PhraseMatcher {
        public:
          PyObject_HEAD
          PhraseMatcher object;
          static PyObject *wrap_Object(const PhraseMatcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
