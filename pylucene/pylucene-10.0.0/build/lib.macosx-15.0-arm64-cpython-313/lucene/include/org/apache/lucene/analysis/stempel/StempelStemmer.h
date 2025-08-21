#ifndef org_apache_lucene_analysis_stempel_StempelStemmer_H
#define org_apache_lucene_analysis_stempel_StempelStemmer_H

#include "java/lang/Object.h"

namespace org {
  namespace egothor {
    namespace stemmer {
      class Trie;
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class CharSequence;
    class StringBuilder;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace stempel {

          class StempelStemmer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_37e23ef4361d4c28,
              mid_init$_7c7816636a302787,
              mid_load_151ada2cf66e74a6,
              mid_stem_060d02c19b7b0ef0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StempelStemmer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StempelStemmer(const StempelStemmer& obj) : ::java::lang::Object(obj) {}

            StempelStemmer(const ::java::io::InputStream &);
            StempelStemmer(const ::org::egothor::stemmer::Trie &);

            static ::org::egothor::stemmer::Trie load(const ::java::io::InputStream &);
            ::java::lang::StringBuilder stem(const ::java::lang::CharSequence &) const;
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
        namespace stempel {
          extern PyType_Def PY_TYPE_DEF(StempelStemmer);
          extern PyTypeObject *PY_TYPE(StempelStemmer);

          class t_StempelStemmer {
          public:
            PyObject_HEAD
            StempelStemmer object;
            static PyObject *wrap_Object(const StempelStemmer&);
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
