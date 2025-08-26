#ifndef org_apache_lucene_analysis_morph_DictionaryEntryWriter_H
#define org_apache_lucene_analysis_morph_DictionaryEntryWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {

          class DictionaryEntryWriter : public ::java::lang::Object {
           public:
            enum {
              mid_currentPosition_bd89ce15dad49192,
              mid_putEntry_bee55f3c003b8000,
              mid_writePosDict_2f2391f9dc855928,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DictionaryEntryWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DictionaryEntryWriter(const DictionaryEntryWriter& obj) : ::java::lang::Object(obj) {}

            jint currentPosition() const;
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
          extern PyType_Def PY_TYPE_DEF(DictionaryEntryWriter);
          extern PyTypeObject *PY_TYPE(DictionaryEntryWriter);

          class t_DictionaryEntryWriter {
          public:
            PyObject_HEAD
            DictionaryEntryWriter object;
            static PyObject *wrap_Object(const DictionaryEntryWriter&);
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
