#ifndef org_apache_lucene_facet_rangeonrange_DoubleRange_H
#define org_apache_lucene_facet_rangeonrange_DoubleRange_H

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

          class DoubleRange : public ::org::apache::lucene::facet::rangeonrange::Range {
           public:
            enum {
              mid_init$_6fd87e0914d2bdc7,
              mid_init$_e0518f60cba95a7a,
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

            explicit DoubleRange(jobject obj) : ::org::apache::lucene::facet::rangeonrange::Range(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRange(const DoubleRange& obj) : ::org::apache::lucene::facet::rangeonrange::Range(obj) {}

            JArray< jdouble > _get_max() const;
            JArray< jdouble > _get_min() const;

            DoubleRange(const ::java::lang::String &, const JArray< jdouble > &, const JArray< jdouble > &);
            DoubleRange(const ::java::lang::String &, jdouble, jboolean, jdouble, jboolean);

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
          extern PyType_Def PY_TYPE_DEF(DoubleRange);
          extern PyTypeObject *PY_TYPE(DoubleRange);

          class t_DoubleRange {
          public:
            PyObject_HEAD
            DoubleRange object;
            static PyObject *wrap_Object(const DoubleRange&);
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
