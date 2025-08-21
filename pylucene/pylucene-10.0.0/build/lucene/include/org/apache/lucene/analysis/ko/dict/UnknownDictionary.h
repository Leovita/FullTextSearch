#ifndef org_apache_lucene_analysis_ko_dict_UnknownDictionary_H
#define org_apache_lucene_analysis_ko_dict_UnknownDictionary_H

#include "org/apache/lucene/analysis/morph/BinaryDictionary.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class UnknownDictionary;
            class UnknownMorphData;
            class CharacterDefinition;
          }
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class UnknownDictionary : public ::org::apache::lucene::analysis::morph::BinaryDictionary {
             public:
              enum {
                mid_init$_3d95c29bddd7ba36,
                mid_getCharacterDefinition_612366fd955b73e5,
                mid_getInstance_58fd5354e8e3ad3b,
                mid_getMorphAttributes_d7def4d2402e4499,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UnknownDictionary(jobject obj) : ::org::apache::lucene::analysis::morph::BinaryDictionary(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UnknownDictionary(const UnknownDictionary& obj) : ::org::apache::lucene::analysis::morph::BinaryDictionary(obj) {}

              UnknownDictionary(const ::java::nio::file::Path &, const ::java::nio::file::Path &, const ::java::nio::file::Path &);

              ::org::apache::lucene::analysis::ko::dict::CharacterDefinition getCharacterDefinition() const;
              static UnknownDictionary getInstance();
              ::org::apache::lucene::analysis::ko::dict::UnknownMorphData getMorphAttributes() const;
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
        namespace ko {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(UnknownDictionary);
            extern PyTypeObject *PY_TYPE(UnknownDictionary);

            class t_UnknownDictionary {
            public:
              PyObject_HEAD
              UnknownDictionary object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_UnknownDictionary *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const UnknownDictionary&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const UnknownDictionary&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
