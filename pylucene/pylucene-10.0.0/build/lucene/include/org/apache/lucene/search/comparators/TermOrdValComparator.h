#ifndef org_apache_lucene_search_comparators_TermOrdValComparator_H
#define org_apache_lucene_search_comparators_TermOrdValComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace java {
  namespace lang {
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
      namespace util {
        class BytesRef;
      }
      namespace search {
        class LeafFieldComparator;
        class Pruning;
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
        namespace comparators {

          class TermOrdValComparator : public ::org::apache::lucene::search::FieldComparator {
           public:
            enum {
              mid_init$_2c8a1a4af8714596,
              mid_compare_7f27cf81a85a97e9,
              mid_compareValues_a0fa18546e6b17ce,
              mid_disableSkipping_e7bdbe105ce1bafb,
              mid_getLeafComparator_84b03b9ed9bc3019,
              mid_setSingleSort_e7bdbe105ce1bafb,
              mid_setTopValue_920ce0cdf4259cc9,
              mid_value_1e79f110a34c4312,
              mid_getSortedDocValues_cd4661ea70e6e695,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermOrdValComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermOrdValComparator(const TermOrdValComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

            TermOrdValComparator(jint, const ::java::lang::String &, jboolean, jboolean, const ::org::apache::lucene::search::Pruning &);

            jint compare(jint, jint) const;
            jint compareValues(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            void disableSkipping() const;
            ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
            void setSingleSort() const;
            void setTopValue(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef value(jint) const;
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
      namespace search {
        namespace comparators {
          extern PyType_Def PY_TYPE_DEF(TermOrdValComparator);
          extern PyTypeObject *PY_TYPE(TermOrdValComparator);

          class t_TermOrdValComparator {
          public:
            PyObject_HEAD
            TermOrdValComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TermOrdValComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TermOrdValComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TermOrdValComparator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
