#ifndef org_apache_lucene_search_FieldComparator$TermValComparator_H
#define org_apache_lucene_search_FieldComparator$TermValComparator_H

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
        class Scorable;
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

        class FieldComparator$TermValComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_e5b5ed9024f3aa7f,
            mid_compare_7f27cf81a85a97e9,
            mid_compareBottom_a3904e10f5bb9437,
            mid_compareTop_a3904e10f5bb9437,
            mid_compareValues_a0fa18546e6b17ce,
            mid_copy_645c25455f5b9b1c,
            mid_getLeafComparator_84b03b9ed9bc3019,
            mid_setBottom_8226bd0b0fc13dba,
            mid_setScorer_c06bdf7d53c6460a,
            mid_setTopValue_920ce0cdf4259cc9,
            mid_value_1e79f110a34c4312,
            mid_getBinaryDocValues_d763563797d0471f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator$TermValComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator$TermValComparator(const FieldComparator$TermValComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          FieldComparator$TermValComparator(jint, const ::java::lang::String &, jboolean);

          jint compare(jint, jint) const;
          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          jint compareValues(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          void copy(jint, jint) const;
          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setBottom(jint) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
          void setTopValue(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::BytesRef value(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldComparator$TermValComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator$TermValComparator);

        class t_FieldComparator$TermValComparator {
        public:
          PyObject_HEAD
          FieldComparator$TermValComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator$TermValComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator$TermValComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator$TermValComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
