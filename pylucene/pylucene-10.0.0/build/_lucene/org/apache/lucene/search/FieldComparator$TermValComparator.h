#ifndef org_apache_lucene_search_FieldComparator$TermValComparator_H
#define org_apache_lucene_search_FieldComparator$TermValComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class LeafFieldComparator;
      }
      namespace util {
        class BytesRef;
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

        class FieldComparator$TermValComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_58d15134e785318e,
            mid_compare_7f733b5d08bb5ec4,
            mid_compareBottom_3c9bba330f083871,
            mid_compareTop_3c9bba330f083871,
            mid_compareValues_c605ddf1ef691f34,
            mid_copy_e13cff512ebda969,
            mid_getLeafComparator_d019da77a226431f,
            mid_setBottom_540b2b23d51b1efd,
            mid_setScorer_dd42dde4c0a7db1e,
            mid_setTopValue_ac0de3ee0e03786d,
            mid_value_29bb531a30fe8369,
            mid_getBinaryDocValues_c85a086b6aa0e32c,
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
