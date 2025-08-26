#ifndef org_apache_lucene_misc_HighFreqTerms_H
#define org_apache_lucene_misc_HighFreqTerms_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace misc {
        class TermStats;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Exception;
    class String;
  }
  namespace util {
    class Comparator;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {

        class HighFreqTerms : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_getHighFreqTerms_c72f33abd9084b1a,
            mid_main_1f90f2fcbe43e50d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HighFreqTerms(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HighFreqTerms(const HighFreqTerms& obj) : ::java::lang::Object(obj) {}

          static jint DEFAULT_NUMTERMS;

          HighFreqTerms();

          static JArray< ::org::apache::lucene::misc::TermStats > getHighFreqTerms(const ::org::apache::lucene::index::IndexReader &, jint, const ::java::lang::String &, const ::java::util::Comparator &);
          static void main(const JArray< ::java::lang::String > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(HighFreqTerms);
        extern PyTypeObject *PY_TYPE(HighFreqTerms);

        class t_HighFreqTerms {
        public:
          PyObject_HEAD
          HighFreqTerms object;
          static PyObject *wrap_Object(const HighFreqTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
