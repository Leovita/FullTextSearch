#ifndef org_apache_lucene_search_LongValuesSource_H
#define org_apache_lucene_search_LongValuesSource_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
        class DoubleValues;
        class LongValues;
        class SortField;
        class LongValuesSource;
        class SegmentCacheable;
        class IndexSearcher;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class LongValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_constant_db65bebf8f5a11bb,
            mid_equals_570b5248a6da3ef6,
            mid_fromIntField_a8c5a945f16e5905,
            mid_fromLongField_a8c5a945f16e5905,
            mid_getSortField_33273beb7e6f6fa1,
            mid_getValues_8c03d5035a4ada0c,
            mid_hashCode_20fbf7565993c3d7,
            mid_needsScores_947277eca0748c4e,
            mid_rewrite_1d4782bd2f4d5e85,
            mid_toDoubleValuesSource_7219b817ce6d1d1a,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValuesSource(const LongValuesSource& obj) : ::java::lang::Object(obj) {}

          LongValuesSource();

          static LongValuesSource constant(jlong);
          jboolean equals(const ::java::lang::Object &) const;
          static LongValuesSource fromIntField(const ::java::lang::String &);
          static LongValuesSource fromLongField(const ::java::lang::String &);
          ::org::apache::lucene::search::SortField getSortField(jboolean) const;
          ::org::apache::lucene::search::LongValues getValues(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DoubleValues &) const;
          jint hashCode() const;
          jboolean needsScores() const;
          LongValuesSource rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          ::org::apache::lucene::search::DoubleValuesSource toDoubleValuesSource() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(LongValuesSource);
        extern PyTypeObject *PY_TYPE(LongValuesSource);

        class t_LongValuesSource {
        public:
          PyObject_HEAD
          LongValuesSource object;
          static PyObject *wrap_Object(const LongValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
