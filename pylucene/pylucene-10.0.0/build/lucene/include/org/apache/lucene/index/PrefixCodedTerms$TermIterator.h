#ifndef org_apache_lucene_index_PrefixCodedTerms$TermIterator_H
#define org_apache_lucene_index_PrefixCodedTerms$TermIterator_H

#include "org/apache/lucene/index/FieldTermIterator.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PrefixCodedTerms$TermIterator : public ::org::apache::lucene::index::FieldTermIterator {
         public:
          enum {
            mid_delGen_16939d9d0a9a9721,
            mid_field_09a7afff1868fc5e,
            mid_next_9740fddd1c7df148,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixCodedTerms$TermIterator(jobject obj) : ::org::apache::lucene::index::FieldTermIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixCodedTerms$TermIterator(const PrefixCodedTerms$TermIterator& obj) : ::org::apache::lucene::index::FieldTermIterator(obj) {}

          jlong delGen() const;
          ::java::lang::String field() const;
          ::org::apache::lucene::util::BytesRef next() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PrefixCodedTerms$TermIterator);
        extern PyTypeObject *PY_TYPE(PrefixCodedTerms$TermIterator);

        class t_PrefixCodedTerms$TermIterator {
        public:
          PyObject_HEAD
          PrefixCodedTerms$TermIterator object;
          static PyObject *wrap_Object(const PrefixCodedTerms$TermIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
