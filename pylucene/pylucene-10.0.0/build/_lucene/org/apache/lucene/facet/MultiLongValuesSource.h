#ifndef org_apache_lucene_facet_MultiLongValuesSource_H
#define org_apache_lucene_facet_MultiLongValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiDoubleValuesSource;
        class MultiLongValues;
        class MultiLongValuesSource;
      }
      namespace search {
        class LongValuesSource;
        class SegmentCacheable;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class MultiLongValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_equals_570b5248a6da3ef6,
            mid_fromIntField_de85653cfd91d972,
            mid_fromLongField_de85653cfd91d972,
            mid_fromSingleValued_f58772a1bc02ff02,
            mid_getValues_ac10d10eebbcd876,
            mid_hashCode_20fbf7565993c3d7,
            mid_toMultiDoubleValuesSource_222188429c91a840,
            mid_toString_09a7afff1868fc5e,
            mid_unwrapSingleton_2f08a78865c615b3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLongValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLongValuesSource(const MultiLongValuesSource& obj) : ::java::lang::Object(obj) {}

          MultiLongValuesSource();

          jboolean equals(const ::java::lang::Object &) const;
          static MultiLongValuesSource fromIntField(const ::java::lang::String &);
          static MultiLongValuesSource fromLongField(const ::java::lang::String &);
          static MultiLongValuesSource fromSingleValued(const ::org::apache::lucene::search::LongValuesSource &);
          ::org::apache::lucene::facet::MultiLongValues getValues(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jint hashCode() const;
          ::org::apache::lucene::facet::MultiDoubleValuesSource toMultiDoubleValuesSource() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::search::LongValuesSource unwrapSingleton(const MultiLongValuesSource &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(MultiLongValuesSource);
        extern PyTypeObject *PY_TYPE(MultiLongValuesSource);

        class t_MultiLongValuesSource {
        public:
          PyObject_HEAD
          MultiLongValuesSource object;
          static PyObject *wrap_Object(const MultiLongValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
