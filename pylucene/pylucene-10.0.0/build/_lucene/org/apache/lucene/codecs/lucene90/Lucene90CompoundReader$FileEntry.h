#ifndef org_apache_lucene_codecs_lucene90_Lucene90CompoundReader$FileEntry_H
#define org_apache_lucene_codecs_lucene90_Lucene90CompoundReader$FileEntry_H

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
      namespace codecs {
        namespace lucene90 {

          class Lucene90CompoundReader$FileEntry : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90CompoundReader$FileEntry(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90CompoundReader$FileEntry(const Lucene90CompoundReader$FileEntry& obj) : ::java::lang::Object(obj) {}

            Lucene90CompoundReader$FileEntry();
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
      namespace codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90CompoundReader$FileEntry);
          extern PyTypeObject *PY_TYPE(Lucene90CompoundReader$FileEntry);

          class t_Lucene90CompoundReader$FileEntry {
          public:
            PyObject_HEAD
            Lucene90CompoundReader$FileEntry object;
            static PyObject *wrap_Object(const Lucene90CompoundReader$FileEntry&);
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
