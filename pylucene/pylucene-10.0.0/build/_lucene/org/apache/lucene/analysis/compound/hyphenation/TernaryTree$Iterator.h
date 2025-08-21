#ifndef org_apache_lucene_analysis_compound_hyphenation_TernaryTree$Iterator_H
#define org_apache_lucene_analysis_compound_hyphenation_TernaryTree$Iterator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Enumeration;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class TernaryTree;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class TernaryTree$Iterator : public ::java::lang::Object {
             public:
              enum {
                mid_init$_af0285464cacedbe,
                mid_getValue_6c956faefc706166,
                mid_hasMoreElements_947277eca0748c4e,
                mid_nextElement_09a7afff1868fc5e,
                mid_rewind_3720c61b0679eb3e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TernaryTree$Iterator(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TernaryTree$Iterator(const TernaryTree$Iterator& obj) : ::java::lang::Object(obj) {}

              TernaryTree$Iterator(const ::org::apache::lucene::analysis::compound::hyphenation::TernaryTree &);

              jchar getValue() const;
              jboolean hasMoreElements() const;
              ::java::lang::String nextElement() const;
              void rewind() const;
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
            extern PyType_Def PY_TYPE_DEF(TernaryTree$Iterator);
            extern PyTypeObject *PY_TYPE(TernaryTree$Iterator);

            class t_TernaryTree$Iterator {
            public:
              PyObject_HEAD
              TernaryTree$Iterator object;
              static PyObject *wrap_Object(const TernaryTree$Iterator&);
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
