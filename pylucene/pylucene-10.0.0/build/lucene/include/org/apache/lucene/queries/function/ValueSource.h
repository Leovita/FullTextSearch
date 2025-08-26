#ifndef org_apache_lucene_queries_function_ValueSource_H
#define org_apache_lucene_queries_function_ValueSource_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DoubleValuesSource;
        class LongValuesSource;
        class SortField;
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
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_asDoubleValuesSource_a04bc8c3654a6fd5,
              mid_asLongValuesSource_199c6718f27496e6,
              mid_createWeight_61f11467fc4f893b,
              mid_description_e7df854526d67fa3,
              mid_equals_00d17418847797d4,
              mid_fromDoubleValuesSource_ad98b67aefd5028d,
              mid_getSortField_6b771f2dc8fe37aa,
              mid_getValues_9f85153ef1e32cca,
              mid_hashCode_bd89ce15dad49192,
              mid_newContext_e7f16c3eb9801e11,
              mid_toString_e7df854526d67fa3,
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
