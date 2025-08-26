#ifndef org_apache_lucene_analysis_morph_CharacterDefinition$LookupCharacterClass_H
#define org_apache_lucene_analysis_morph_CharacterDefinition$LookupCharacterClass_H

#include "java/lang/Object.h"

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
        namespace morph {

          class CharacterDefinition$LookupCharacterClass : public ::java::lang::Object {
           public:
            enum {
              mid_lookupCharacterClass_3c48362581bf518f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharacterDefinition$LookupCharacterClass(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharacterDefinition$LookupCharacterClass(const CharacterDefinition$LookupCharacterClass& obj) : ::java::lang::Object(obj) {}

            jbyte lookupCharacterClass(const ::java::lang::String &) const;
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
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(CharacterDefinition$LookupCharacterClass);
          extern PyTypeObject *PY_TYPE(CharacterDefinition$LookupCharacterClass);

          class t_CharacterDefinition$LookupCharacterClass {
          public:
            PyObject_HEAD
            CharacterDefinition$LookupCharacterClass object;
            static PyObject *wrap_Object(const CharacterDefinition$LookupCharacterClass&);
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
