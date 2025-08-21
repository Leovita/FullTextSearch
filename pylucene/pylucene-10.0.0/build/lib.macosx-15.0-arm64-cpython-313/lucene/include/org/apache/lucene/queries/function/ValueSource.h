#ifndef org_apache_lucene_queries_function_ValueSource_H
#define org_apache_lucene_queries_function_ValueSource_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
        class SortField;
        class LongValuesSource;
        class IndexSearcher;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
          class ValueSource;
        }
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
      namespace queries {
        namespace function {

          class ValueSource : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_asDoubleValuesSource_7219b817ce6d1d1a,
              mid_asLongValuesSource_6d5a547f55f28d29,
              mid_createWeight_ed456f113984b95a,
              mid_description_09a7afff1868fc5e,
              mid_equals_570b5248a6da3ef6,
              mid_fromDoubleValuesSource_a66992962af9af5f,
              mid_getSortField_33273beb7e6f6fa1,
              mid_getValues_a7d46b98c691aeac,
              mid_hashCode_20fbf7565993c3d7,
              mid_newContext_aada28aa60f3c559,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ValueSource(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ValueSource(const ValueSource& obj) : ::java::lang::Object(obj) {}

            ValueSource();

            ::org::apache::lucene::search::DoubleValuesSource asDoubleValuesSource() const;
            ::org::apache::lucene::search::LongValuesSource asLongValuesSource() const;
            void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
            ::java::lang::String description() const;
            jboolean equals(const ::java::lang::Object &) const;
            static ValueSource fromDoubleValuesSource(const ::org::apache::lucene::search::DoubleValuesSource &);
            ::org::apache::lucene::search::SortField getSortField(jboolean) const;
            ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
            jint hashCode() const;
            static ::java::util::Map newContext(const ::org::apache::lucene::search::IndexSearcher &);
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
      namespace queries {
        namespace function {
          extern PyType_Def PY_TYPE_DEF(ValueSource);
          extern PyTypeObject *PY_TYPE(ValueSource);

          class t_ValueSource {
          public:
            PyObject_HEAD
            ValueSource object;
            static PyObject *wrap_Object(const ValueSource&);
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
