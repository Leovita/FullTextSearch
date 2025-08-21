#ifndef org_apache_lucene_analysis_compound_hyphenation_CharVector_H
#define org_apache_lucene_analysis_compound_hyphenation_CharVector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {
            class CharVector;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {
          namespace hyphenation {

            class CharVector : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_init$_cc40ee25f19f0868,
                mid_init$_540b2b23d51b1efd,
                mid_init$_e06ffef1ed339658,
                mid_alloc_3c9bba330f083871,
                mid_capacity_20fbf7565993c3d7,
                mid_clear_3720c61b0679eb3e,
                mid_clone_09d6f6341787399d,
                mid_get_92a13ce4196a7e69,
                mid_getArray_77d52ded526199de,
                mid_length_20fbf7565993c3d7,
                mid_put_931c9794de74ba08,
                mid_trimToSize_3720c61b0679eb3e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CharVector(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CharVector(const CharVector& obj) : ::java::lang::Object(obj) {}

              CharVector();
              CharVector(const JArray< jchar > &);
              CharVector(jint);
              CharVector(const JArray< jchar > &, jint);

              jint alloc(jint) const;
              jint capacity() const;
              void clear() const;
              CharVector clone() const;
              jchar get(jint) const;
              JArray< jchar > getArray() const;
              jint length() const;
              void put(jint, jchar) const;
              void trimToSize() const;
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
        namespace compound {
          namespace hyphenation {
            extern PyType_Def PY_TYPE_DEF(CharVector);
            extern PyTypeObject *PY_TYPE(CharVector);

            class t_CharVector {
            public:
              PyObject_HEAD
              CharVector object;
              static PyObject *wrap_Object(const CharVector&);
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
