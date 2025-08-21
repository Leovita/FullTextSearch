#ifndef org_apache_lucene_analysis_compound_hyphenation_PatternConsumer_H
#define org_apache_lucene_analysis_compound_hyphenation_PatternConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class ArrayList;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class PatternConsumer : public ::java::lang::Object {
             public:
              enum {
                mid_addClass_0d82408c6e55bc30,
                mid_addException_b54ed4e18591173a,
                mid_addPattern_3d104da0b5c75e64,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PatternConsumer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PatternConsumer(const PatternConsumer& obj) : ::java::lang::Object(obj) {}

              void addClass(const ::java::lang::String &) const;
              void addException(const ::java::lang::String &, const ::java::util::ArrayList &) const;
              void addPattern(const ::java::lang::String &, const ::java::lang::String &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(PatternConsumer);
            extern PyTypeObject *PY_TYPE(PatternConsumer);

            class t_PatternConsumer {
            public:
              PyObject_HEAD
              PatternConsumer object;
              static PyObject *wrap_Object(const PatternConsumer&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
