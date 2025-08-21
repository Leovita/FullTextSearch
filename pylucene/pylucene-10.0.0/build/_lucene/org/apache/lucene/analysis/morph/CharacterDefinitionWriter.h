#ifndef org_apache_lucene_analysis_morph_CharacterDefinitionWriter_H
#define org_apache_lucene_analysis_morph_CharacterDefinitionWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {
          class CharacterDefinition$LookupCharacterClass;
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
        namespace morph {

          class CharacterDefinitionWriter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_11189679a42a6e43,
              mid_putCharacterCategory_31f7ce1c11bbaf5e,
              mid_putInvokeDefinition_ad86ada88a1b06a4,
              mid_write_d38f685b798c535e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharacterDefinitionWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharacterDefinitionWriter(const CharacterDefinitionWriter& obj) : ::java::lang::Object(obj) {}

            CharacterDefinitionWriter(const ::java::lang::Class &, jbyte, jint, const ::org::apache::lucene::analysis::morph::CharacterDefinition$LookupCharacterClass &);

            void putCharacterCategory(jint, const ::java::lang::String &) const;
            void putInvokeDefinition(const ::java::lang::String &, jint, jint, jint) const;
            void write(const ::java::nio::file::Path &, const ::java::lang::String &, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(CharacterDefinitionWriter);
          extern PyTypeObject *PY_TYPE(CharacterDefinitionWriter);

          class t_CharacterDefinitionWriter {
          public:
            PyObject_HEAD
            CharacterDefinitionWriter object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharacterDefinitionWriter *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharacterDefinitionWriter&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharacterDefinitionWriter&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
