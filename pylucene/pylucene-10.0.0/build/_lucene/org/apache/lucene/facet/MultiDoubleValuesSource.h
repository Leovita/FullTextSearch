#ifndef org_apache_lucene_facet_MultiDoubleValuesSource_H
#define org_apache_lucene_facet_MultiDoubleValuesSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class MultiDoubleValuesSource;
        class MultiDoubleValues;
        class MultiLongValuesSource;
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
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
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
            mid_init$_3720c61b0679eb3e,
            mid_equals_570b5248a6da3ef6,
            mid_fromDoubleField_d475bb9ea1c4d36c,
            mid_fromField_37adf6aa0fddfe4e,
            mid_fromFloatField_d475bb9ea1c4d36c,
            mid_fromIntField_d475bb9ea1c4d36c,
            mid_fromLongField_d475bb9ea1c4d36c,
            mid_fromSingleValued_8d636176b97afb3a,
            mid_getValues_afc3bdb89e05015b,
            mid_hashCode_20fbf7565993c3d7,
            mid_toMultiLongValuesSource_2f2713d2a506608d,
            mid_toSortableMultiLongValuesSource_2f2713d2a506608d,
            mid_toString_09a7afff1868fc5e,
            mid_unwrapSingleton_0b351177341ea68d,
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
