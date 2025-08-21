#ifndef org_apache_lucene_analysis_ja_completion_CharSequenceUtils_H
#define org_apache_lucene_analysis_ja_completion_CharSequenceUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class String;
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

            class CharSequenceUtils : public ::java::lang::Object {
             public:
              enum {
                mid_isFullWidthLowercaseAlphabet_4e84a8c37896b7c5,
                mid_isKana_7fa88c8af67956ed,
                mid_isKatakanaOrHWAlphabets_7fa88c8af67956ed,
                mid_isLowercaseAlphabets_7fa88c8af67956ed,
                mid_toKatakana_6a539e37dce707b2,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CharSequenceUtils(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CharSequenceUtils(const CharSequenceUtils& obj) : ::java::lang::Object(obj) {}

              static jboolean isFullWidthLowercaseAlphabet(jchar);
              static jboolean isKana(const ::java::lang::CharSequence &);
              static jboolean isKatakanaOrHWAlphabets(const ::java::lang::CharSequence &);
              static jboolean isLowercaseAlphabets(const ::java::lang::CharSequence &);
              static ::java::lang::String toKatakana(const ::java::lang::CharSequence &);
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
            extern PyType_Def PY_TYPE_DEF(CharSequenceUtils);
            extern PyTypeObject *PY_TYPE(CharSequenceUtils);

            class t_CharSequenceUtils {
            public:
              PyObject_HEAD
              CharSequenceUtils object;
              static PyObject *wrap_Object(const CharSequenceUtils&);
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
