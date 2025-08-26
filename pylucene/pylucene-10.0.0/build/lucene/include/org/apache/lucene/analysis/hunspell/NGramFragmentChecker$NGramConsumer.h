#ifndef org_apache_lucene_analysis_hunspell_NGramFragmentChecker$NGramConsumer_H
#define org_apache_lucene_analysis_hunspell_NGramFragmentChecker$NGramConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {

          class NGramFragmentChecker$NGramConsumer : public ::java::lang::Object {
           public:
            enum {
              mid_processNGram_1e5b55d602c23ab6,
              mid_processNGrams_ffbe10ba4d4b9bbc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NGramFragmentChecker$NGramConsumer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NGramFragmentChecker$NGramConsumer(const NGramFragmentChecker$NGramConsumer& obj) : ::java::lang::Object(obj) {}

            void processNGram(const ::java::lang::CharSequence &, jint, jint) const;
            void processNGrams(jint, const ::java::lang::CharSequence &) const;
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
        namespace hunspell {
          extern PyType_Def PY_TYPE_DEF(NGramFragmentChecker$NGramConsumer);
          extern PyTypeObject *PY_TYPE(NGramFragmentChecker$NGramConsumer);

          class t_NGramFragmentChecker$NGramConsumer {
          public:
            PyObject_HEAD
            NGramFragmentChecker$NGramConsumer object;
            static PyObject *wrap_Object(const NGramFragmentChecker$NGramConsumer&);
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
