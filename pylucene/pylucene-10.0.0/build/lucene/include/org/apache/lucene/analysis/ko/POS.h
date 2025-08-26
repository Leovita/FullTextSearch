#ifndef org_apache_lucene_analysis_ko_POS_H
#define org_apache_lucene_analysis_ko_POS_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class POS$Type;
          class POS$Tag;
        }
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
        namespace ko {

          class POS : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_resolveTag_8571da0583036b9e,
              mid_resolveTag_6093701d2b514446,
              mid_resolveType_bed5413d169eee80,
              mid_resolveType_777f0a758e6dfcd0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit POS(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            POS(const POS& obj) : ::java::lang::Object(obj) {}

            POS();

            static ::org::apache::lucene::analysis::ko::POS$Tag resolveTag(const ::java::lang::String &);
            static ::org::apache::lucene::analysis::ko::POS$Tag resolveTag(jbyte);
            static ::org::apache::lucene::analysis::ko::POS$Type resolveType(const ::java::lang::String &);
            static ::org::apache::lucene::analysis::ko::POS$Type resolveType(jbyte);
          };
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(POS);
          extern PyTypeObject *PY_TYPE(POS);

          class t_POS {
          public:
            PyObject_HEAD
            POS object;
            static PyObject *wrap_Object(const POS&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
