#ifndef org_apache_lucene_search_LongValuesSource$ConstantLongValuesSource_H
#define org_apache_lucene_search_LongValuesSource$ConstantLongValuesSource_H

#include "org/apache/lucene/search/LongValuesSource.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValues;
        class LongValues;
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

        class LongValuesSource$ConstantLongValuesSource : public ::org::apache::lucene::search::LongValuesSource {
         public:
          enum {
            mid_equals_570b5248a6da3ef6,
            mid_getValue_16939d9d0a9a9721,
            mid_getValues_8c03d5035a4ada0c,
            mid_hashCode_20fbf7565993c3d7,
            mid_isCacheable_03101e9518c66be0,
            mid_needsScores_947277eca0748c4e,
            mid_rewrite_1d4782bd2f4d5e85,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongValuesSource$ConstantLongValuesSource(jobject obj) : ::org::apache::lucene::search::LongValuesSource(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongValuesSource$ConstantLongValuesSource(const LongValuesSource$ConstantLongValuesSource& obj) : ::org::apache::lucene::search::LongValuesSource(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          jlong getValue() const;
          ::org::apache::lucene::search::LongValues getValues(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DoubleValues &) const;
          jint hashCode() const;
          jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jboolean needsScores() const;
          ::org::apache::lucene::search::LongValuesSource rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongValuesSource$ConstantLongValuesSource);
        extern PyTypeObject *PY_TYPE(LongValuesSource$ConstantLongValuesSource);

        class t_LongValuesSource$ConstantLongValuesSource {
        public:
          PyObject_HEAD
          LongValuesSource$ConstantLongValuesSource object;
          static PyObject *wrap_Object(const LongValuesSource$ConstantLongValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
