#ifndef org_apache_lucene_search_matchhighlight_OffsetRange_H
#define org_apache_lucene_search_matchhighlight_OffsetRange_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Cloneable;
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
              mid_init$_e13cff512ebda969,
              mid_clone_906ac5559d6968ac,
              mid_contains_a9f8a07e17386c42,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_length_20fbf7565993c3d7,
              mid_slice_d30ec62b6c5f74e9,
              mid_toString_09a7afff1868fc5e,
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
