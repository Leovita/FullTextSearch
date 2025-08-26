#ifndef org_apache_lucene_search_LongValuesSource$ConstantLongValuesSource_H
#define org_apache_lucene_search_LongValuesSource$ConstantLongValuesSource_H

#include "org/apache/lucene/search/LongValuesSource.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LongValues;
        class DoubleValues;
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
            mid_equals_00d17418847797d4,
            mid_getValue_0f176418e3e16541,
            mid_getValues_a89f934572e6aea6,
            mid_hashCode_bd89ce15dad49192,
            mid_isCacheable_8e9f6225f14d0ebe,
            mid_needsScores_9aa4f33e82ea333f,
            mid_rewrite_1a7a7c9f23bd616a,
            mid_toString_e7df854526d67fa3,
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
