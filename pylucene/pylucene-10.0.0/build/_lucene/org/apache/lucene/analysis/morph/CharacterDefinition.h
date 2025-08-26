#ifndef org_apache_lucene_analysis_morph_CharacterDefinition_H
#define org_apache_lucene_analysis_morph_CharacterDefinition_H

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

          class CharacterDefinition : public ::java::lang::Object {
           public:
            enum {
              mid_getCharacterClass_506402600b0c5fc4,
              mid_isGroup_96a1e5bdb33dde4e,
              mid_isInvoke_96a1e5bdb33dde4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharacterDefinition(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharacterDefinition(const CharacterDefinition& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *FILENAME_SUFFIX;

            jbyte getCharacterClass(jchar) const;
            jboolean isGroup(jchar) const;
            jboolean isInvoke(jchar) const;
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

#endif
