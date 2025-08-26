#ifndef org_apache_lucene_facet_MultiLongValuesSource_H
#define org_apache_lucene_facet_MultiLongValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiLongValuesSource;
        class MultiDoubleValuesSource;
        class MultiLongValues;
      }
      namespace search {
        class SegmentCacheable;
        class LongValuesSource;
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
      namespace facet {

        class MultiLongValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_equals_00d17418847797d4,
            mid_fromIntField_ee6ca37eb829599d,
            mid_fromLongField_ee6ca37eb829599d,
            mid_fromSingleValued_3f11c9d517d44f4c,
            mid_getValues_99cf0978ec7e5dd3,
            mid_hashCode_bd89ce15dad49192,
            mid_toMultiDoubleValuesSource_33007bef968aacf3,
            mid_toString_e7df854526d67fa3,
            mid_unwrapSingleton_0db0e966b46ec122,
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
