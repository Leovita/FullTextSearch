#ifndef org_apache_lucene_facet_rangeonrange_LongRange_H
#define org_apache_lucene_facet_rangeonrange_LongRange_H

#include "org/apache/lucene/facet/rangeonrange/Range.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace rangeonrange {

          class LongRange : public ::org::apache::lucene::facet::rangeonrange::Range {
           public:
            enum {
              mid_init$_3f569b0deb60acc0,
              mid_init$_288e17a8f79d2853,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
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

            explicit LongRange(jobject obj) : ::org::apache::lucene::facet::rangeonrange::Range(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRange(const LongRange& obj) : ::org::apache::lucene::facet::rangeonrange::Range(obj) {}

            JArray< jlong > _get_max() const;
            JArray< jlong > _get_min() const;

            LongRange(const ::java::lang::String &, const JArray< jlong > &, const JArray< jlong > &);
            LongRange(const ::java::lang::String &, jlong, jboolean, jlong, jboolean);

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
      namespace facet {
        namespace rangeonrange {
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
