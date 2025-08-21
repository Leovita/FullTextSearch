#ifndef org_apache_lucene_analysis_Analyzer$ReuseStrategy_H
#define org_apache_lucene_analysis_Analyzer$ReuseStrategy_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
        class Analyzer$TokenStreamComponents;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class Analyzer$ReuseStrategy : public ::java::lang::Object {
         public:
          enum {
            mid_getReusableComponents_0bcf18669782cddc,
            mid_setReusableComponents_2f79c0395cbb52c1,
            mid_getStoredValue_ff4cae136ad1ebc3,
            mid_setStoredValue_7fe3cb6de8305b3c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Analyzer$ReuseStrategy(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Analyzer$ReuseStrategy(const Analyzer$ReuseStrategy& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents getReusableComponents(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &) const;
          void setReusableComponents(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer$TokenStreamComponents &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(Analyzer$ReuseStrategy);
        extern PyTypeObject *PY_TYPE(Analyzer$ReuseStrategy);

        class t_Analyzer$ReuseStrategy {
        public:
          PyObject_HEAD
          Analyzer$ReuseStrategy object;
          static PyObject *wrap_Object(const Analyzer$ReuseStrategy&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
