#ifndef org_apache_lucene_analysis_ko_tokenattributes_ReadingAttribute_H
#define org_apache_lucene_analysis_ko_tokenattributes_ReadingAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class Token;
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
          namespace tokenattributes {

            class ReadingAttribute : public ::org::apache::lucene::util::Attribute {
             public:
              enum {
                mid_getReading_e7df854526d67fa3,
                mid_setToken_3352cfaa0db5996d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ReadingAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ReadingAttribute(const ReadingAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

              ::java::lang::String getReading() const;
              void setToken(const ::org::apache::lucene::analysis::ko::Token &) const;
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
        namespace ko {
          namespace tokenattributes {
            extern PyType_Def PY_TYPE_DEF(ReadingAttribute);
            extern PyTypeObject *PY_TYPE(ReadingAttribute);

            class t_ReadingAttribute {
            public:
              PyObject_HEAD
              ReadingAttribute object;
              static PyObject *wrap_Object(const ReadingAttribute&);
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
