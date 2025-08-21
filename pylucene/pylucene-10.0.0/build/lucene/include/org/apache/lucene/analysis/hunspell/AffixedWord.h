#ifndef org_apache_lucene_analysis_hunspell_AffixedWord_H
#define org_apache_lucene_analysis_hunspell_AffixedWord_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace hunspell {
          class AffixedWord$Affix;
          class DictEntry;
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
        namespace hunspell {

          class AffixedWord : public ::java::lang::Object {
           public:
            enum {
              mid_equals_570b5248a6da3ef6,
              mid_getDictEntry_323f61312f786e2b,
              mid_getPrefixes_36830460e10839eb,
              mid_getSuffixes_36830460e10839eb,
              mid_getWord_09a7afff1868fc5e,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AffixedWord(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AffixedWord(const AffixedWord& obj) : ::java::lang::Object(obj) {}

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::analysis::hunspell::DictEntry getDictEntry() const;
            ::java::util::List getPrefixes() const;
            ::java::util::List getSuffixes() const;
            ::java::lang::String getWord() const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(AffixedWord);
          extern PyTypeObject *PY_TYPE(AffixedWord);

          class t_AffixedWord {
          public:
            PyObject_HEAD
            AffixedWord object;
            static PyObject *wrap_Object(const AffixedWord&);
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
