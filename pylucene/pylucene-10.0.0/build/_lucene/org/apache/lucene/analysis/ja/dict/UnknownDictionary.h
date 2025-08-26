#ifndef org_apache_lucene_analysis_ja_dict_UnknownDictionary_H
#define org_apache_lucene_analysis_ja_dict_UnknownDictionary_H

#include "org/apache/lucene/analysis/morph/BinaryDictionary.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class UnknownMorphData;
            class CharacterDefinition;
            class UnknownDictionary;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
        namespace ja {
          namespace dict {

            class UnknownDictionary : public ::org::apache::lucene::analysis::morph::BinaryDictionary {
             public:
              enum {
                mid_init$_96dc54d783818b32,
                mid_getCharacterDefinition_a7344a5617c268a2,
                mid_getInstance_b380869a39c891af,
                mid_getMorphAttributes_401ef722c6630ade,
                mid_lookup_872baf22ed11fbaa,
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

              ::org::apache::lucene::analysis::ja::dict::CharacterDefinition getCharacterDefinition() const;
              static UnknownDictionary getInstance();
              ::org::apache::lucene::analysis::ja::dict::UnknownMorphData getMorphAttributes() const;
              jint lookup(const JArray< jchar > &, jint, jint) const;
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
