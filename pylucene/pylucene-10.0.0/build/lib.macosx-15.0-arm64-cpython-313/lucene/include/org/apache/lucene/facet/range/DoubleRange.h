#ifndef org_apache_lucene_facet_range_DoubleRange_H
#define org_apache_lucene_facet_range_DoubleRange_H

#include "org/apache/lucene/facet/range/Range.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class DoubleValuesSource;
      }
      namespace facet {
        class MultiDoubleValuesSource;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class DoubleRange : public ::org::apache::lucene::facet::range::Range {
           public:
            enum {
              mid_init$_e0518f60cba95a7a,
              mid_accept_9c3aeb3f8504878d,
              mid_equals_570b5248a6da3ef6,
              mid_getQuery_516398e1e26f90cf,
              mid_getQuery_03dfa7e6012c9b90,
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

            explicit DoubleRange(jobject obj) : ::org::apache::lucene::facet::range::Range(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRange(const DoubleRange& obj) : ::org::apache::lucene::facet::range::Range(obj) {}

            jdouble _get_max() const;
            jdouble _get_min() const;

            DoubleRange(const ::java::lang::String &, jdouble, jboolean, jdouble, jboolean);

            jboolean accept(jdouble) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Query getQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::facet::MultiDoubleValuesSource &) const;
            ::org::apache::lucene::search::Query getQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::DoubleValuesSource &) const;
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
