#ifndef org_apache_lucene_analysis_ja_completion_KatakanaRomanizer_H
#define org_apache_lucene_analysis_ja_completion_KatakanaRomanizer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
      }
      namespace analysis {
        namespace ja {
          namespace completion {
            class KatakanaRomanizer;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace completion {

            class KatakanaRomanizer : public ::java::lang::Object {
             public:
              enum {
                mid_getInstance_e5559ed6ca9a2365,
                mid_romanize_f23690776cb24923,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit KatakanaRomanizer(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              KatakanaRomanizer(const KatakanaRomanizer& obj) : ::java::lang::Object(obj) {}

              static KatakanaRomanizer getInstance();
              ::java::util::List romanize(const ::org::apache::lucene::util::CharsRef &) const;
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
        namespace ja {
          namespace completion {
            extern PyType_Def PY_TYPE_DEF(KatakanaRomanizer);
            extern PyTypeObject *PY_TYPE(KatakanaRomanizer);

            class t_KatakanaRomanizer {
            public:
              PyObject_HEAD
              KatakanaRomanizer object;
              static PyObject *wrap_Object(const KatakanaRomanizer&);
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
