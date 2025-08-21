#ifndef org_apache_lucene_facet_rangeonrange_Range_H
#define org_apache_lucene_facet_rangeonrange_Range_H

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
      namespace facet {
        namespace rangeonrange {

          class Range : public ::java::lang::Object {
           public:
            enum {
              mid_getLabelsFromRanges_4959fea05e775a9b,
              mid_failNoMatch_3720c61b0679eb3e,
              max_mid
            };

            enum {
              fid_dims,
              fid_label,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Range(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Range(const Range& obj) : ::java::lang::Object(obj) {}

            jint _get_dims() const;
            ::java::lang::String _get_label() const;
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
      namespace facet {
        namespace rangeonrange {
          extern PyType_Def PY_TYPE_DEF(Range);
          extern PyTypeObject *PY_TYPE(Range);

          class t_Range {
          public:
            PyObject_HEAD
            Range object;
            static PyObject *wrap_Object(const Range&);
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
