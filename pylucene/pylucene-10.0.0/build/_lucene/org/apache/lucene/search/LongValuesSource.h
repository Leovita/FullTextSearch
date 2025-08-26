#ifndef org_apache_lucene_search_LongValuesSource_H
#define org_apache_lucene_search_LongValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
        class SegmentCacheable;
        class LongValues;
        class DoubleValues;
        class LongValuesSource;
        class SortField;
        class IndexSearcher;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_constant_4b6add406f8e8618,
            mid_equals_00d17418847797d4,
            mid_fromIntField_e96f3be9115c0ad7,
            mid_fromLongField_e96f3be9115c0ad7,
            mid_getSortField_6b771f2dc8fe37aa,
            mid_getValues_a89f934572e6aea6,
            mid_hashCode_bd89ce15dad49192,
            mid_needsScores_9aa4f33e82ea333f,
            mid_rewrite_1a7a7c9f23bd616a,
            mid_toDoubleValuesSource_a04bc8c3654a6fd5,
            mid_toString_e7df854526d67fa3,
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
