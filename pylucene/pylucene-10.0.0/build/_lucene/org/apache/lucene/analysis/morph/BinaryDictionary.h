#ifndef org_apache_lucene_analysis_morph_BinaryDictionary_H
#define org_apache_lucene_analysis_morph_BinaryDictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
      namespace analysis {
        namespace morph {
          class Dictionary;
          class MorphData;
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

          class BinaryDictionary : public ::java::lang::Object {
           public:
            enum {
              mid_lookupWordIds_b7a99778e1046454,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BinaryDictionary(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BinaryDictionary(const BinaryDictionary& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *DICT_FILENAME_SUFFIX;
            static ::java::lang::String *POSDICT_FILENAME_SUFFIX;
            static ::java::lang::String *TARGETMAP_FILENAME_SUFFIX;

            void lookupWordIds(jint, const ::org::apache::lucene::util::IntsRef &) const;
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
          extern PyType_Def PY_TYPE_DEF(BinaryDictionary);
          extern PyTypeObject *PY_TYPE(BinaryDictionary);

          class t_BinaryDictionary {
          public:
            PyObject_HEAD
            BinaryDictionary object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_BinaryDictionary *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const BinaryDictionary&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const BinaryDictionary&, PyTypeObject *);
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
