#ifndef org_apache_lucene_index_TermStates_H
#define org_apache_lucene_index_TermStates_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermStates;
        class IndexReaderContext;
        class Term;
        class TermState;
        class LeafReaderContext;
      }
      namespace util {
        class IOSupplier;
      }
      namespace search {
        class IndexSearcher;
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
      namespace index {

        class TermStates : public ::java::lang::Object {
         public:
          enum {
            mid_init$_34a1b095e161b54f,
            mid_init$_aea3cd045bea9a9d,
            mid_accumulateStatistics_1d43622e571bd043,
            mid_build_ac68caf84755b579,
            mid_clear_e7bdbe105ce1bafb,
            mid_docFreq_bd89ce15dad49192,
            mid_get_9556023c34c4426d,
            mid_register_217b8896587960ed,
            mid_register_c95c680d59b94b71,
            mid_toString_e7df854526d67fa3,
            mid_totalTermFreq_0f176418e3e16541,
            mid_wasBuiltFor_5a2be1e9a36ffe73,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStates(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermStates(const TermStates& obj) : ::java::lang::Object(obj) {}

          TermStates(const ::org::apache::lucene::index::IndexReaderContext &);
          TermStates(const ::org::apache::lucene::index::IndexReaderContext &, const ::org::apache::lucene::index::TermState &, jint, jint, jlong);

          void accumulateStatistics(jint, jlong) const;
          static TermStates build(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::index::Term &, jboolean);
          void clear() const;
          jint docFreq() const;
          ::org::apache::lucene::util::IOSupplier get(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint) const;
          void register$(const ::org::apache::lucene::index::TermState &, jint, jint, jlong) const;
          ::java::lang::String toString() const;
          jlong totalTermFreq() const;
          jboolean wasBuiltFor(const ::org::apache::lucene::index::IndexReaderContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(TermStates);
        extern PyTypeObject *PY_TYPE(TermStates);

        class t_TermStates {
        public:
          PyObject_HEAD
          TermStates object;
          static PyObject *wrap_Object(const TermStates&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
