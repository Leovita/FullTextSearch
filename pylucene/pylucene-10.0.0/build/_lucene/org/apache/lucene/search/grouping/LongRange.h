#ifndef org_apache_lucene_search_grouping_LongRange_H
#define org_apache_lucene_search_grouping_LongRange_H

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
      namespace search {
        namespace grouping {

          class LongRange : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9ebf8c93de5f0fe1,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_max,
              fid_min,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRange(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRange(const LongRange& obj) : ::java::lang::Object(obj) {}

            jlong _get_max() const;
            void _set_max(jlong) const;
            jlong _get_min() const;
            void _set_min(jlong) const;

            LongRange(jlong, jlong);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(LongRange);
          extern PyTypeObject *PY_TYPE(LongRange);

          class t_LongRange {
          public:
            PyObject_HEAD
            LongRange object;
            static PyObject *wrap_Object(const LongRange&);
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
