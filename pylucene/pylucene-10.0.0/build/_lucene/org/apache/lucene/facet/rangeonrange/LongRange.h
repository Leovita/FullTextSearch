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
              mid_init$_e89bb31d1592d697,
              mid_init$_ff5ed639640787c7,
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
