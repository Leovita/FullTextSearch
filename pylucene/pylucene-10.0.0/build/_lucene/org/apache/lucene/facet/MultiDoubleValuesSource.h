#ifndef org_apache_lucene_facet_MultiDoubleValuesSource_H
#define org_apache_lucene_facet_MultiDoubleValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiLongValuesSource;
        class MultiDoubleValuesSource;
        class MultiDoubleValues;
      }
      namespace search {
        class DoubleValuesSource;
        class SegmentCacheable;
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
  namespace util {
    namespace function {
      class LongToDoubleFunction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class MultiDoubleValuesSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_equals_00d17418847797d4,
            mid_fromDoubleField_72c3829c6c186ecd,
            mid_fromField_00c3451d8c07c4df,
            mid_fromFloatField_72c3829c6c186ecd,
            mid_fromIntField_72c3829c6c186ecd,
            mid_fromLongField_72c3829c6c186ecd,
            mid_fromSingleValued_9ba879c60f91ac9c,
            mid_getValues_a39e386daa7385ac,
            mid_hashCode_bd89ce15dad49192,
            mid_toMultiLongValuesSource_d66ed01f8db3adc9,
            mid_toSortableMultiLongValuesSource_d66ed01f8db3adc9,
            mid_toString_e7df854526d67fa3,
            mid_unwrapSingleton_727148d1aa0f6626,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDoubleValuesSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDoubleValuesSource(const MultiDoubleValuesSource& obj) : ::java::lang::Object(obj) {}

          MultiDoubleValuesSource();

          jboolean equals(const ::java::lang::Object &) const;
          static MultiDoubleValuesSource fromDoubleField(const ::java::lang::String &);
          static MultiDoubleValuesSource fromField(const ::java::lang::String &, const ::java::util::function::LongToDoubleFunction &);
          static MultiDoubleValuesSource fromFloatField(const ::java::lang::String &);
          static MultiDoubleValuesSource fromIntField(const ::java::lang::String &);
          static MultiDoubleValuesSource fromLongField(const ::java::lang::String &);
          static MultiDoubleValuesSource fromSingleValued(const ::org::apache::lucene::search::DoubleValuesSource &);
          ::org::apache::lucene::facet::MultiDoubleValues getValues(const ::org::apache::lucene::index::LeafReaderContext &) const;
          jint hashCode() const;
          ::org::apache::lucene::facet::MultiLongValuesSource toMultiLongValuesSource() const;
          ::org::apache::lucene::facet::MultiLongValuesSource toSortableMultiLongValuesSource() const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::search::DoubleValuesSource unwrapSingleton(const MultiDoubleValuesSource &);
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
        extern PyType_Def PY_TYPE_DEF(MultiDoubleValuesSource);
        extern PyTypeObject *PY_TYPE(MultiDoubleValuesSource);

        class t_MultiDoubleValuesSource {
        public:
          PyObject_HEAD
          MultiDoubleValuesSource object;
          static PyObject *wrap_Object(const MultiDoubleValuesSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
