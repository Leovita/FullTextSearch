#ifndef org_apache_lucene_search_comparators_TermOrdValComparator_H
#define org_apache_lucene_search_comparators_TermOrdValComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        class Pruning;
        class LeafFieldComparator;
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
      namespace search {
        namespace comparators {

          class TermOrdValComparator : public ::org::apache::lucene::search::FieldComparator {
           public:
            enum {
              mid_init$_6ae3146968369176,
              mid_compare_7f733b5d08bb5ec4,
              mid_compareValues_c605ddf1ef691f34,
              mid_disableSkipping_3720c61b0679eb3e,
              mid_getLeafComparator_d019da77a226431f,
              mid_setSingleSort_3720c61b0679eb3e,
              mid_setTopValue_ac0de3ee0e03786d,
              mid_value_29bb531a30fe8369,
              mid_getSortedDocValues_759c56332e05d029,
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
