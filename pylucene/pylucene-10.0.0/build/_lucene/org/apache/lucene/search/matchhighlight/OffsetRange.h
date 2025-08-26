#ifndef org_apache_lucene_search_matchhighlight_OffsetRange_H
#define org_apache_lucene_search_matchhighlight_OffsetRange_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class OffsetRange;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class OffsetRange : public ::java::lang::Object {
           public:
            enum {
              mid_init$_645c25455f5b9b1c,
              mid_clone_9cfa6cc676e1d6e4,
              mid_contains_2363290fa0ec4d82,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_length_bd89ce15dad49192,
              mid_slice_c383ac973ee93431,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_from,
              fid_to,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetRange(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetRange(const OffsetRange& obj) : ::java::lang::Object(obj) {}

            jint _get_from() const;
            jint _get_to() const;

            OffsetRange(jint, jint);

            OffsetRange clone() const;
            jboolean contains(const OffsetRange &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jint length() const;
            OffsetRange slice(jint, jint) const;
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(OffsetRange);
          extern PyTypeObject *PY_TYPE(OffsetRange);

          class t_OffsetRange {
          public:
            PyObject_HEAD
            OffsetRange object;
            static PyObject *wrap_Object(const OffsetRange&);
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
