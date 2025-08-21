#ifndef org_apache_lucene_analysis_ja_dict_CharacterDefinition_H
#define org_apache_lucene_analysis_ja_dict_CharacterDefinition_H

#include "org/apache/lucene/analysis/morph/CharacterDefinition.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class CharacterDefinition;
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
        namespace ja {
          namespace dict {

            class CharacterDefinition : public ::org::apache::lucene::analysis::morph::CharacterDefinition {
             public:
              enum {
                mid_getInstance_689c6cd4ba1baa32,
                mid_isKanji_4e84a8c37896b7c5,
                mid_lookupCharacterClass_0048728f9019731d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CharacterDefinition(jobject obj) : ::org::apache::lucene::analysis::morph::CharacterDefinition(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CharacterDefinition(const CharacterDefinition& obj) : ::org::apache::lucene::analysis::morph::CharacterDefinition(obj) {}

              static jbyte ALPHA;
              static jint CLASS_COUNT;
              static jbyte CYRILLIC;
              static jbyte DEFAULT;
              static jbyte GREEK;
              static jbyte HIRAGANA;
              static jbyte KANJI;
              static jbyte KANJINUMERIC;
              static jbyte KATAKANA;
              static jbyte NGRAM;
              static jbyte NUMERIC;
              static jbyte SPACE;
              static jbyte SYMBOL;

              static CharacterDefinition getInstance();
              jboolean isKanji(jchar) const;
              static jbyte lookupCharacterClass(const ::java::lang::String &);
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
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(CharacterDefinition);
            extern PyTypeObject *PY_TYPE(CharacterDefinition);

            class t_CharacterDefinition {
            public:
              PyObject_HEAD
              CharacterDefinition object;
              static PyObject *wrap_Object(const CharacterDefinition&);
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
