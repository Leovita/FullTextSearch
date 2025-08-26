#ifndef org_apache_lucene_facet_range_LongRange_H
#define org_apache_lucene_facet_range_LongRange_H

#include "org/apache/lucene/facet/range/Range.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiLongValuesSource;
      }
      namespace search {
        class Query;
        class LongValuesSource;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class LongRange : public ::org::apache::lucene::facet::range::Range {
           public:
            enum {
              mid_init$_ff5ed639640787c7,
              mid_accept_eae0b285d107fcb0,
              mid_equals_00d17418847797d4,
              mid_getQuery_cadd8e4ac3301d68,
              mid_getQuery_dfe82c6aea2abd76,
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

            explicit LongRange(jobject obj) : ::org::apache::lucene::facet::range::Range(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRange(const LongRange& obj) : ::org::apache::lucene::facet::range::Range(obj) {}

            jlong _get_max() const;
            jlong _get_min() const;

            LongRange(const ::java::lang::String &, jlong, jboolean, jlong, jboolean);

            jboolean accept(jlong) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Query getQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::facet::MultiLongValuesSource &) const;
            ::org::apache::lucene::search::Query getQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::LongValuesSource &) const;
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
        namespace range {
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
